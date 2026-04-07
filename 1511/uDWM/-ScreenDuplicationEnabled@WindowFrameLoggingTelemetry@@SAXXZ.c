/*
 * XREFs of ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007BC84
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x1800112F4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18003E74C (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     atexit @ 0x18004ECA8 (atexit.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(void)
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
    qword_1800BBCD8 = (__int64)&WindowFrameLogging::`vftable';
    Context = &qword_1800BBCD8;
    qword_1800BBCE0 = *((_QWORD *)WindowFrameLogging::Instance() + 1);
    byte_1800BBCE8 = 0;
    dword_1800BBCEC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1800BBCD8 + 8))(&qword_1800BBCD8);
    InitOnceComplete(&`WindowFrameLoggingTelemetry::Instance'::`2'::wrapper, 0, &qword_1800BBCD8);
  }
  v0 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1800A9A54, 0LL, 0LL, 2u, &pData);
  }
}
