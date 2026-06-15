/*
 * XREFs of WPP_SF_ddddddd @ 0x1800839D0
 * Callers:
 *     AudioWriteLogHeader @ 0x180032634 (AudioWriteLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_ddddddd(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+C8h] [rbp+20h] BYREF
  va_list va; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_483a8a3c775031d59c363eb705791695_Traceguids, 13LL, &v5, 4LL, (__int64 *)va);
}
