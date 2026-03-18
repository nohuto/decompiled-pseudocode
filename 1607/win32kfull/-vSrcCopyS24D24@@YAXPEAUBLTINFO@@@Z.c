/*
 * XREFs of ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C6E70
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00F95E0 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS24D24(struct BLTINFO *a1)
{
  struct BLTINFO *v1; // r15
  unsigned int v2; // ebp
  unsigned __int8 *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // r12d
  unsigned int v6; // ebp
  unsigned int v7; // esi
  int v8; // ebp
  __int64 v9; // r14
  unsigned __int8 *v10; // r13
  unsigned int v11; // esi
  ULONG v12; // eax
  unsigned int v13; // r12d
  ULONG v14; // esi
  ULONG v15; // edi
  ULONG v16; // ebx
  ULONG v17; // eax
  unsigned __int16 *v18; // r13
  int v19; // esi
  ULONG v20; // eax
  unsigned int v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  XLATEOBJ *pxlo; // [rsp+30h] [rbp-58h]
  unsigned __int8 *v24; // [rsp+38h] [rbp-50h]
  unsigned int v26; // [rsp+98h] [rbp+10h]
  int v27; // [rsp+A0h] [rbp+18h]

  v1 = a1;
  v2 = *((_DWORD *)a1 + 7);
  v3 = (unsigned __int8 *)(*((_QWORD *)a1 + 1) + 3 * *((_DWORD *)a1 + 12));
  v4 = *((_QWORD *)a1 + 2) + 3 * *((_DWORD *)a1 + 14);
  v27 = *((_DWORD *)a1 + 8);
  v5 = (*((_BYTE *)a1 + 16) + 3 * *((_BYTE *)a1 + 56)) & 3;
  pxlo = *(XLATEOBJ **)a1;
  if ( v5 > v2 )
    v5 = *((_DWORD *)a1 + 7);
  v6 = v2 - v5;
  v21 = v5;
  v7 = v6 >> 2;
  v26 = v6 >> 2;
  v8 = v6 & 3;
  while ( 1 )
  {
    v22 = v4;
    v9 = v4;
    v24 = v3;
    v10 = v3;
    if ( v5 )
    {
      v11 = v5;
      do
      {
        v12 = XLATEOBJ_iXlate(pxlo, *v10 | (*(unsigned __int16 *)(v10 + 1) << 8));
        *(_BYTE *)v9 = v12;
        v10 += 3;
        *(_BYTE *)(v9 + 1) = BYTE1(v12);
        *(_BYTE *)(v9 + 2) = BYTE2(v12);
        v9 += 3LL;
        --v11;
      }
      while ( v11 );
      v7 = v26;
    }
    if ( v7 )
    {
      v13 = v7;
      do
      {
        v14 = XLATEOBJ_iXlate(pxlo, *v10 | (*(unsigned __int16 *)(v10 + 1) << 8));
        v15 = XLATEOBJ_iXlate(pxlo, v10[3] | (*((unsigned __int16 *)v10 + 2) << 8));
        v16 = XLATEOBJ_iXlate(pxlo, v10[6] | (*(unsigned __int16 *)(v10 + 7) << 8));
        v17 = XLATEOBJ_iXlate(pxlo, v10[9] | (*((unsigned __int16 *)v10 + 5) << 8));
        v10 += 12;
        *(_DWORD *)v9 = v14 | (v15 << 24);
        *(_DWORD *)(v9 + 4) = (v15 >> 8) | (v16 << 16);
        *(_DWORD *)(v9 + 8) = HIWORD(v16) | (v17 << 8);
        v9 += 12LL;
        --v13;
      }
      while ( v13 );
      v1 = a1;
      v5 = v21;
      v4 = v22;
      v3 = v24;
      v7 = v26;
    }
    if ( v8 )
    {
      v18 = (unsigned __int16 *)(v10 + 1);
      v19 = v8;
      do
      {
        v20 = XLATEOBJ_iXlate(pxlo, *((unsigned __int8 *)v18 - 1) | (*v18 << 8));
        *(_BYTE *)v9 = v20;
        v18 = (unsigned __int16 *)((char *)v18 + 3);
        v9 += 3LL;
        *(_BYTE *)(v9 - 2) = BYTE1(v20);
        *(_BYTE *)(v9 - 1) = BYTE2(v20);
        --v19;
      }
      while ( v19 );
      v4 = v22;
      v7 = v26;
    }
    if ( !--v27 )
      break;
    v3 += *((int *)v1 + 10);
    v4 += *((int *)v1 + 11);
  }
}
