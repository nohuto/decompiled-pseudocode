/*
 * XREFs of sub_180014170 @ 0x180014170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180014170(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  unsigned __int64 *v5; // rdi
  __int64 v6; // r10
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // edx
  __int64 *v15; // r9
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int v22; // edx
  __int64 result; // rax

  v5 = *(unsigned __int64 **)(a1 + 64);
  v6 = a3;
  v9 = *v5;
  if ( *v5 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  if ( (a5 & 1) != 0 )
  {
    v10 = **(_QWORD **)(a1 + 56);
    if ( v10 )
    {
      switch ( a4 )
      {
        case 2:
          v11 = *(_QWORD **)(a1 + 24);
          v12 = *(_QWORD *)(a1 + 104);
LABEL_11:
          v6 = ((v12 - *v11) >> 1) + a3;
LABEL_14:
          if ( v6 < 0 || (v13 = **(_QWORD **)(a1 + 24), v6 > (*(_QWORD *)(a1 + 104) - v13) >> 1) )
          {
            v6 = -1LL;
          }
          else
          {
            v14 = v6 + ((v13 - v10) >> 1);
            **(_DWORD **)(a1 + 80) -= v14;
            **(_QWORD **)(a1 + 56) += 2LL * v14;
            if ( (a5 & 2) != 0 )
            {
              v15 = *(__int64 **)(a1 + 64);
              v16 = *v15;
              if ( *v15 )
              {
                v17 = **(_QWORD **)(a1 + 56);
                v18 = **(int **)(a1 + 88);
                *v15 = v17;
                **(_DWORD **)(a1 + 88) = (v16 + 2 * v18 - v17) >> 1;
              }
            }
          }
          goto LABEL_35;
        case 1:
          if ( (a5 & 2) == 0 )
          {
            v11 = *(_QWORD **)(a1 + 24);
            v12 = **(_QWORD **)(a1 + 56);
            goto LABEL_11;
          }
          break;
        case 0:
          goto LABEL_14;
      }
      v6 = -1LL;
      goto LABEL_14;
    }
  }
  if ( (a5 & 2) != 0 && *v5 )
  {
    if ( a4 == 2 )
    {
      v19 = *(_QWORD **)(a1 + 24);
      v20 = *(_QWORD *)(a1 + 104);
    }
    else
    {
      if ( a4 != 1 )
      {
        if ( a4 )
          v6 = -1LL;
        goto LABEL_29;
      }
      v19 = *(_QWORD **)(a1 + 24);
      v20 = *v5;
    }
    v6 = ((__int64)(v20 - *v19) >> 1) + a3;
LABEL_29:
    if ( v6 < 0 || (v21 = **(_QWORD **)(a1 + 24), v6 > (*(_QWORD *)(a1 + 104) - v21) >> 1) )
    {
      v6 = -1LL;
    }
    else
    {
      v22 = v6 + ((__int64)(v21 - *v5) >> 1);
      **(_DWORD **)(a1 + 88) -= v22;
      **(_QWORD **)(a1 + 64) += 2LL * v22;
    }
    goto LABEL_35;
  }
  if ( a3 )
    v6 = -1LL;
LABEL_35:
  *(_QWORD *)(a2 + 8) = 0LL;
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = v6;
  return result;
}
