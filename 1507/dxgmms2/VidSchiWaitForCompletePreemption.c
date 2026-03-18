/*
 * XREFs of VidSchiWaitForCompletePreemption @ 0x1C0077860
 * Callers:
 *     VidSchiCompletePreemption @ 0x1C0015EC4 (VidSchiCompletePreemption.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0004F20 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0079BB0 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForCompletePreemption(__int64 a1)
{
  struct _VIDSCH_GLOBAL *v1; // rdi
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r9
  _DWORD v7[40]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = *(struct _VIDSCH_GLOBAL **)(a1 + 24);
  v2 = a1;
  memset(v7, 0, sizeof(v7));
  v3 = *(unsigned __int16 *)(v2 + 4);
  v7[8] |= 0x22u;
  v7[4] = 2;
  v7[5] = 1;
  v7[12] = v3;
  VidSchiProfilePerformanceTick(18LL, (__int64)v1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v2) = VidSchWaitForCompletionEvent(v1);
  VidSchiProfilePerformanceTick(19LL, (__int64)v1, 0LL, v5, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v2;
}
