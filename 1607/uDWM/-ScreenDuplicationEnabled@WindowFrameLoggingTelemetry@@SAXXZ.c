/*
 * XREFs of ?ScreenDuplicationEnabled@WindowFrameLoggingTelemetry@@SAXXZ @ 0x18007C968
 * Callers:
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@@@Z @ 0x18007CAE0 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJPEBU_D3DKMT_OUTPUTDUPL_LOWBOX_CONTEXTS_@.c)
 * Callees:
 *     ?Instance@WindowFrameLogging@@KAPEAV1@XZ @ 0x18003DAA4 (-Instance@WindowFrameLogging@@KAPEAV1@XZ.c)
 *     _TlgWrite @ 0x18004CAA0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

void WindowFrameLoggingTelemetry::ScreenDuplicationEnabled(void)
{
  const struct _TlgProvider_t *v0; // rcx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = (const struct _TlgProvider_t *)*((_QWORD *)WindowFrameLogging::Instance() + 1);
  if ( *(_DWORD *)v0 > 5u
    && (*((_QWORD *)v0 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v0 + 3) & 0x200000000000LL) == *((_QWORD *)v0 + 3) )
  {
    TlgWrite(v0, &unk_1800A8005, 0LL, 0LL, 2u, &pData);
  }
}
