/*
 * XREFs of ??1DCOBJA@@QEAA@XZ @ 0x1C0049624
 * Callers:
 *     GreSelectRedirectionBitmap @ 0x1C0049680 (GreSelectRedirectionBitmap.c)
 *     NtGdiCancelDC @ 0x1C02A6FD0 (NtGdiCancelDC.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0049344 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJA::~DCOBJA(DCOBJA *this)
{
  XDCOBJ::vAltUnlockNoNullSet(this);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((char *)this + 16);
}
