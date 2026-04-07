/*
 * XREFs of ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x180073BE4
 * Callers:
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007427C (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180004560 (_TlgWrite.c)
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x180007808 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     atexit @ 0x180048648 (atexit.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(void)
{
  const struct _TlgProvider_t *v0; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  if ( (`WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' & 1) == 0 )
  {
    `WindowFrameLoggingTelemetry::Instance'::`2'::`local static guard' |= 1u;
    atexit((void (__cdecl *)())`WindowFrameLoggingTelemetry::Instance'::`2'::`dynamic atexit destructor for 'wrapper'');
  }
  InitOnceBeginInitialize(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1800BC508 = (__int64)&WindowFrameLogging::`vftable';
    Context = &qword_1800BC508;
    qword_1800BC510 = *((_QWORD *)WindowFrameLogging::Instance() + 1);
    byte_1800BC518 = 0;
    dword_1800BC51C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800BC508 + 8))(&qword_1800BC508);
    InitOnceComplete(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &qword_1800BC508);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1800A763C, 0LL, 0LL, 2u, &pData);
  }
}
