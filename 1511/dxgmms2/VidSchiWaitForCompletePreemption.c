/*
 * XREFs of VidSchiWaitForCompletePreemption @ 0x1C008B054
 * Callers:
 *     VidSchiCompletePreemption @ 0x1C0020D48 (VidSchiCompletePreemption.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C000B390 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C003C908 (VidSchWaitForCompletionEvent.c)
 */

__int64 __fastcall VidSchiWaitForCompletePreemption(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  int v3; // eax
  __int64 v4; // r9
  __int64 v5; // r9
  _DWORD v7[42]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1;
  memset(v7, 0, 0xA0uLL);
  v3 = *(unsigned __int16 *)(v2 + 4);
  v7[8] |= 0x11u;
  v7[4] = 2;
  v7[5] = 1;
  v7[12] = v3;
  VidSchiProfilePerformanceTick(18LL, v1, 0LL, v4, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v2) = VidSchWaitForCompletionEvent(v1, (__int64)v7, 0xFFFFFFFFLL);
  VidSchiProfilePerformanceTick(19LL, v1, 0LL, v5, 0LL, 0LL, 0LL, 0LL);
  return (unsigned int)v2;
}
