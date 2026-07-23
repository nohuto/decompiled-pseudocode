/*
 * XREFs of BgpGxBlendRectangle @ 0x14072AD60
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1401277F4 (BgpTxtDisplayCharacter.c)
 *     BgpTxtDisplayString @ 0x14072B0B0 (BgpTxtDisplayString.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1401281E8 (BgpGxBlendColor.c)
 *     BgpGxRectangleDestroy @ 0x1407276C0 (BgpGxRectangleDestroy.c)
 *     BgpGxRectangleCreate @ 0x1407276DC (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxBlendRectangle(_DWORD *a1, _DWORD *a2, _DWORD *a3, __int64 *a4)
{
  __int64 v4; // rdi
  int v5; // esi
  __int64 *v6; // r14
  _DWORD *v8; // r12
  _DWORD *v9; // r15
  unsigned int v10; // r8d
  unsigned int v11; // edx
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebp
  __int64 v18; // r13
  __int64 v19; // r13
  int v20; // ecx
  __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned int v23; // ebp
  unsigned __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // r12
  __int64 v27; // rbx
  int v28; // eax
  __int64 v29; // rax
  bool v30; // zf
  int v32; // [rsp+20h] [rbp-78h]
  int v33; // [rsp+24h] [rbp-74h]
  __int64 v34; // [rsp+28h] [rbp-70h] BYREF
  unsigned int v35; // [rsp+30h] [rbp-68h]
  unsigned __int64 v36; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  __int64 v38; // [rsp+50h] [rbp-48h]

  v4 = 0LL;
  v5 = 0;
  v34 = 0LL;
  v6 = a4;
  v33 = 0;
  v8 = a2;
  v9 = a1;
  if ( !a4
    || !*a1
    || (v10 = *a2) == 0
    || (v11 = a1[1]) == 0
    || (v12 = v8[1]) == 0
    || a1[2] != 32
    || v8[2] != 32
    || v11 < v12 + *a3
    || *a1 < v10 + a3[1] )
  {
    v5 = -1073741811;
    goto LABEL_25;
  }
  v4 = *v6;
  if ( !*v6 )
  {
    v36 = __PAIR64__(v10, v12);
    v13 = BgpGxRectangleCreate(&v36, 32, &v34);
    v4 = v34;
    v5 = v13;
    v33 = v13;
    if ( v13 < 0 )
      goto LABEL_26;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v4 + 4) == v12 && *(_DWORD *)v4 == v10 )
  {
LABEL_15:
    v14 = *(_DWORD *)v4;
    v15 = *((_QWORD *)v8 + 3);
    v16 = *(_QWORD *)(v4 + 24);
    v17 = *(_DWORD *)(v4 + 8) >> 3;
    v18 = v17 * (*a3 + a3[1] * v9[1]);
    v37 = v15;
    v38 = v16;
    LODWORD(v34) = v17;
    v32 = v14;
    v19 = *((_QWORD *)v9 + 3) + v18;
    if ( v14 )
    {
      v20 = *(_DWORD *)(v4 + 4);
      do
      {
        v35 = 0;
        v21 = v15;
        if ( v20 )
        {
          v22 = v17;
          v23 = v35;
          v36 = v22;
          v24 = v22;
          v25 = v19 - v15;
          v26 = v16 - v19;
          do
          {
            v27 = v25 + v21;
            v28 = BgpGxBlendColor(*(_DWORD *)(v25 + v21), *(_DWORD *)v21, *(_BYTE *)(v21 + 3));
            v21 += v24;
            *(_DWORD *)(v27 + v26) = v28;
            ++v23;
          }
          while ( v23 < *(_DWORD *)(v4 + 4) );
          v9 = a1;
          v17 = v34;
          v8 = a2;
          v15 = v37;
          v16 = v38;
        }
        v20 = *(_DWORD *)(v4 + 4);
        v15 += v17 * v8[1];
        v29 = v17 * v9[1];
        v37 = v15;
        v19 += v29;
        v16 += v17 * v20;
        v30 = v32-- == 1;
        v38 = v16;
      }
      while ( !v30 );
      v5 = v33;
      v6 = a4;
    }
LABEL_25:
    if ( v5 >= 0 )
      goto LABEL_29;
    goto LABEL_26;
  }
  v5 = -1073741670;
LABEL_26:
  if ( *v6 )
    return (unsigned int)v5;
  if ( v4 )
  {
    BgpGxRectangleDestroy(v4);
    v4 = 0LL;
  }
LABEL_29:
  if ( !*v6 )
    *v6 = v4;
  return (unsigned int)v5;
}
