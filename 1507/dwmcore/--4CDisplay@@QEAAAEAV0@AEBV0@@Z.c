/*
 * XREFs of ??4CDisplay@@QEAAAEAV0@AEBV0@@Z @ 0x1801248DC
 * Callers:
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDisplay::operator=(__int64 a1, __int64 a2)
{
  _WORD *v2; // r8
  __int64 v3; // r10
  __int64 v4; // r9
  _WORD *v5; // r8
  __int64 v6; // r9

  v2 = (_WORD *)(a1 + 160);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v3 = a2 - a1;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  v4 = 32LL;
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 56) = *(_QWORD *)(a2 + 56);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 72);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(a2 + 144);
  *(_BYTE *)(a1 + 145) = *(_BYTE *)(a2 + 145);
  *(_BYTE *)(a1 + 146) = *(_BYTE *)(a2 + 146);
  *(_BYTE *)(a1 + 147) = *(_BYTE *)(a2 + 147);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(a2 + 148);
  *(_BYTE *)(a1 + 149) = *(_BYTE *)(a2 + 149);
  *(_QWORD *)(a1 + 152) = *(_QWORD *)(a2 + 152);
  do
  {
    *v2 = *(_WORD *)((char *)v2 + v3);
    ++v2;
    --v4;
  }
  while ( v4 );
  v5 = (_WORD *)(a1 + 306);
  *(_DWORD *)(a1 + 224) = *(_DWORD *)(a2 + 224);
  v6 = 260LL;
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 232);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a2 + 248);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a2 + 264);
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a2 + 280);
  *(_DWORD *)(a1 + 284) = *(_DWORD *)(a2 + 284);
  *(_BYTE *)(a1 + 288) = *(_BYTE *)(a2 + 288);
  *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 296);
  *(_BYTE *)(a1 + 304) = *(_BYTE *)(a2 + 304);
  do
  {
    *v5 = *(_WORD *)((char *)v5 + v3);
    ++v5;
    --v6;
  }
  while ( v6 );
  *(_DWORD *)(a1 + 828) = *(_DWORD *)(a2 + 828);
  *(_QWORD *)(a1 + 832) = *(_QWORD *)(a2 + 832);
  *(_QWORD *)(a1 + 840) = *(_QWORD *)(a2 + 840);
  *(_DWORD *)(a1 + 848) = *(_DWORD *)(a2 + 848);
  *(_DWORD *)(a1 + 852) = *(_DWORD *)(a2 + 852);
  *(_DWORD *)(a1 + 856) = *(_DWORD *)(a2 + 856);
  *(_DWORD *)(a1 + 860) = *(_DWORD *)(a2 + 860);
  *(_DWORD *)(a1 + 864) = *(_DWORD *)(a2 + 864);
  *(_OWORD *)(a1 + 868) = *(_OWORD *)(a2 + 868);
  *(_QWORD *)(a1 + 884) = *(_QWORD *)(a2 + 884);
  *(_DWORD *)(a1 + 892) = *(_DWORD *)(a2 + 892);
  *(_DWORD *)(a1 + 896) = *(_DWORD *)(a2 + 896);
  *(_BYTE *)(a1 + 900) = *(_BYTE *)(a2 + 900);
  *(_BYTE *)(a1 + 901) = *(_BYTE *)(a2 + 901);
  *(_BYTE *)(a1 + 902) = *(_BYTE *)(a2 + 902);
  return a1;
}
