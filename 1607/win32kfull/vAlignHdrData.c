/*
 * XREFs of vAlignHdrData @ 0x1C00190C8
 * Callers:
 *     bConvertFontRes @ 0x1C00193B8 (bConvertFontRes.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall vAlignHdrData(_WORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int16 v4; // ax
  unsigned __int16 v5; // ax
  int v6; // ecx
  __int16 v7; // r8
  __int16 v8; // dx
  __int64 result; // rax

  v2 = *a2;
  memset(a1, 0, 0x20uLL);
  *a1 = *(_WORD *)v2;
  *((_BYTE *)a1 + 4) = *(_BYTE *)(v2 + 95);
  *((_BYTE *)a1 + 5) = *(_BYTE *)(v2 + 96);
  *((_BYTE *)a1 + 6) = *(_BYTE *)(v2 + 97);
  *((_BYTE *)a1 + 7) = *(_BYTE *)(v2 + 98);
  a1[4] = *(_WORD *)(v2 + 88);
  v4 = *(unsigned __int8 *)(v2 + 85);
  a1[7] = v4;
  v5 = v4 - 128;
  if ( v5 <= 8u && (v6 = 323, _bittest(&v6, v5)) )
  {
    a1[6] = *(_WORD *)(v2 + 93);
    a1[5] = *(_WORD *)(v2 + 93);
  }
  else
  {
    v7 = *(_WORD *)(v2 + 86);
    v8 = *(_WORD *)(v2 + 93);
    if ( v7 && v7 == *(_WORD *)(v2 + 91) )
      v8 = *(_WORD *)(v2 + 86);
    a1[5] = v8;
    a1[6] = 0;
  }
  result = 512LL;
  if ( *a1 == 512 )
  {
    *((_DWORD *)a1 + 4) = 118;
  }
  else
  {
    result = 0xFFFFFFFFLL;
    if ( *a1 == 768 )
      result = 148LL;
    *((_DWORD *)a1 + 4) = result;
  }
  return result;
}
