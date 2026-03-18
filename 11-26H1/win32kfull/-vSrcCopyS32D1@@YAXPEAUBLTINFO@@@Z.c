/*
 * XREFs of ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x14011C720
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS32D1(struct BLTINFO *a1)
{
  char v1; // r8
  __int64 v2; // r12
  int v3; // ebp
  int v5; // r10d
  XLATEOBJ *v6; // r15
  _BYTE *v7; // r12
  __int64 v8; // r9
  int v9; // esi
  _BYTE *v10; // rbx
  ULONG *v11; // r14
  ULONG v12; // edx
  char v13; // di
  ULONG v14; // eax
  int v15; // esi
  bool v16; // zf
  int v17; // [rsp+60h] [rbp+8h]
  __int64 v18; // [rsp+68h] [rbp+10h]

  v1 = 0;
  v2 = *((int *)a1 + 14);
  v3 = v2 + *((_DWORD *)a1 + 7);
  v5 = *((_DWORD *)a1 + 8);
  v6 = *(XLATEOBJ **)a1;
  v7 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 3));
  v8 = *((_QWORD *)a1 + 1) + 4LL * *((int *)a1 + 12);
  v17 = v5;
  while ( 1 )
  {
    v9 = *((_DWORD *)a1 + 14);
    v10 = v7;
    v18 = v8;
    v11 = (ULONG *)v8;
    if ( (v9 & 7) != 0 )
      v1 = *v7 >> (8 - (v9 & 7));
    if ( v9 != v3 )
    {
      do
      {
        v12 = *v11++;
        v13 = 2 * v1;
        v14 = XLATEOBJ_iXlate(v6, v12);
        v1 = v13 | 1;
        if ( !v14 )
          v1 = v13;
        if ( (++v9 & 7) == 0 )
          *v10++ = v1;
      }
      while ( v9 != v3 );
      v8 = v18;
      v5 = v17;
    }
    v15 = v9 & 7;
    if ( v15 )
    {
      v1 <<= 8 - v15;
      *v10 = (255 >> v15) & *v10 | v1 & ~(255 >> v15);
    }
    v16 = v5-- == 1;
    v17 = v5;
    if ( v16 )
      break;
    v8 += *((int *)a1 + 10);
    v7 += *((int *)a1 + 11);
  }
}
