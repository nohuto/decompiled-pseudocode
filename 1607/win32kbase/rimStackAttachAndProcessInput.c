/*
 * XREFs of rimStackAttachAndProcessInput @ 0x1C000FEEC
 * Callers:
 *     rimProcessMouseInput @ 0x1C0010280 (rimProcessMouseInput.c)
 *     rimProcessKeyboardInput @ 0x1C0081DD0 (rimProcessKeyboardInput.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 *     rimDispatchAutoRepeatCompleteFrame @ 0x1C00D81F4 (rimDispatchAutoRepeatCompleteFrame.c)
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 *     rimDispatchHidKeyboardInputData @ 0x1C00DED30 (rimDispatchHidKeyboardInputData.c)
 * Callees:
 *     rimProcessInput @ 0x1C000FF78 (rimProcessInput.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_qqqD @ 0x1C00CDC84 (WPP_RECORDER_SF_qqqD.c)
 */

void __fastcall rimStackAttachAndProcessInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  struct _KPROCESS *v5; // rsi
  char v10; // di
  int v11; // edx
  int v12; // r8d
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  v5 = *(struct _KPROCESS **)(a1 + 32);
  v10 = 0;
  if ( v5 != (struct _KPROCESS *)PsGetCurrentProcess() )
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      DbgPrintRIMAlways("rimStackAttachAndProcessInput: hRim:%p[P:%p,T:%p]dwInputType:%08x stack attach not allowed dropping input!\n");
      WPP_RECORDER_SF_qqqD(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v12,
        19,
        (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
        *(_QWORD *)(a1 + 64),
        *(_QWORD *)(a1 + 32),
        *(_QWORD *)(a1 + 40),
        *(_DWORD *)(a1 + 76));
      *(_BYTE *)(a1 + 712) = 1;
      return;
    }
    KeStackAttachProcess(v5, &ApcState);
    v10 = 1;
  }
  rimProcessInput(a1, a2, a3, a4, a5);
  if ( v10 )
    KeUnstackDetachProcess(&ApcState);
}
