/*
 * XREFs of LogFwInitialize @ 0x14075C5B0
 * Callers:
 *     BgpFwLibraryInitialize @ 0x14075D630 (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

void *LogFwInitialize()
{
  dword_140323CF0 |= 0x80u;
  qword_140356D30 = 0LL;
  qword_140356D58 = 0LL;
  qword_140356D40 = 0LL;
  dword_140356D60 = 0;
  qword_140356D90 = 0LL;
  qword_140356D38 = 0LL;
  qword_140356D80 = 0LL;
  qword_140356D10 = 0LL;
  qword_140356D68 = 0LL;
  qword_140356D78 = 0LL;
  qword_140356D50 = 0LL;
  qword_140356D70 = 0LL;
  qword_140356D20 = 0LL;
  qword_140356D28 = 0LL;
  qword_140356CF8 = 0LL;
  dword_140356D8C = 0;
  dword_140356D48 = 0;
  dword_140356D88 = 0;
  dword_140356D18 = 0;
  dword_140356D04 = 0;
  dword_140356D08 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  qword_14031E878 = 0x7FFFFFFFFFFFFFFFLL;
  qword_14031E888 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(&unk_140356920, 0, 0x48uLL);
}
