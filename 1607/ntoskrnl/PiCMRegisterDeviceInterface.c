/*
 * XREFs of PiCMRegisterDeviceInterface @ 0x140648504
 * Callers:
 *     PiCMHandleIoctl @ 0x1404DF70C (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiCMReturnBufferResultData @ 0x1404DFBBC (PiCMReturnBufferResultData.c)
 *     _CmValidateDeviceName @ 0x1404E0950 (_CmValidateDeviceName.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140645FD4 (PiCMCaptureRegisterInterfaceInputData.c)
 */

__int64 __fastcall PiCMRegisterDeviceInterface(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  unsigned int v9; // ebx
  _WORD *v10; // rdi
  int v11; // esi
  __int64 v12; // rcx
  signed int v13; // r10d
  wchar_t *v14; // rsi
  __int64 v15; // r14
  int v16; // eax
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // bl
  int v20; // eax
  __int64 v21; // rbx
  _WORD *v22; // [rsp+50h] [rbp-39h] BYREF
  _DWORD *v23; // [rsp+58h] [rbp-31h]
  char v24[4]; // [rsp+60h] [rbp-29h] BYREF
  int v25; // [rsp+64h] [rbp-25h]
  int v26[4]; // [rsp+68h] [rbp-21h] BYREF
  wchar_t *v27; // [rsp+78h] [rbp-11h]
  void *v28; // [rsp+88h] [rbp-1h]
  unsigned int v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+94h] [rbp+Bh]

  v6 = a6;
  v23 = a6;
  v22 = 0LL;
  *a6 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = PiCMCaptureRegisterInterfaceInputData(a1, a2, a5, v24);
  if ( v11 < 0 )
    goto LABEL_16;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    v13 = -1073741790;
LABEL_13:
    v16 = PiCMReturnBufferResultData(v13, 2 * v9, 0, 0LL, 0, v30, a3, a4, v23);
    goto LABEL_14;
  }
  v14 = v27;
  if ( !v27 || v25 )
  {
    v13 = -1073741811;
  }
  else
  {
    v15 = (__int64)v28;
    if ( v28 && v29 < 2 || !a3 || a4 < 0x14 )
    {
      v13 = -1073741811;
      goto LABEL_13;
    }
    if ( a4 - 20 < 2 )
    {
      v13 = -1073741811;
      goto LABEL_13;
    }
    v13 = CmValidateDeviceName(v12, v27);
    if ( v13 < 0 )
      goto LABEL_13;
    v20 = IopRegisterDeviceInterface(v14, v26, v15, 1, (PVOID *)&v22, 0LL);
    v10 = v22;
    v13 = v20;
    if ( v20 < 0 )
      goto LABEL_13;
    v21 = -1LL;
    do
      ++v21;
    while ( v22[v21] );
    v9 = v21 + 1;
    if ( 2 * (unsigned __int64)v9 > a4 - 20 )
    {
      v13 = -1073741789;
      goto LABEL_13;
    }
    v6 = v23;
  }
  if ( v13 < 0 )
    goto LABEL_13;
  v16 = PiCMReturnBufferResultData(v13, 2 * v9, 0, v10, 2 * v9, v30, a3, a4, v6);
LABEL_14:
  v11 = v16;
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_16:
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( v27 )
    PiControlFreeUserModeCallersBuffer(CurrentThread->PreviousMode, v27);
  if ( v28 )
    PiControlFreeUserModeCallersBuffer(PreviousMode, v28);
  return (unsigned int)v11;
}
