/*
 * XREFs of ?seekpos@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAA?AV?$fpos@H@2@V32@H@Z @ 0x180024EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::seekpos(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned __int64 *v4; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  int v11; // edx
  __int64 *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  int v17; // edx
  __int64 result; // rax

  v4 = *(unsigned __int64 **)(a1 + 64);
  v7 = *(_QWORD *)a3 + *(int *)(a3 + 8);
  v8 = *v4;
  if ( *v4 && *(_QWORD *)(a1 + 104) < v8 )
    *(_QWORD *)(a1 + 104) = v8;
  if ( v7 != std::_BADOFF )
  {
    if ( (a4 & 1) != 0 && (v9 = **(_QWORD **)(a1 + 56)) != 0 )
    {
      if ( v7 >= 0 )
      {
        v10 = **(_QWORD **)(a1 + 24);
        if ( v7 <= (*(_QWORD *)(a1 + 104) - v10) >> 1 )
        {
          v11 = v7 + ((v10 - v9) >> 1);
          **(_DWORD **)(a1 + 80) -= v11;
          **(_QWORD **)(a1 + 56) += 2LL * v11;
          if ( (a4 & 2) != 0 )
          {
            v12 = *(__int64 **)(a1 + 64);
            v13 = *v12;
            if ( *v12 )
            {
              v14 = **(_QWORD **)(a1 + 56);
              v15 = **(int **)(a1 + 88);
              *v12 = v14;
              **(_DWORD **)(a1 + 88) = (v13 + 2 * v15 - v14) >> 1;
            }
          }
          goto LABEL_18;
        }
      }
    }
    else if ( (a4 & 2) != 0 )
    {
      if ( *v4 )
      {
        if ( v7 >= 0 )
        {
          v16 = **(_QWORD **)(a1 + 24);
          if ( v7 <= (*(_QWORD *)(a1 + 104) - v16) >> 1 )
          {
            v17 = v7 + ((__int64)(v16 - *v4) >> 1);
            **(_DWORD **)(a1 + 88) -= v17;
            **(_QWORD **)(a1 + 64) += 2LL * v17;
            goto LABEL_18;
          }
        }
      }
    }
    v7 = std::_BADOFF;
  }
LABEL_18:
  *(_QWORD *)(a2 + 8) = 0LL;
  result = a2;
  *(_DWORD *)(a2 + 16) = 0;
  *(_QWORD *)a2 = v7;
  return result;
}
