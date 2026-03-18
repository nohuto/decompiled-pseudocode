/*
 * XREFs of ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x14011B310
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D1(struct BLTINFO *a1)
{
  int *v1; // rdi
  char v2; // r8
  int v3; // r13d
  _BYTE *v4; // r14
  int v5; // r12d
  __int64 v6; // rbp
  int v7; // esi
  _BYTE *v8; // r15
  unsigned __int16 *v9; // rdi
  ULONG v10; // edx
  char v11; // bl
  ULONG v12; // eax
  int v13; // esi
  bool v14; // zf
  int v16; // [rsp+78h] [rbp+10h]
  XLATEOBJ *pxlo; // [rsp+88h] [rbp+20h]

  v1 = (int *)a1;
  v2 = 0;
  v3 = *((_DWORD *)a1 + 14) + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + ((__int64)*((int *)a1 + 14) >> 3));
  v5 = *((_DWORD *)a1 + 8);
  pxlo = *(XLATEOBJ **)a1;
  v16 = v5;
  v6 = *((_QWORD *)a1 + 1) + 2LL * *((int *)a1 + 12);
  while ( 1 )
  {
    v7 = v1[14];
    v8 = v4;
    if ( (v7 & 7) != 0 )
      v2 = *v4 >> (8 - (v7 & 7));
    if ( v7 != v3 )
    {
      v9 = (unsigned __int16 *)v6;
      do
      {
        v10 = *v9;
        v11 = 2 * v2;
        ++v9;
        v12 = XLATEOBJ_iXlate(pxlo, v10);
        v2 = v11 | 1;
        if ( !v12 )
          v2 = v11;
        if ( (++v7 & 7) == 0 )
          *v8++ = v2;
      }
      while ( v7 != v3 );
      v1 = (int *)a1;
      v5 = v16;
    }
    v13 = v7 & 7;
    if ( v13 )
    {
      v2 <<= 8 - v13;
      *v8 = (255 >> v13) & *v8 | v2 & ~(255 >> v13);
    }
    v14 = v5-- == 1;
    v16 = v5;
    if ( v14 )
      break;
    v6 += v1[10];
    v4 += v1[11];
  }
}
