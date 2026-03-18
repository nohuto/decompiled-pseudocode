/*
 * XREFs of ACPIInternalSetSpare @ 0x1C0085BD4
 * Callers:
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0085510 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C00857B0 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0003A88 (ACPIInternalClearFlags.c)
 *     ACPIQuerySpareDsm @ 0x1C009CE2C (ACPIQuerySpareDsm.c)
 */

__int64 __fastcall ACPIInternalSetSpare(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  bool v4; // si
  __int64 v5; // rax
  __int64 v6; // rcx
  char Data; // [rsp+80h] [rbp+8h] BYREF
  int v9; // [rsp+88h] [rbp+10h] BYREF
  ULONG Type; // [rsp+90h] [rbp+18h] BYREF
  ULONG RequiredSize; // [rsp+98h] [rbp+20h] BYREF

  v1 = (_QWORD *)(a1 + 8);
  v3 = 0;
  v4 = 0;
  ACPIInternalClearFlags((void *)(a1 + 8), 0x4000LL);
  if ( (*v1 & 0x2000000000LL) != 0 )
  {
    v4 = 1;
    if ( (int)ACPIQuerySpareDsm(a1, &v9) >= 0 && (v9 & 3) == 3 )
      *v1 |= 0x4000uLL;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 744);
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 8);
      if ( (v6 & 0x4000) != 0 )
        *v1 |= 0x4000uLL;
      else
        v4 = (v6 & 0x2000000000LL) != 0;
    }
  }
  if ( (*(_DWORD *)v1 & 0x4000LL) != 0 )
  {
    Data = -1;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 736),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  if ( v4
    && IoGetDevicePropertyData(
         *(PDEVICE_OBJECT *)(a1 + 736),
         &DEVPKEY_Spare_Device,
         0,
         0,
         1u,
         &Data,
         &RequiredSize,
         &Type) >= 0 )
  {
    Data = 0;
    return (unsigned int)IoSetDevicePropertyData(
                           *(PDEVICE_OBJECT *)(a1 + 736),
                           &DEVPKEY_Spare_Device,
                           0,
                           0,
                           0x11u,
                           1u,
                           &Data);
  }
  return v3;
}
