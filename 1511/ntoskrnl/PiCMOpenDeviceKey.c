/*
 * XREFs of PiCMOpenDeviceKey @ 0x1404B28C0
 * Callers:
 *     PiCMHandleIoctl @ 0x140442988 (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     _CmOpenDeviceRegKey @ 0x14043AEB4 (_CmOpenDeviceRegKey.c)
 *     PiCMReleaseRegistryInputData @ 0x140442DCC (PiCMReleaseRegistryInputData.c)
 *     PiCMReturnHandleResultData @ 0x140442DFC (PiCMReturnHandleResultData.c)
 *     PiCMCaptureRegistryInputData @ 0x140442E78 (PiCMCaptureRegistryInputData.c)
 *     PiCMDuplicateRegistryHandle @ 0x140443F00 (PiCMDuplicateRegistryHandle.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     PiCMConvertDeviceKeyType @ 0x1404B2A84 (PiCMConvertDeviceKeyType.c)
 */

__int64 __fastcall PiCMOpenDeviceKey(_DWORD *a1, unsigned int a2, _OWORD *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _DWORD *v7; // r13
  KPROCESSOR_MODE PreviousMode; // r14
  int v10; // edi
  __int64 v11; // rdi
  int v12; // ebx
  int v13; // esi
  __int64 v14; // rdx
  HANDLE Handle; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v17; // [rsp+48h] [rbp-38h] BYREF
  char v18[4]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-2Ch]
  int v20; // [rsp+58h] [rbp-28h]
  __int64 v21; // [rsp+60h] [rbp-20h]
  int v22; // [rsp+6Ch] [rbp-14h]
  int v23; // [rsp+70h] [rbp-10h]
  unsigned int v24; // [rsp+74h] [rbp-Ch]
  int v25; // [rsp+78h] [rbp-8h]

  v17 = 0LL;
  Handle = 0LL;
  v7 = a6;
  LODWORD(a6) = 0;
  *v7 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, v18);
  if ( v10 < 0 )
    goto LABEL_21;
  v11 = v21;
  if ( !v21 || v20 != 1 || !a3 || a4 < 0x10 )
  {
    v12 = -1073741811;
    goto LABEL_15;
  }
  v12 = PiCMConvertDeviceKeyType(v19, &a6);
  if ( v12 >= 0 )
  {
    v13 = v22;
    v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (unsigned int)a6, v24, v22, 0, (__int64)&Handle, 0LL);
    if ( v12 != -1073741772 )
      goto LABEL_12;
    if ( v23 == 1 )
    {
      if ( !PiAuDoesClientHaveAccess(2u) )
      {
        v12 = -1073741790;
        goto LABEL_15;
      }
      v12 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, v11, (unsigned int)a6, v24, v13, 1, (__int64)&Handle, 0LL);
LABEL_12:
      if ( v12 >= 0 )
        v12 = PiCMDuplicateRegistryHandle(Handle, v14, v13, PreviousMode, &v17);
    }
  }
LABEL_15:
  v10 = PiCMReturnHandleResultData(v12, (__int64)v17, v25, a3, a4, v7);
  if ( Handle )
    ZwClose(Handle);
  if ( v10 < 0 || v12 < 0 )
  {
    if ( v17 )
      ObCloseHandle(v17, PreviousMode);
  }
LABEL_21:
  PiCMReleaseRegistryInputData((__int64)v18);
  return (unsigned int)v10;
}
