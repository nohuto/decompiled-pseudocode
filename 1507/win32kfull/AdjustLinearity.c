/*
 * XREFs of AdjustLinearity @ 0x1C01C1A50
 * Callers:
 *     TransformCoordinates @ 0x1C01C2534 (TransformCoordinates.c)
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, signed int *a2, signed int *a3, _DWORD *a4)
{
  _DWORD *v5; // r15
  int v8; // edx
  unsigned int v9; // r9d
  int v10; // ecx
  int v11; // r8d
  int v12; // r11d
  signed int v13; // r10d
  signed int v14; // r9d
  int v15; // r11d
  int v16; // esi
  int v17; // r13d
  int v18; // r12d
  int v19; // ebp
  int v20; // r8d
  int v21; // edx
  int v22; // ebx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // r11
  unsigned __int16 v28; // r8
  unsigned __int16 v29; // r10
  unsigned __int16 v30; // di
  unsigned __int16 v31; // ax
  unsigned __int16 v32; // r11
  unsigned __int16 v33; // r10
  unsigned __int16 v34; // bx
  int v35; // r8d
  int v36; // r10d
  int v37; // r8d
  int v38; // r9d
  unsigned __int16 v39; // [rsp+6h] [rbp-72h]
  unsigned __int16 v40; // [rsp+10h] [rbp-68h]
  signed int v41; // [rsp+14h] [rbp-64h]
  int v42; // [rsp+18h] [rbp-60h]
  signed int v43; // [rsp+1Ch] [rbp-5Ch]
  unsigned __int16 v44; // [rsp+20h] [rbp-58h]
  __int64 v45; // [rsp+28h] [rbp-50h]
  __int64 v46; // [rsp+30h] [rbp-48h]

  if ( a2 )
  {
    v5 = a4;
    if ( a3 )
    {
      if ( a1 )
      {
        v8 = *(_DWORD *)a1;
        v42 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 0x8000u )
        {
          v9 = *(_DWORD *)(a1 + 4);
          v43 = v9;
          if ( v9 <= 0x8000 )
          {
            if ( v5 )
            {
              v10 = v5[2];
              if ( *v5 == v10 + 1 )
                return;
              v11 = v5[3];
              v12 = v5[1];
              if ( v12 == v11 + 1 )
                return;
              v13 = v8 * (*a2 - *v5) / (unsigned int)(v10 - *v5 + 1);
              v14 = v9 * (*a3 - v12) / (v11 - v12 + 1);
            }
            else
            {
              v13 = *a2;
              v14 = *a3;
            }
            v15 = *(unsigned __int16 *)(a1 + 12);
            v16 = 0;
            v17 = *(unsigned __int16 *)(a1 + 10);
            v18 = *(unsigned __int16 *)(a1 + 8);
            v19 = *(unsigned __int16 *)(a1 + 14);
            v41 = v13;
            v20 = v18 + v17 * v15;
            v21 = v18 + v15 * (v17 + 1);
            if ( v15 + v19 >= 0 )
            {
              do
              {
                if ( v13 >= *(unsigned __int16 *)(a1 + 8LL * v20 + 20)
                  || v13 >= *(unsigned __int16 *)(a1 + 8LL * v21 + 20) )
                {
                  v22 = *(unsigned __int16 *)(a1 + 8LL * v20 + 28) <= v13
                     && *(unsigned __int16 *)(a1 + 8LL * v21 + 28) <= v13
                     && v18 + 2 < v15;
                }
                else
                {
                  v22 = -(v18 != 0);
                }
                if ( v14 >= *(unsigned __int16 *)(a1 + 8LL * v20 + 22)
                  || v14 >= *(unsigned __int16 *)(a1 + 8LL * v20 + 30) )
                {
                  v23 = *(unsigned __int16 *)(a1 + 8LL * v21 + 22) <= v14
                     && *(unsigned __int16 *)(a1 + 8LL * v21 + 30) <= v14
                     && v17 + 2 < v19;
                }
                else
                {
                  v23 = -(v17 != 0);
                }
                if ( !v22 && !v23 )
                  break;
                v17 += v23;
                v18 += v22;
                ++v16;
                v20 = v18 + v17 * v15;
                v21 = v18 + v15 * (v17 + 1);
              }
              while ( v16 <= v15 + v19 );
              v5 = a4;
            }
            v24 = v21;
            v25 = v20;
            v46 = v21;
            v45 = v20;
            v26 = *(_WORD *)(a1 + 8LL * v21 + 22);
            v27 = *(_WORD *)(a1 + 8LL * v20 + 22);
            if ( v26 != v27 )
            {
              v39 = *(_WORD *)(a1 + 8 * v24 + 30);
              v40 = *(_WORD *)(a1 + 8LL * v20 + 30);
              if ( v39 != v40 )
              {
                v28 = *(_WORD *)(a1 + 8LL * v20 + 28);
                v29 = *(_WORD *)(a1 + 8 * v25 + 20);
                if ( v28 != v29 )
                {
                  v30 = *(_WORD *)(a1 + 8 * v24 + 28);
                  v31 = *(_WORD *)(a1 + 8 * v24 + 20);
                  if ( v30 != v31 )
                  {
                    *(_WORD *)(a1 + 8) = v18;
                    *(_WORD *)(a1 + 10) = v17;
                    v44 = v29 + (v14 - v27) * (v31 - v29) / (v26 - v27);
                    v32 = v27 + (v40 - v27) * (v41 - v29) / (v28 - v29);
                    v33 = v28 + (v14 - v40) * (v30 - v28) / (v39 - v40);
                    v34 = v26 + (v39 - v26) * (v41 - v31) / (v30 - v31);
                    if ( v33 != v44 && v34 != v32 )
                    {
                      v35 = *(unsigned __int16 *)(a1 + 8 * v45 + 16);
                      v36 = v35 + (v41 - v44) * (*(unsigned __int16 *)(a1 + 8 * v45 + 24) - v35) / (v33 - v44);
                      v37 = *(unsigned __int16 *)(a1 + 8 * v45 + 18);
                      v38 = v37 + (v14 - v32) * (*(unsigned __int16 *)(a1 + 8 * v46 + 18) - v37) / (v34 - v32);
                      if ( v36 >= 0 )
                      {
                        if ( v42 <= v36 )
                          v36 = v42 - 1;
                      }
                      else
                      {
                        v36 = 0;
                      }
                      if ( v38 >= 0 )
                      {
                        if ( v43 <= v38 )
                          v38 = v43 - 1;
                      }
                      else
                      {
                        v38 = 0;
                      }
                      if ( v42 )
                      {
                        if ( v43 )
                        {
                          *a2 = *v5 + v36 * (v5[2] - *v5 + 1) / (unsigned int)v42;
                          *a3 = v5[1] + (unsigned int)(v38 * (v5[3] - v5[1] + 1)) / *(_DWORD *)(a1 + 4);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
