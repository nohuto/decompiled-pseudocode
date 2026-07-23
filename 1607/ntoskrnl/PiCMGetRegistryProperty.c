/*
 * XREFs of PiCMGetRegistryProperty @ 0x1404E5D50
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x1404DFDDC (_CmGetDeviceRegProp.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1404E5B98 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1404E5F00 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1404E5F4C (PiCMConvertRegistryProperty.c)
 *     _CmGetInstallerClassRegProp @ 0x1404E72F8 (_CmGetInstallerClassRegProp.c)
 */

__int64 __fastcall PiCMGetRegistryProperty(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  PVOID PoolWithTag; // rdi
  signed int v10; // ebx
  signed int DeviceRegProp; // eax
  signed int v12; // eax
  int v14; // [rsp+58h] [rbp-9h] BYREF
  int v15; // [rsp+5Ch] [rbp-5h] BYREF
  char v16[4]; // [rsp+60h] [rbp-1h] BYREF
  int v17; // [rsp+64h] [rbp+3h]
  int v18; // [rsp+68h] [rbp+7h]
  __int64 v19; // [rsp+70h] [rbp+Fh]
  unsigned int v20; // [rsp+7Ch] [rbp+1Bh]
  int v21; // [rsp+80h] [rbp+1Fh]
  __int64 v22; // [rsp+88h] [rbp+27h]
  int v23; // [rsp+90h] [rbp+2Fh]
  int v24; // [rsp+94h] [rbp+33h]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  PoolWithTag = 0LL;
  *a6 = 0;
  LODWORD(a6) = 0;
  v10 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, v16);
  if ( v10 < 0 )
    goto LABEL_21;
  if ( v19 && !v17 && !v22 && !v23 && !v21 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_22;
    }
    if ( a4 != 20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 - 20, 0x34706E50u);
      if ( !PoolWithTag )
        v10 = -1073741670;
    }
    if ( v10 < 0 )
      goto LABEL_22;
    v10 = PiCMConvertRegistryProperty(v20, &v15);
    if ( v10 < 0 )
      goto LABEL_22;
    LODWORD(a6) = a4 - 20;
    if ( v18 == 1 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v19,
                        0LL,
                        v15,
                        (__int64)&v14,
                        (__int64)PoolWithTag,
                        (__int64)&a6,
                        0);
LABEL_16:
      v10 = DeviceRegProp;
      goto LABEL_17;
    }
    if ( v18 == 2 )
    {
      DeviceRegProp = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        v19,
                        0,
                        v15,
                        (__int64)&v14,
                        (__int64)PoolWithTag,
                        (__int64)&a6);
      goto LABEL_16;
    }
  }
  v10 = -1073741811;
LABEL_17:
  if ( v10 >= 0 )
  {
    v12 = PiCMReturnBufferResultData(v10, (unsigned int)a6, v14, PoolWithTag, (unsigned int)a6, v24, a3, a4, v6);
    goto LABEL_19;
  }
LABEL_22:
  v12 = PiCMReturnBufferResultData(v10, (unsigned int)a6, v14, 0LL, 0, v24, a3, a4, v6);
LABEL_19:
  v10 = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_21:
  PiCMReleaseRegistryPropertyInputData(v16);
  return (unsigned int)v10;
}
