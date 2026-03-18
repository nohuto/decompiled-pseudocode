/*
 * XREFs of vDirectStretch8 @ 0x1401C5B40
 * Callers:
 *     ?StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1400E8D14 (-StretchDIBDirect@stretch@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall vDirectStretch8(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // r11d
  int *v3; // rbx
  int v4; // edx
  unsigned __int8 *v5; // r14
  int v6; // r10d
  int v7; // ecx
  int v8; // edi
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbp
  int v12; // r15d
  unsigned int v13; // r12d
  int v14; // r13d
  __int64 v15; // rax
  int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // edi
  unsigned __int8 *v19; // r8
  bool v20; // cf
  int *v21; // rsi
  int v22; // r11d
  unsigned int v23; // edx
  unsigned __int8 *v24; // r10
  unsigned __int8 *v25; // r9
  unsigned __int8 *v26; // rcx
  unsigned int v28; // [rsp+0h] [rbp-78h]
  int v29; // [rsp+4h] [rbp-74h]
  __int64 v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+20h] [rbp-58h]
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+98h] [rbp+20h]

  v1 = (_DWORD *)a1;
  v2 = *(_DWORD *)(a1 + 36);
  v3 = (int *)(*(_QWORD *)(a1 + 16) + *(int *)(a1 + 28));
  v4 = 0;
  v5 = (unsigned __int8 *)(*(_QWORD *)a1 + *(int *)(a1 + 12));
  v6 = (*(_BYTE *)(a1 + 16) + (unsigned __int8)*(_DWORD *)(a1 + 28)) & 3;
  v7 = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 28);
  v8 = v1[13];
  v9 = v1[6] - v7;
  v10 = v1[12];
  v11 = (unsigned int)v1[10];
  v12 = v1[11];
  v13 = v1[15];
  v14 = ((_BYTE)v7 + (_BYTE)v3) & 3;
  LODWORD(v15) = -v6 & 3;
  v34 = v2;
  v36 = v6;
  v16 = v7 - v15 - v14;
  v35 = v14;
  v29 = v8;
  if ( v2 > 0 )
  {
    if ( v10 )
      v4 = v1[2] * v10;
    v30 = v16;
    v31 = v4;
    v32 = v9;
    while ( 1 )
    {
      v17 = v8 + v13;
      v18 = v1[14];
      v19 = v5;
      v28 = v17;
      if ( v6 == 1 )
        break;
      if ( v6 == 2 )
        goto LABEL_10;
      if ( v6 == 3 )
        goto LABEL_11;
LABEL_12:
      if ( v3 != (int *)((char *)v3 + v30) )
      {
        v21 = (int *)((char *)v3 + v30);
        do
        {
          v22 = *v19;
          v23 = v12 + v18 + v12;
          v24 = &v19[(v12 + v18 < v18) + v11];
          v25 = &v24[(v23 < v12 + v18) + v11];
          v18 = v23 + v12 + v12;
          v26 = &v25[(v23 + v12 < v23) + v11];
          v19 = &v26[(v18 < v23 + v12) + v11];
          *v3++ = v22 | ((*v24 | ((*v25 | (*v26 << 8)) << 8)) << 8);
        }
        while ( v3 != v21 );
        v1 = (_DWORD *)a1;
        v14 = v35;
        v6 = v36;
        v2 = v34;
        v17 = v28;
      }
      if ( v14 == 1 )
        goto LABEL_21;
      LOBYTE(v15) = v14 - 2;
      if ( v14 == 2 )
        goto LABEL_20;
      if ( v14 == 3 )
      {
        v20 = v12 + v18 < v18;
        *(_BYTE *)v3 = *v19;
        v18 += v12;
        v19 += v11 + v20;
        v3 = (int *)((char *)v3 + 1);
LABEL_20:
        *(_BYTE *)v3 = *v19;
        v19 += v11 + (v12 + v18 < v18);
        v3 = (int *)((char *)v3 + 1);
LABEL_21:
        LOBYTE(v15) = *v19;
        *(_BYTE *)v3 = *v19;
        v3 = (int *)((char *)v3 + 1);
      }
      v5 += v31;
      if ( v17 < v13 )
      {
        v15 = (int)v1[2];
        v5 += v15;
      }
      v3 = (int *)((char *)v3 + v32);
      v13 = v17;
      v8 = v29;
      v34 = --v2;
      if ( !v2 )
        return v15;
    }
    v20 = v12 + v18 < v18;
    *(_BYTE *)v3 = *v5;
    v18 += v12;
    v19 = &v5[v20 + v11];
    v3 = (int *)((char *)v3 + 1);
LABEL_10:
    v20 = v12 + v18 < v18;
    *(_BYTE *)v3 = *v19;
    v18 += v12;
    v19 += v11 + v20;
    v3 = (int *)((char *)v3 + 1);
LABEL_11:
    v20 = v12 + v18 < v18;
    *(_BYTE *)v3 = *v19;
    v18 += v12;
    v19 += v11 + v20;
    v3 = (int *)((char *)v3 + 1);
    goto LABEL_12;
  }
  return v15;
}
