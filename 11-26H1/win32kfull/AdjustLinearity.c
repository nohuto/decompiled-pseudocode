/*
 * XREFs of AdjustLinearity @ 0x140216BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, INT *a2, INT *a3, int *a4)
{
  int v7; // r8d
  int v8; // r9d
  INT v9; // ebx
  INT v10; // r11d
  int v11; // r13d
  int v12; // esi
  int v13; // r10d
  int v14; // r12d
  int v15; // ebp
  int v16; // edx
  int v17; // r9d
  int v18; // edi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // r10d
  int v23; // edx
  int v24; // r9d
  int v25; // r8d
  int v26; // ebx
  int v27; // eax
  unsigned __int16 v28; // cx
  unsigned __int16 v29; // di
  int v30; // r11d
  int v31; // r8d
  INT v32; // r10d
  int v33; // r8d
  INT v34; // edi
  INT v35; // r8d
  INT v36; // eax
  int v37; // ebx
  int v38; // ebx
  unsigned __int16 v39; // [rsp+20h] [rbp-68h]
  unsigned __int16 v40; // [rsp+22h] [rbp-66h]
  INT v41; // [rsp+2Ch] [rbp-5Ch]
  INT v42; // [rsp+30h] [rbp-58h]
  unsigned __int16 v43; // [rsp+34h] [rbp-54h]
  __int64 v44; // [rsp+38h] [rbp-50h]
  __int64 v45; // [rsp+40h] [rbp-48h]

  if ( a2 && a3 && a1 && *(_DWORD *)a1 <= 0x8000u && *(_DWORD *)(a1 + 4) <= 0x8000u )
  {
    if ( a4 )
    {
      v7 = a4[2];
      v8 = *a4;
      if ( v8 == v7 || a4[1] == a4[3] )
        return;
      v9 = EngMulDiv(*a2 - v8, *(_DWORD *)a1, v7 - v8);
      v42 = v9;
      v10 = EngMulDiv(*a3 - a4[1], *(_DWORD *)(a1 + 4), a4[3] - a4[1]);
    }
    else
    {
      v9 = *a2;
      v10 = *a3;
      v42 = *a2;
    }
    v11 = *(unsigned __int16 *)(a1 + 10);
    v12 = 0;
    v13 = *(unsigned __int16 *)(a1 + 12);
    v14 = *(unsigned __int16 *)(a1 + 8);
    v15 = *(unsigned __int16 *)(a1 + 14);
    v41 = v10;
    v16 = v14 + v11 * v13;
    v17 = v14 + v13 * (v11 + 1);
    do
    {
      if ( v9 >= *(unsigned __int16 *)(a1 + 8LL * v16 + 20) || v9 >= *(unsigned __int16 *)(a1 + 8LL * v17 + 20) )
        v18 = *(unsigned __int16 *)(a1 + 8LL * v16 + 28) <= v9
           && *(unsigned __int16 *)(a1 + 8LL * v17 + 28) <= v9
           && v14 + 2 < v13;
      else
        v18 = -(v14 != 0);
      if ( v10 >= *(unsigned __int16 *)(a1 + 8LL * v16 + 22) || v10 >= *(unsigned __int16 *)(a1 + 8LL * v16 + 30) )
        v19 = *(unsigned __int16 *)(a1 + 8LL * v17 + 22) <= v10
           && *(unsigned __int16 *)(a1 + 8LL * v17 + 30) <= v10
           && v11 + 2 < v15;
      else
        v19 = -(v11 != 0);
      if ( !v18 && !v19 )
        break;
      v11 += v19;
      v14 += v18;
      ++v12;
      v16 = v14 + v11 * v13;
      v17 = v14 + v13 * (v11 + 1);
    }
    while ( v12 <= v13 + v15 );
    v20 = v16;
    v21 = v17;
    v45 = v17;
    v44 = v16;
    v22 = *(unsigned __int16 *)(a1 + 8LL * v16 + 22);
    v23 = *(unsigned __int16 *)(a1 + 8LL * v17 + 22);
    if ( (_WORD)v23 != (_WORD)v22 )
    {
      v40 = *(_WORD *)(a1 + 8LL * v17 + 30);
      v39 = *(_WORD *)(a1 + 8 * v20 + 30);
      if ( v40 != v39 )
      {
        v24 = *(unsigned __int16 *)(a1 + 8 * v20 + 28);
        v25 = *(unsigned __int16 *)(a1 + 8 * v20 + 20);
        if ( (_WORD)v24 != (_WORD)v25 )
        {
          v26 = *(unsigned __int16 *)(a1 + 8 * v21 + 28);
          v27 = *(unsigned __int16 *)(a1 + 8 * v21 + 20);
          if ( (_WORD)v26 != (_WORD)v27 )
          {
            *(_WORD *)(a1 + 8) = v14;
            *(_WORD *)(a1 + 10) = v11;
            v43 = v25 + (v10 - v22) * (v27 - v25) / (v23 - v22);
            v28 = v24 + (v26 - v24) * (v10 - v39) / (v40 - v39);
            v29 = v22 + (v39 - v22) * (v42 - v25) / (v24 - v25);
            v30 = v23 + (v40 - v23) * (v42 - v27) / (v26 - v27);
            if ( v28 != v43 && (_WORD)v30 != v29 )
            {
              v31 = *(unsigned __int16 *)(a1 + 8 * v44 + 16);
              v32 = (v42 - v43) * (*(unsigned __int16 *)(a1 + 8 * v44 + 24) - v31) / (v28 - v43) + v31;
              v33 = *(unsigned __int16 *)(a1 + 8 * v44 + 18);
              v34 = v33 + (v41 - v29) * (*(unsigned __int16 *)(a1 + 8 * v45 + 18) - v33) / ((unsigned __int16)v30 - v29);
              v35 = *(_DWORD *)a1;
              if ( v32 < 0 )
              {
                v32 = 0;
              }
              else if ( v35 <= v32 )
              {
                v32 = v35 - 1;
              }
              if ( v34 < 0 )
              {
                v34 = 0;
              }
              else
              {
                v36 = *(_DWORD *)(a1 + 4);
                if ( v36 <= v34 )
                  v34 = v36 - 1;
              }
              if ( v35 )
              {
                if ( *(_DWORD *)(a1 + 4) )
                {
                  v37 = *a4;
                  *a2 = v37 + EngMulDiv(v32, a4[2] - *a4, v35);
                  v38 = a4[1];
                  *a3 = v38 + EngMulDiv(v34, a4[3] - v38, *(_DWORD *)(a1 + 4));
                }
              }
            }
          }
        }
      }
    }
  }
}
