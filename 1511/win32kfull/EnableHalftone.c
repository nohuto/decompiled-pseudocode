/*
 * XREFs of EnableHalftone @ 0x1C0110660
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C01106D4 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0323DB8 = EngCreateSemaphore();
  if ( !qword_1C0323DB8 )
    return 0LL;
  Src = 0LL;
  qword_1C0323DDC = 0LL;
  dword_1C0323DD8 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0323DE4 = 0;
  qword_1C0323DB0 = EngCreateSemaphore();
  if ( !qword_1C0323DB0 )
    return 0LL;
  word_1C0323DE6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
