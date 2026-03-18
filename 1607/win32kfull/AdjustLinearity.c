/*
 * XREFs of AdjustLinearity @ 0x1C01C2E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AdjustLinearity(__int64 a1, signed int *a2, signed int *a3, _DWORD *a4)
{
  _DWORD *v5; // r15
  int v8; // edx
  unsigned int v9; // r10d
  int v10; // ecx
  int v11; // r9d
  int v12; // r8d
  int v13; // r11d
  signed int v14; // r9d
  signed int v15; // r11d
  int v16; // r10d
  int v17; // edi
  int v18; // r12d
  int v19; // r13d
  int v20; // ebp
  int v21; // r8d
  int v22; // edx
  int v23; // ebx
  int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // rcx
  unsigned __int16 v27; // di
  unsigned __int16 v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int16 v31; // r8
  unsigned __int16 v32; // ax
  unsigned __int16 v33; // cx
  unsigned __int16 v34; // dx
  unsigned __int16 v35; // bx
  unsigned __int16 v36; // ax
  unsigned __int16 v37; // r11
  int v38; // r8d
  int v39; // r10d
  int v40; // r8d
  int v41; // r9d
  unsigned __int16 v42; // [rsp+6h] [rbp-72h]
  unsigned __int16 v43; // [rsp+8h] [rbp-70h]
  unsigned __int16 v44; // [rsp+Ch] [rbp-6Ch]
  signed int v45; // [rsp+14h] [rbp-64h]
  signed int v46; // [rsp+18h] [rbp-60h]
  int v47; // [rsp+1Ch] [rbp-5Ch]
  signed int v48; // [rsp+20h] [rbp-58h]
  __int64 v49; // [rsp+28h] [rbp-50h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  __int64 v51; // [rsp+38h] [rbp-40h]

  if ( a2 )
  {
    v5 = a4;
    if ( a3 )
    {
      if ( a1 )
      {
        v8 = *(_DWORD *)a1;
        v47 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 0x8000u )
        {
          v9 = *(_DWORD *)(a1 + 4);
          v48 = v9;
          if ( v9 <= 0x8000 )
          {
            if ( a4 )
            {
              v10 = a4[2];
              v11 = *a4;
              if ( v11 == v10 + 1 )
                return;
              v12 = v5[3];
              v13 = v5[1];
              if ( v13 == v12 + 1 )
                return;
              v14 = v8 * (*a2 - v11) / (unsigned int)(v10 - v11 + 1);
              v15 = v9 * (*a3 - v13) / (v12 - v13 + 1);
            }
            else
            {
              v14 = *a2;
              v15 = *a3;
            }
            v16 = *(unsigned __int16 *)(a1 + 12);
            v17 = 0;
            v18 = *(unsigned __int16 *)(a1 + 10);
            v19 = *(unsigned __int16 *)(a1 + 8);
            v20 = *(unsigned __int16 *)(a1 + 14);
            v45 = v15;
            v46 = v14;
            v21 = v19 + v18 * v16;
            v22 = v19 + v16 * (v18 + 1);
            if ( v16 + v20 >= 0 )
            {
              do
              {
                if ( v14 >= *(unsigned __int16 *)(a1 + 8LL * v21 + 20)
                  || v14 >= *(unsigned __int16 *)(a1 + 8LL * v22 + 20) )
                {
                  v23 = *(unsigned __int16 *)(a1 + 8LL * (v21 + 1) + 20) <= v14
                     && *(unsigned __int16 *)(a1 + 8LL * (v22 + 1) + 20) <= v14
                     && v19 + 2 < v16;
                }
                else
                {
                  v23 = -(v19 != 0);
                }
                if ( v15 >= *(unsigned __int16 *)(a1 + 8LL * v21 + 22)
                  || v15 >= *(unsigned __int16 *)(a1 + 8LL * (v21 + 1) + 22) )
                {
                  v24 = *(unsigned __int16 *)(a1 + 8LL * v22 + 22) <= v15
                     && *(unsigned __int16 *)(a1 + 8LL * (v22 + 1) + 22) <= v15
                     && v18 + 2 < v20;
                }
                else
                {
                  v24 = -(v18 != 0);
                }
                if ( !v23 && !v24 )
                  break;
                v18 += v24;
                v19 += v23;
                ++v17;
                v21 = v19 + v18 * v16;
                v22 = v19 + v16 * (v18 + 1);
              }
              while ( v17 <= v16 + v20 );
              v5 = a4;
            }
            v25 = v22;
            v26 = v21;
            v51 = v22;
            v49 = v21;
            v27 = *(_WORD *)(a1 + 8LL * v22 + 22);
            v28 = *(_WORD *)(a1 + 8LL * v21 + 22);
            if ( v27 != v28 )
            {
              v29 = v22 + 1;
              v30 = v21 + 1;
              v50 = v30;
              v43 = *(_WORD *)(a1 + 8 * v29 + 22);
              v42 = *(_WORD *)(a1 + 8 * v30 + 22);
              if ( v43 != v42 )
              {
                v31 = *(_WORD *)(a1 + 8 * v30 + 20);
                v32 = *(_WORD *)(a1 + 8 * v26 + 20);
                if ( v31 != v32 )
                {
                  v33 = *(_WORD *)(a1 + 8 * v29 + 20);
                  v34 = *(_WORD *)(a1 + 8 * v25 + 20);
                  if ( v33 != v34 )
                  {
                    *(_WORD *)(a1 + 8) = v19;
                    *(_WORD *)(a1 + 10) = v18;
                    v44 = v31 + (v33 - v31) * (v15 - v42) / (v43 - v42);
                    v35 = v28 + (v42 - v28) * (v46 - v32) / (v31 - v32);
                    v36 = v32 + (v34 - v32) * (v15 - v28) / (v27 - v28);
                    v37 = v27 + (v43 - v27) * (v46 - v34) / (v33 - v34);
                    if ( v44 != v36 && v37 != v35 )
                    {
                      v38 = *(unsigned __int16 *)(a1 + 8 * v49 + 16);
                      v39 = v38 + (v46 - v36) * (*(unsigned __int16 *)(a1 + 8 * v50 + 16) - v38) / (v44 - v36);
                      v40 = *(unsigned __int16 *)(a1 + 8 * v49 + 18);
                      v41 = v40 + (v45 - v35) * (*(unsigned __int16 *)(a1 + 8 * v51 + 18) - v40) / (v37 - v35);
                      if ( v39 >= 0 )
                      {
                        if ( v47 <= v39 )
                          v39 = v47 - 1;
                      }
                      else
                      {
                        v39 = 0;
                      }
                      if ( v41 >= 0 )
                      {
                        if ( v48 <= v41 )
                          v41 = v48 - 1;
                      }
                      else
                      {
                        v41 = 0;
                      }
                      if ( v47 )
                      {
                        if ( v48 )
                        {
                          *a2 = *v5 + v39 * (v5[2] - *v5 + 1) / (unsigned int)v47;
                          *a3 = v5[1] + (unsigned int)(v41 * (v5[3] - v5[1] + 1)) / *(_DWORD *)(a1 + 4);
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
