/*
 * XREFs of ACPIInternalSetSpare @ 0x1C0067A18
 * Callers:
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0067600 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0067730 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C00044C8 (ACPIInternalClearFlags.c)
 *     ACPIQuerySpareDsm @ 0x1C007B9EC (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIInternalSetSpare(__int64 *a1)
{
  unsigned int v1; // ebx
  bool v3; // si
  __int64 *v4; // rcx
  __int64 v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rax
  char Data; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+78h] [rbp+10h] BYREF
  ULONG Type; // [rsp+80h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+88h] [rbp+20h] BYREF

  v1 = 0;
  v3 = 0;
  ACPIInternalClearFlags(a1, 0x4000LL);
  v5 = *v4;
  if ( (v5 & 0x2000000000LL) != 0 )
  {
    v3 = 1;
    if ( (int)ACPIQuerySpareDsm(a1, &v10) >= 0 && (v10 & 3) == 3 )
      *a1 |= 0x4000uLL;
  }
  else
  {
    v6 = (__int64 *)a1[92];
    if ( v6 )
    {
      v7 = *v6;
      if ( (v7 & 0x4000) != 0 )
        *a1 = v5 | 0x4000;
      else
        v3 = (v7 & 0x2000000000LL) != 0;
    }
  }
  if ( (*(_DWORD *)a1 & 0x4000LL) != 0 )
  {
    Data = -1;
    return (unsigned int)IoSetDevicePropertyData((PDEVICE_OBJECT)a1[91], &DEVPKEY_Spare_Device, 0, 0, 0x11u, 1u, &Data);
  }
  if ( v3
    && IoGetDevicePropertyData((PDEVICE_OBJECT)a1[91], &DEVPKEY_Spare_Device, 0, 0, 1u, &Data, &RequiredSize, &Type) >= 0 )
  {
    Data = 0;
    return (unsigned int)IoSetDevicePropertyData((PDEVICE_OBJECT)a1[91], &DEVPKEY_Spare_Device, 0, 0, 0x11u, 1u, &Data);
  }
  return v1;
}
