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
  qword_140328C28 = 0LL;
  qword_140328C90 = 0LL;
  qword_140328C70 = 0LL;
  dword_140328C78 = 0;
  qword_140328C60 = 0LL;
  qword_140328C80 = 0LL;
  qword_140328C38 = 0LL;
  qword_140328C58 = 0LL;
  qword_140328C40 = 0LL;
  qword_140328C50 = 0LL;
  qword_140328C48 = 0LL;
  qword_140328CA8 = 0LL;
  qword_140328CB0 = 0LL;
  qword_140328CB8 = 0LL;
  qword_140328C98 = 0LL;
  dword_140328C20 = 0;
  dword_140328C30 = 0;
  dword_140328C68 = 0;
  dword_140328CA4 = 0;
  dword_140328C88 = 0;
  dword_140328C34 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  qword_1402F4EF8 = 0x7FFFFFFFFFFFFFFFLL;
  qword_1402F4F08 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(&unk_140328B80, 0, 0x48uLL);
}
