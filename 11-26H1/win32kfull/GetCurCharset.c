/*
 * XREFs of GetCurCharset @ 0x14030A7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall GetCurCharset(int a1, __int64 a2)
{
  return *(_BYTE *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 20352LL);
}
