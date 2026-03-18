/*
 * XREFs of ?vTransparentCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x14031FC20
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x14011C840 (XLATEOBJ_iXlate.c)
 */

void __fastcall vTransparentCopyS24D8(struct BLTINFO *a1)
{
  _BYTE *v2; // rdi
  int v3; // esi
  int v4; // r13d
  __int64 v5; // rax
  __int64 v6; // rbp
  _BYTE *v7; // r14
  int v8; // r15d
  unsigned __int8 *v9; // r12
  int v10; // eax
  int v11; // edx
  ULONG v12; // edx
  int v13; // [rsp+60h] [rbp+8h]
  XLATEOBJ *pxlo; // [rsp+68h] [rbp+10h]

  v2 = (_BYTE *)(*((_QWORD *)a1 + 2) + *((int *)a1 + 14));
  v3 = *((_DWORD *)a1 + 8);
  v4 = *((_DWORD *)a1 + 7);
  pxlo = *(XLATEOBJ **)a1;
  v13 = v4;
  if ( v3 )
  {
    v5 = *((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12) + 1LL;
    do
    {
      --v3;
      v6 = v5;
      v7 = v2;
      v8 = v4;
      if ( v4 )
      {
        v9 = (unsigned __int8 *)v5;
        do
        {
          v10 = *v9;
          --v8;
          v11 = v9[1];
          v9 += 3;
          v12 = *(v9 - 4) | ((v10 | (v11 << 8)) << 8);
          if ( v12 != *((_DWORD *)a1 + 37) )
            *v7 = XLATEOBJ_iXlate(pxlo, v12);
          ++v7;
        }
        while ( v8 );
        v4 = v13;
      }
      v2 += *((int *)a1 + 11);
      v5 = v6 + *((int *)a1 + 10);
    }
    while ( v3 );
  }
}
