/*
 * XREFs of ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x14011C110
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS24D1(struct BLTINFO *a1)
{
  int *v1; // rdi
  __int64 v2; // r14
  char v3; // r8
  int v4; // r12d
  int v5; // r9d
  _BYTE *v6; // r14
  __int64 i; // rcx
  int v8; // esi
  __int64 v9; // rbp
  _BYTE *v10; // r15
  unsigned __int8 *v11; // r13
  int v12; // eax
  int v13; // edx
  char v14; // bl
  ULONG v15; // eax
  int v16; // esi
  int v18; // [rsp+78h] [rbp+10h]
  XLATEOBJ *pxlo; // [rsp+80h] [rbp+18h]
  __int64 v20; // [rsp+88h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((int *)a1 + 14);
  v3 = 0;
  v4 = *((_DWORD *)a1 + 8);
  v5 = v2 + *((_DWORD *)a1 + 7);
  v6 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 3));
  pxlo = *(XLATEOBJ **)a1;
  v18 = v5;
  for ( i = 3 * *((_DWORD *)a1 + 12) + *((_QWORD *)a1 + 1) + 1LL; ; i = v9 + v1[10] )
  {
    v8 = v1[14];
    v9 = i;
    v20 = i;
    v10 = v6;
    if ( (v8 & 7) != 0 )
      v3 = *v6 >> (8 - (v8 & 7));
    if ( v8 != v5 )
    {
      v11 = (unsigned __int8 *)i;
      do
      {
        v12 = *v11;
        v13 = v11[1];
        v11 += 3;
        v14 = 2 * v3;
        v15 = XLATEOBJ_iXlate(pxlo, *(v11 - 4) | ((v12 | (v13 << 8)) << 8));
        v3 = v14 | 1;
        if ( !v15 )
          v3 = v14;
        if ( (++v8 & 7) == 0 )
          *v10++ = v3;
      }
      while ( v8 != v18 );
      v1 = (int *)a1;
      v9 = v20;
      v5 = v18;
    }
    v16 = v8 & 7;
    if ( v16 )
    {
      v3 <<= 8 - v16;
      *v10 = (255 >> v16) & *v10 | v3 & ~(255 >> v16);
    }
    if ( !--v4 )
      break;
    v6 += v1[11];
  }
}
