/*
 * XREFs of EnableHalftone @ 0x1C0153E90
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0153F04 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C03232C8 = EngCreateSemaphore();
  if ( !qword_1C03232C8 )
    return 0LL;
  Src = 0LL;
  qword_1C03232EC = 0LL;
  dword_1C03232E8 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C03232F4 = 0;
  qword_1C03232C0 = EngCreateSemaphore();
  if ( !qword_1C03232C0 )
    return 0LL;
  word_1C03232F6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
