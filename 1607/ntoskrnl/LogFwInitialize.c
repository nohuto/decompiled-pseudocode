/*
 * XREFs of LogFwInitialize @ 0x1407255A8
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140725E8C (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

void *LogFwInitialize()
{
  dword_1402F9F90 |= 0x80u;
  qword_140328C68 = 0LL;
  qword_140328CD0 = 0LL;
  qword_140328CB0 = 0LL;
  dword_140328CB8 = 0;
  qword_140328CA0 = 0LL;
  qword_140328CC0 = 0LL;
  qword_140328C78 = 0LL;
  qword_140328C98 = 0LL;
  qword_140328C80 = 0LL;
  qword_140328C90 = 0LL;
  qword_140328C88 = 0LL;
  qword_140328CE8 = 0LL;
  qword_140328CF0 = 0LL;
  qword_140328CF8 = 0LL;
  qword_140328CD8 = 0LL;
  dword_140328C60 = 0;
  dword_140328C70 = 0;
  dword_140328CA8 = 0;
  dword_140328CE4 = 0;
  dword_140328CC8 = 0;
  dword_140328C74 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  qword_1402F4EF8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_1402F4F08 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(&unk_140328BC0, 0, 0x48uLL);
}
