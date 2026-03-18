/*
 * XREFs of MiClearPfnReuseFields @ 0x140022220
 * Callers:
 *     MiSwapStackPageNoDpc @ 0x14010BB54 (MiSwapStackPageNoDpc.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiClearPfnReuseFields(__int64 a1)
{
  unsigned __int64 result; // rax

  result = 0xFDFFFFFFFFFFFFFFuLL;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  return result;
}
