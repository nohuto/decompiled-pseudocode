/*
 * XREFs of PiCMOpenDeviceInterfaceKey @ 0x140647EF4
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMDuplicateRegistryHandle @ 0x1404DB940 (PiCMDuplicateRegistryHandle.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1404DBA84 (_CmOpenDeviceInterfaceRegKey.c)
 *     PiCMReturnHandleResultData @ 0x1404DCA48 (PiCMReturnHandleResultData.c)
 *     PiCMReleaseRegistryInputData @ 0x1404DCD98 (PiCMReleaseRegistryInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1404E47FC (PiCMCaptureRegistryInputData.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 */

__int64 __fastcall PiCMOpenDeviceInterfaceKey(
        _DWORD *a1,
        unsigned int a2,
        _OWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // r9
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r9
  HANDLE v19; // [rsp+40h] [rbp-40h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-38h] BYREF
  char v21[4]; // [rsp+50h] [rbp-30h] BYREF
  int v22; // [rsp+54h] [rbp-2Ch]
  int v23; // [rsp+58h] [rbp-28h]
  __int64 v24; // [rsp+60h] [rbp-20h]
  int v25; // [rsp+6Ch] [rbp-14h]
  int v26; // [rsp+70h] [rbp-10h]
  int v27; // [rsp+74h] [rbp-Ch]
  int v28; // [rsp+78h] [rbp-8h]

  v6 = a6;
  v19 = 0LL;
  Handle = 0LL;
  a6 = 0LL;
  *v6 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = PiCMCaptureRegistryInputData(a1, a2, a5, v21);
  if ( v10 < 0 )
    goto LABEL_27;
  v12 = v24;
  if ( !v24 || v22 || v23 != 4 || v27 || !a3 || a4 < 0x10 )
  {
    v13 = -1073741811;
    goto LABEL_19;
  }
  v13 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v24, 0x30u, v11, 1, 0, (__int64)&Handle, 0LL);
  if ( v13 == -1073741772 )
    v13 = -1073741127;
  if ( v13 < 0 )
    goto LABEL_19;
  v15 = v25;
  v13 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v12, 0x32u, v14, v25, 0, (__int64)&a6, 0LL);
  if ( v13 != -1073741772 )
    goto LABEL_16;
  if ( v26 == 1 )
  {
    if ( !PiAuDoesClientHaveAccess(2u) )
    {
      v13 = -1073741790;
      goto LABEL_19;
    }
    v13 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, v12, 0x32u, v17, v15, 1, (__int64)&a6, 0LL);
LABEL_16:
    if ( v13 >= 0 )
      v13 = PiCMDuplicateRegistryHandle(a6, v16, v15, PreviousMode, &v19);
  }
LABEL_19:
  v10 = PiCMReturnHandleResultData(v13, (__int64)v19, v28, a3, a4, v6);
  if ( Handle )
    ZwClose(Handle);
  if ( a6 )
    ZwClose(a6);
  if ( v10 < 0 || v13 < 0 )
  {
    if ( v19 )
      ObCloseHandle(v19, PreviousMode);
  }
LABEL_27:
  PiCMReleaseRegistryInputData((__int64)v21);
  return (unsigned int)v10;
}
