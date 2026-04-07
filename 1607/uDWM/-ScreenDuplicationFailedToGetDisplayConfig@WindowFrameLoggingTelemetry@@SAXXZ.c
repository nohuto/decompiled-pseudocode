/*
 * XREFs of ?ScreenDuplicationFailedToGetDisplayConfig@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C9E4
 * Callers:
 *     ?_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z @ 0x18007CFE8 (-_GetAdapterDisplayRect@CProjectionBorderManager@@AEAAJAEBU_LUID@@IPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

void WindowFrameLoggingTelemetry::ScreenDuplicationFailedToGetDisplayConfig(void)
{
  const struct _TlgProvider_t *v0; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = (const struct _TlgProvider_t *)*((_QWORD *)WindowFrameLogging::Instance() + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1800A805C, 0LL, 0LL, 2u, &pData);
  }
}
