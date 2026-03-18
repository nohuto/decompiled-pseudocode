/*
 * XREFs of PhaseShift @ 0x1C00C42F0
 * Callers:
 *     ExecutePhaseControl @ 0x1C00C4244 (ExecutePhaseControl.c)
 *     PhaseShift @ 0x1C00C42F0 (PhaseShift.c)
 * Callees:
 *     PhaseShift @ 0x1C00C42F0 (PhaseShift.c)
 *     CompDiv @ 0x1C00DA168 (CompDiv.c)
 */

__int64 __fastcall PhaseShift(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r11
  __int64 v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  int v12; // r10d
  __int16 v13; // ax
  int v15; // eax
  __int16 v16; // cx
  int v17; // eax
  int v18; // r11d
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rcx
  __int16 v27; // ax
  __int64 v28; // [rsp+20h] [rbp-28h]
  unsigned __int16 v30; // [rsp+60h] [rbp+18h]
  int v31; // [rsp+68h] [rbp+20h]

  v30 = a3;
  v5 = a1;
  if ( a4 == -1 )
    return 0LL;
  v6 = *(_QWORD *)(a2 + 104);
  v7 = a4;
  v8 = 3LL * a4;
  v9 = *(_WORD *)(v6 + 12LL * a4 + 6);
  if ( (v9 & 4) != 0 )
    return 0LL;
  v10 = v9 | 4;
  *(_WORD *)(v6 + 12LL * a4 + 6) = v10;
  if ( (v10 & 2) == 0 )
  {
    if ( a4 <= *(__int16 *)(*(_QWORD *)(a2 + 64) + 2LL * *(__int16 *)(a2 + 80) - 2) )
    {
      v11 = *(_WORD *)(v6 + 12LL * a4);
      if ( v11 != -1 )
      {
        v16 = *(_WORD *)(v6 + 12LL * a4 + 2);
        if ( v16 == -1 )
        {
          v15 = PhaseShift(v5, a2, a3, (unsigned int)v11);
        }
        else
        {
          v31 = PhaseShift(v5, a2, a3, (unsigned int)v16);
          v17 = PhaseShift(a1, a2, v30, (unsigned int)*(__int16 *)(v6 + 4 * v8));
          v18 = v31;
          v12 = v17;
          if ( v17 == v31 )
          {
            v5 = a1;
            LOWORD(a3) = v30;
LABEL_8:
            if ( (*(_BYTE *)(v6 + 4 * v8 + 6) & 2) == 0 )
            {
              v13 = *(_WORD *)(v6 + 4 * v8 + 4);
              if ( v13 == -1 || (v24 = *(_QWORD *)(a2 + 104) + 12LL * v13, v28 = v24, (*(_BYTE *)(v24 + 6) & 2) != 0) )
              {
                if ( (_WORD)a3 )
                {
                  if ( *(_WORD *)(v6 + 4 * v8 + 2) == 0xFFFF )
                  {
                    v27 = *(_WORD *)(v6 + 4 * v8);
                    if ( v27 == -1
                      || *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4 * v7) != *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * v27) )
                    {
                      v12 = CompDiv(
                              0x10000LL,
                              (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 468LL) - 0x10000)
                            * (__int64)*(int *)(*(_QWORD *)a2 + 4 * v7));
                    }
                  }
                }
                if ( *(_WORD *)(v6 + 4 * v8) != 0xFFFF )
                  *(_DWORD *)(*(_QWORD *)a2 + 4 * v7) += v12;
              }
              else
              {
                if ( *(_WORD *)(v6 + 4 * v8) == 0xFFFF || *(_WORD *)(v6 + 4 * v8 + 2) == 0xFFFF )
                {
                  v25 = CompDiv(
                          0x20000LL,
                          (*(_DWORD *)(*(_QWORD *)(v5 + 64) + 468LL) - 0x10000)
                        * (__int64)(*(_DWORD *)(*(_QWORD *)a2 + 4 * v7) + *(_DWORD *)(*(_QWORD *)a2 + 4LL * v13)));
                  v24 = v28;
                  v12 = v25;
                }
                *(_DWORD *)(*(_QWORD *)a2 + 4 * v7) += v12;
                v26 = *(__int16 *)(v6 + 4 * v8 + 4);
                *(_DWORD *)(*(_QWORD *)a2 + 4 * v26) += v12;
                *(_WORD *)(v24 + 6) |= 2u;
                *(_DWORD *)(v24 + 8) = v12;
              }
              *(_WORD *)(v6 + 4 * v8 + 6) |= 2u;
              *(_DWORD *)(v6 + 4 * v8 + 8) = v12;
            }
            goto LABEL_14;
          }
          v19 = *(_QWORD *)(a2 + 16);
          v20 = *(_DWORD *)(v19 + 4LL * *(__int16 *)(v6 + 4 * v8 + 2));
          if ( *(_DWORD *)(v19 + 4LL * *(__int16 *)(v6 + 4 * v8)) >= v20 )
          {
            v21 = *(_DWORD *)(v19 + 4LL * *(__int16 *)(v6 + 4 * v8 + 2));
            v20 = *(_DWORD *)(v19 + 4LL * *(__int16 *)(v6 + 4 * v8));
          }
          else
          {
            v12 = v31;
            v21 = *(_DWORD *)(v19 + 4LL * *(__int16 *)(v6 + 4 * v8));
            v18 = v17;
          }
          v22 = *(_DWORD *)(v19 + 4 * v7);
          if ( v21 != v20 )
          {
            v23 = v18 * (v20 - v22);
            v5 = a1;
            v15 = (v12 * (v22 - v21) + v23) / (v20 - v21);
            goto LABEL_17;
          }
          v15 = (v12 + v18) / 2;
        }
        v5 = a1;
LABEL_17:
        LOWORD(a3) = v30;
        v12 = v15;
        goto LABEL_8;
      }
      if ( !(_WORD)a3 )
      {
        v12 = 0;
        goto LABEL_8;
      }
    }
    v15 = CompDiv(
            0x10000LL,
            (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 468LL) - 0x10000) * (__int64)*(int *)(*(_QWORD *)a2 + 4LL * a4));
    goto LABEL_17;
  }
LABEL_14:
  *(_WORD *)(v6 + 4 * v8 + 6) &= ~4u;
  return *(unsigned int *)(v6 + 4 * v8 + 8);
}
