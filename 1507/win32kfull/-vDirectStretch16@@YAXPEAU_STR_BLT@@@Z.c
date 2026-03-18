/*
 * XREFs of ?vDirectStretch16@@YAXPEAU_STR_BLT@@@Z @ 0x1C02D07F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vDirectStretch16(struct _STR_BLT *a1)
{
  __int64 v1; // r8
  int v3; // r13d
  int v4; // r9d
  int v5; // edi
  int v6; // esi
  unsigned __int16 *v7; // r11
  int v8; // edx
  unsigned int v9; // r14d
  unsigned __int16 *v10; // r10
  int v11; // eax
  unsigned int v12; // r12d
  unsigned int v13; // r15d
  unsigned int v14; // edx
  int v15; // ecx
  int v16; // edi
  __int64 v17; // r9
  unsigned int v18; // edi
  unsigned int v19; // ebp
  unsigned __int16 *v20; // rsi
  bool v21; // cf
  unsigned __int16 *v22; // r15
  int v23; // r9d
  unsigned int v24; // r8d
  unsigned __int16 *v25; // rcx
  unsigned int v26; // [rsp+0h] [rbp-68h]
  int v27; // [rsp+4h] [rbp-64h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  unsigned int v30; // [rsp+70h] [rbp+8h]
  int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+80h] [rbp+18h]
  unsigned int v33; // [rsp+88h] [rbp+20h]

  v1 = *((int *)a1 + 7);
  v3 = *((_DWORD *)a1 + 9);
  v4 = *((_DWORD *)a1 + 12);
  v5 = *((_DWORD *)a1 + 6);
  v6 = *((_DWORD *)a1 + 13);
  v7 = (unsigned __int16 *)(*(_QWORD *)a1 + 2LL * *((int *)a1 + 3));
  v8 = *((_DWORD *)a1 + 8) - v1;
  v9 = *((_DWORD *)a1 + 15);
  v10 = (unsigned __int16 *)(*((_QWORD *)a1 + 2) + 2 * v1);
  v30 = *((_DWORD *)a1 + 10);
  v11 = 2 * v8;
  v31 = *((_DWORD *)a1 + 11);
  v32 = v3;
  v27 = v6;
  v12 = ((unsigned int)((_DWORD)v10 - 2 * v8) >> 1) & 1;
  v13 = ((unsigned int)v10 >> 1) & 1;
  v33 = v12;
  v26 = v13;
  v14 = v8 - v12 - v13;
  v15 = 0;
  v16 = v5 - v11;
  if ( v3 > 0 )
  {
    if ( v4 )
      v15 = v4 * *((_DWORD *)a1 + 2);
    v17 = v15;
    v29 = v16;
    v28 = v15;
    do
    {
      v18 = *((_DWORD *)a1 + 14);
      v19 = v6 + v9;
      v20 = v7;
      if ( v13 )
      {
        v21 = v18 + v31 < v18;
        *v10 = *v7;
        v18 += v31;
        ++v10;
        v20 = &v7[v30 + (unsigned __int64)v21];
      }
      v22 = &v10[v14];
      if ( v10 != v22 )
      {
        do
        {
          v23 = *v20;
          v24 = v18 + v31;
          v21 = v18 + v31 < v18;
          v18 += v31 + v31;
          v25 = &v20[v30 + (unsigned __int64)v21];
          v20 = &v25[v30 + (unsigned __int64)(v18 < v24)];
          *(_DWORD *)v10 = v23 | (*v25 << 16);
          v10 += 2;
        }
        while ( v10 != v22 );
        v12 = v33;
        v3 = v32;
        v17 = v28;
      }
      if ( v12 )
        *v10++ = *v20;
      v7 = (unsigned __int16 *)((char *)v7 + v17);
      if ( v19 < v9 )
        v7 = (unsigned __int16 *)((char *)v7 + *((int *)a1 + 2));
      v10 = (unsigned __int16 *)((char *)v10 + v29);
      v9 = v19;
      v13 = v26;
      --v3;
      v6 = v27;
      v32 = v3;
    }
    while ( v3 );
  }
}
