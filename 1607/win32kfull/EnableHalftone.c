/*
 * XREFs of EnableHalftone @ 0x1C0131080
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C01310F4 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0329168 = EngCreateSemaphore();
  if ( !qword_1C0329168 )
    return 0LL;
  Src = 0LL;
  qword_1C032918C = 0LL;
  dword_1C0329188 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0329194 = 0;
  qword_1C0329160 = EngCreateSemaphore();
  if ( !qword_1C0329160 )
    return 0LL;
  word_1C0329196 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
