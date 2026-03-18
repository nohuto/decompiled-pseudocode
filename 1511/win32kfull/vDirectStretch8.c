/*
 * XREFs of vDirectStretch8 @ 0x1C02D1CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  _DWORD *v1; // rbp
  int v2; // esi
  int *v3; // rbx
  unsigned __int8 *v4; // r14
  int v5; // r11d
  int v6; // r10d
  int v7; // ecx
  unsigned int v8; // r15d
  int v9; // r12d
  unsigned int v10; // r13d
  int v11; // r8d
  __int64 v12; // rax
  int v13; // edx
  int v14; // ecx
  __int64 v15; // r10
  unsigned int v16; // esi
  unsigned int v17; // r9d
  unsigned __int8 *v18; // rdi
  bool v19; // cf
  int v20; // r11d
  unsigned int v21; // ecx
  unsigned int v22; // r8d
  unsigned __int8 *v23; // rdi
  int v24; // r10d
  unsigned __int8 *v25; // rdi
  int v26; // r9d
  unsigned __int8 *v27; // rdi
  int v28; // edx
  int v30; // [rsp+0h] [rbp-88h]
  int v31; // [rsp+8h] [rbp-80h]
  __int64 v32; // [rsp+10h] [rbp-78h]
  int *v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+30h] [rbp-58h]
  int v37; // [rsp+98h] [rbp+10h]
  int v38; // [rsp+A0h] [rbp+18h]
  unsigned int v39; // [rsp+A8h] [rbp+20h]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v5 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  v8 = v1[10];
  v9 = v1[11];
  v10 = v1[15];
  v38 = v1[13];
  v37 = v2;
  v30 = v5;
  v11 = v1[6] - v7;
  v31 = ((_BYTE)v3 + (_BYTE)v7) & 3;
  v39 = v8;
  LODWORD(v12) = -v5 & 3;
  v13 = 0;
  v14 = v7 - v12 - v31;
  if ( v2 > 0 )
  {
    if ( v6 )
      v13 = v6 * v1[2];
    v32 = v14;
    v15 = v13;
    v35 = v11;
    v34 = v13;
    while ( 1 )
    {
      v16 = v1[14];
      v17 = v10 + v38;
      v18 = v4;
      if ( v5 == 1 )
        break;
      if ( v5 == 2 )
        goto LABEL_10;
      if ( v5 == 3 )
        goto LABEL_11;
LABEL_12:
      v33 = (int *)((char *)v3 + v32);
      if ( v3 != (int *)((char *)v3 + v32) )
      {
        do
        {
          v20 = *v18;
          v21 = v16 + v9;
          v22 = v16 + v9 + v9 + v9;
          v19 = v16 + v9 < v16;
          v16 = v22 + v9;
          v23 = &v18[v8 + (unsigned __int64)v19];
          v24 = *v23;
          v25 = &v23[v8 + (unsigned __int64)(v21 + v9 < v21)];
          v26 = *v25;
          v27 = &v25[v8 + (unsigned __int64)(v22 < v21 + v9)];
          v28 = v24 | ((v26 | (*v27 << 8)) << 8);
          v18 = &v27[v8 + (unsigned __int64)(v22 + v9 < v22)];
          *v3++ = v20 | (v28 << 8);
        }
        while ( v3 != v33 );
        v1 = (_DWORD *)a1;
        v8 = v39;
        v5 = v30;
        v17 = v10 + v38;
        v15 = v34;
      }
      if ( v31 == 1 )
        goto LABEL_20;
      LOBYTE(v12) = v31 - 2;
      if ( v31 == 2 )
        goto LABEL_19;
      if ( v31 == 3 )
      {
        *(_BYTE *)v3 = *v18;
        v19 = v16 + v9 < v16;
        v16 += v9;
        v18 += v19 + (unsigned __int64)v8;
        v3 = (int *)((char *)v3 + 1);
LABEL_19:
        *(_BYTE *)v3 = *v18;
        v18 += (v16 + v9 < v16) + (unsigned __int64)v8;
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        LOBYTE(v12) = *v18;
        *(_BYTE *)v3 = *v18;
        v3 = (int *)((char *)v3 + 1);
      }
      v4 += v15;
      if ( v17 < v10 )
      {
        v12 = (int)v1[2];
        v4 += v12;
      }
      v3 = (int *)((char *)v3 + v35);
      v10 = v17;
      if ( !--v37 )
        return v12;
    }
    v19 = v16 + v9 < v16;
    *(_BYTE *)v3 = *v4;
    v16 += v9;
    v18 = &v4[v19 + v8];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    *(_BYTE *)v3 = *v18;
    v19 = v16 + v9 < v16;
    v16 += v9;
    v18 += v19 + (unsigned __int64)v8;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    *(_BYTE *)v3 = *v18;
    v19 = v16 + v9 < v16;
    v16 += v9;
    v18 += v19 + (unsigned __int64)v8;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v12;
}
