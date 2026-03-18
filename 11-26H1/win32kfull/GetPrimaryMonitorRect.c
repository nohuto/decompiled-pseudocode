/*
 * XREFs of GetPrimaryMonitorRect @ 0x140252E48
 * Callers:
 *     xxxSoundSentry @ 0x1401B124C (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRect @ 0x140030144 (GetMonitorRect.c)
 */

__m128i *__fastcall GetPrimaryMonitorRect(__m128i *a1, __int64 a2)
{
  __int64 DispInfo; // rax

  DispInfo = GetDispInfo(a1, a2);
  GetMonitorRect(a1, *(_QWORD *)(DispInfo + 96));
  return a1;
}
