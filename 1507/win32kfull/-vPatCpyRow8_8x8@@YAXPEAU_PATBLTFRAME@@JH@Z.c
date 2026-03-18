/*
 * XREFs of ?vPatCpyRow8_8x8@@YAXPEAU_PATBLTFRAME@@JH@Z @ 0x1C02BF934
 * Callers:
 *     ?vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z @ 0x1C02C8D30 (-vBrushPath8_8x8EnumRow@@YAXJPEAU_ROW@@KPEAX@Z.c)
 * Callees:
 *     vFetchAndCopy @ 0x1C00D521C (vFetchAndCopy.c)
 */

void __fastcall vPatCpyRow8_8x8(struct _PATBLTFRAME *a1, int a2, int a3)
{
  int *v4; // r11
  int v5; // eax
  __int64 v6; // r12
  int v7; // edi
  __int64 v8; // r15
  char v9; // di
  unsigned int *v10; // r15
  __int64 v11; // r8
  int v12; // edx
  int v13; // ecx
  int v14; // r14d
  int v15; // esi
  int v16; // esi
  int v17; // r9d
  __int64 v18; // rbx
  int v19; // r8d
  unsigned int v20; // ebp
  unsigned int v21; // r10d
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // edi
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  unsigned __int64 v30; // rax
  int v31; // r14d
  int v32; // r14d
  _DWORD v33[2]; // [rsp+20h] [rbp-98h] BYREF
  int *v34; // [rsp+28h] [rbp-90h]
  unsigned __int64 v35; // [rsp+30h] [rbp-88h]
  unsigned int *v36; // [rsp+38h] [rbp-80h]
  _QWORD v37[2]; // [rsp+40h] [rbp-78h] BYREF
  int v38; // [rsp+50h] [rbp-68h]
  int v39; // [rsp+54h] [rbp-64h]
  int v40; // [rsp+58h] [rbp-60h]
  int v41; // [rsp+5Ch] [rbp-5Ch]
  unsigned int v42; // [rsp+C0h] [rbp+8h]
  char v43; // [rsp+C8h] [rbp+10h]
  char v45; // [rsp+D8h] [rbp+20h]

  v4 = (int *)*((_QWORD *)a1 + 3);
  v5 = a2 * *((_DWORD *)a1 + 4);
  v34 = v4;
  v6 = *(_QWORD *)a1 + v5;
  v7 = *((_DWORD *)a1 + 8) & 3;
  v42 = *((_DWORD *)a1 + 8) & 7;
  v8 = 3 * ((a2 - *((_DWORD *)a1 + 9)) & 7u);
  v36 = (unsigned int *)*((_QWORD *)a1 + 1);
  LOBYTE(v5) = 8 * (4 - v7);
  v9 = 8 * v7;
  v43 = v5;
  v10 = &v36[v8];
  v45 = v9;
  v35 = (unsigned __int64)(v36 + 24);
  do
  {
    v11 = *v4;
    v12 = *v4 & 3;
    v13 = v4[1] - v11;
    v14 = v4[1] & 3;
    v15 = v13 - (-v12 & 3) - v14;
    if ( v15 >= 0 )
      v16 = v15 >> 2;
    else
      v16 = 0;
    if ( v12 == 1 )
    {
      if ( v13 == 1 )
      {
        v12 = 4;
      }
      else
      {
        if ( v13 != 2 )
          goto LABEL_14;
        v12 = 5;
      }
      goto LABEL_13;
    }
    if ( v12 == 2 && v13 == 1 )
    {
      v12 = 6;
LABEL_13:
      v14 = 0;
    }
LABEL_14:
    v38 = 0;
    v37[1] = v33;
    v39 = 8;
    v17 = ((int)v11 >> 2) & 1;
    v41 = 2;
    v18 = v6 + (v11 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( *((_DWORD *)a1 + 8) )
    {
      v20 = *v10;
      v21 = v10[1];
      if ( v42 >= 4 )
      {
        if ( v42 == 4 )
        {
          v19 = v10[1];
        }
        else
        {
          v19 = (v21 << v9) | (v20 >> v43);
          v20 = (v20 << v9) | (v21 >> v43);
        }
      }
      else
      {
        v19 = (v20 << v9) | (v21 >> v43);
        v20 = (v21 << v9) | (v20 >> v43);
      }
      if ( v17 )
      {
        v22 = v19;
        v19 = v20;
        v20 = v22;
      }
    }
    else
    {
      v19 = v10[v17];
      v20 = v10[(v17 & 1) == 0];
    }
    v23 = v16;
    v24 = v19;
    if ( v12 )
    {
      v25 = v12 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( !v29 )
              {
                *(_BYTE *)(v18 + 1) = BYTE1(v19);
                goto LABEL_32;
              }
              if ( v29 == 1 )
LABEL_32:
                *(_BYTE *)(v18 + 2) = BYTE2(v19);
            }
            else
            {
              *(_BYTE *)(v18 + 1) = BYTE1(v19);
            }
          }
          else
          {
            *(_BYTE *)(v18 + 3) = HIBYTE(v19);
          }
LABEL_37:
          v24 = v20;
          v18 += 4LL;
          v20 = v19;
          goto LABEL_38;
        }
      }
      else
      {
        *(_BYTE *)(v18 + 1) = BYTE1(v19);
      }
      *(_WORD *)(v18 + 2) = HIWORD(v19);
      goto LABEL_37;
    }
LABEL_38:
    if ( v16 <= 7 )
    {
      if ( (unsigned int)v16 >= 2 )
      {
        v30 = (unsigned __int64)(unsigned int)v16 >> 1;
        do
        {
          *(_DWORD *)v18 = v24;
          v23 -= 2;
          *(_DWORD *)(v18 + 4) = v20;
          v18 += 8LL;
          --v30;
        }
        while ( v30 );
      }
      if ( v23 )
      {
        *(_DWORD *)v18 = v24;
        v18 += 4LL;
      }
    }
    else
    {
      v33[0] = v24;
      v33[1] = v20;
      v40 = v16;
      v37[0] = v18;
      vFetchAndCopy((__int64)v37);
      v4 = v34;
      v18 += 4LL * v16;
    }
    if ( v14 )
    {
      if ( (v16 & 1) != 0 )
        v24 = v20;
      v31 = v14 - 1;
      if ( v31 )
      {
        v32 = v31 - 1;
        if ( v32 )
        {
          if ( v32 == 1 )
          {
            *(_WORD *)v18 = v24;
            *(_BYTE *)(v18 + 2) = BYTE2(v24);
          }
        }
        else
        {
          *(_WORD *)v18 = v24;
        }
      }
      else
      {
        *(_BYTE *)v18 = v24;
      }
    }
    v10 += 3;
    v9 = v45;
    if ( (unsigned __int64)v10 >= v35 )
      v10 = v36;
    v4 += 2;
    v6 += *((int *)a1 + 4);
    v34 = v4;
    --a3;
  }
  while ( a3 );
}
