/*
 * XREFs of ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x14033AE40
 * Callers:
 *     ?BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z @ 0x1400DD5A0 (-BltLnkRect@@YAXPEAU_BLTLNKINFO@@PEAU_RECTL@@@Z.c)
 *     EngCopyBits @ 0x1400E3940 (EngCopyBits.c)
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D4(struct BLTINFO *a1)
{
  int *v1; // rdi
  __int64 v2; // rsi
  int v3; // eax
  _BYTE *v4; // rsi
  unsigned __int16 *v5; // r14
  XLATEOBJ *v6; // rax
  int v7; // ebp
  _BYTE *v8; // r15
  unsigned __int16 *v9; // r12
  char v10; // bl
  int v11; // eax
  int v12; // r13d
  char v13; // bl
  char v14; // al
  char v15; // bl
  int v17; // [rsp+88h] [rbp+10h]
  int v18; // [rsp+90h] [rbp+18h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp+20h]

  v1 = (int *)a1;
  v2 = *((int *)a1 + 14);
  v3 = v2 + *((_DWORD *)a1 + 7);
  v4 = (_BYTE *)(*((_QWORD *)a1 + 2) + (v2 >> 1));
  v17 = v3;
  v5 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2LL * *((int *)a1 + 12));
  v18 = *((_DWORD *)a1 + 8);
  v6 = *(XLATEOBJ **)a1;
  for ( pxlo = *(XLATEOBJ **)a1; ; v6 = pxlo )
  {
    v7 = v1[14];
    v8 = v4;
    v9 = v5;
    if ( (v7 & 1) != 0 )
    {
      v9 = v5 + 1;
      v10 = *v4 & 0xF0;
      v8 = v4 + 1;
      *v4 = v10 | XLATEOBJ_iXlate(v6, *v5);
      ++v7;
    }
    v11 = v17;
    v12 = v7 + 1;
    if ( v7 + 1 < v17 )
    {
      do
      {
        v13 = XLATEOBJ_iXlate(pxlo, v9[1]);
        v14 = XLATEOBJ_iXlate(pxlo, *v9);
        v9 += 2;
        v7 += 2;
        *v8 = v13 | (16 * v14);
        v12 += 2;
        ++v8;
      }
      while ( v12 < v17 );
      v1 = (int *)a1;
      v11 = v17;
    }
    if ( v7 < v11 )
    {
      v15 = *v8 & 0xF;
      *v8 = v15 | (16 * XLATEOBJ_iXlate(pxlo, *v9));
    }
    if ( !--v18 )
      break;
    v5 = (unsigned __int16 *)((char *)v5 + v1[10]);
    v4 += v1[11];
  }
}
