/*
 * XREFs of LogFwInitialize @ 0x1406D95C4
 * Callers:
 *     BgpFwLibraryInitialize @ 0x1406DA5E8 (BgpFwLibraryInitialize.c)
 * Callees:
 *     <none>
 */

void *LogFwInitialize()
{
  dword_1402D4BB0 |= 0x80u;
  qword_140306A28 = 0LL;
  qword_140306A48 = 0LL;
  qword_140306A20 = 0LL;
  dword_140306A50 = 0;
  qword_140306A78 = 0LL;
  qword_140306A30 = 0LL;
  qword_140306A70 = 0LL;
  qword_140306A10 = 0LL;
  qword_140306A58 = 0LL;
  qword_140306A68 = 0LL;
  qword_140306A40 = 0LL;
  qword_140306A60 = 0LL;
  qword_140306A18 = 0LL;
  qword_140306A08 = 0LL;
  qword_1403069F0 = 0LL;
  dword_140306A84 = 0;
  dword_140306A38 = 0;
  dword_140306A80 = 0;
  dword_1403069FC = 0;
  dword_1403069E8 = 0;
  dword_140306A00 = 0;
  PerformanceFrequency.QuadPart = 1LL;
  qword_1402CF818 = 0x7FFFFFFFFFFFFFFFLL;
  qword_1402CF828 = 0x7FFFFFFFFFFFFFFFLL;
  return memset(&unk_140306620, 0, 0x48uLL);
}
