/*
 * XREFs of ??4CDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x180139E8C
 * Callers:
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38 (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplay::operator=(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  __int64 v3; // r9

  v2 = (_WORD *)(a1 + 144);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v3 = 32LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 72) = *(_OWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 88);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 104);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 120);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a2 + 136);
  do
  {
    *v2 = *(_WORD *)((char *)v2 + a2 - a1);
    ++v2;
    --v3;
  }
  while ( v3 );
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 208);
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
  *(_BYTE *)(a1 + 220) = *(_BYTE *)(a2 + 220);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 232);
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(a2 + 240);
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(a2 + 244);
  *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 248);
  *(_DWORD *)(a1 + 252) = *(_DWORD *)(a2 + 252);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a2 + 260);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a2 + 264);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a2 + 280);
  *(_DWORD *)(a1 + 288) = *(_DWORD *)(a2 + 288);
  *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
  *(_BYTE *)(a1 + 296) = *(_BYTE *)(a2 + 296);
  *(_BYTE *)(a1 + 297) = *(_BYTE *)(a2 + 297);
  *(_BYTE *)(a1 + 298) = *(_BYTE *)(a2 + 298);
  *(_BYTE *)(a1 + 299) = *(_BYTE *)(a2 + 299);
  *(_BYTE *)(a1 + 300) = *(_BYTE *)(a2 + 300);
  *(_BYTE *)(a1 + 301) = *(_BYTE *)(a2 + 301);
  *(_BYTE *)(a1 + 302) = *(_BYTE *)(a2 + 302);
  *(_BYTE *)(a1 + 303) = *(_BYTE *)(a2 + 303);
  *(_BYTE *)(a1 + 304) = *(_BYTE *)(a2 + 304);
  return a1;
}
