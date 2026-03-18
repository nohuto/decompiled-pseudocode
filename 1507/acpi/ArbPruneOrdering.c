/*
 * XREFs of ArbPruneOrdering @ 0x1C0081174
 * Callers:
 *     ArbBuildAssignmentOrdering @ 0x1C00704B8 (ArbBuildAssignmentOrdering.c)
 * Callees:
 *     memmove @ 0x1C0023800 (memmove.c)
 */

__int64 __fastcall ArbPruneOrdering(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebx
  _BYTE *PoolWithTag; // rax
  _BYTE *v8; // rsi
  char *v9; // rbx
  unsigned __int64 *v10; // rcx
  unsigned __int64 i; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  __int64 v15; // rbx
  PVOID v16; // rbp
  __int64 result; // rax
  void *v18; // rcx

  if ( a3 < a2 )
    return (unsigned int)-1073741811;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (2 * *a1 + 1), 0x4C627241u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v9 = PoolWithTag;
  if ( *a1 )
  {
    v10 = (unsigned __int64 *)*((_QWORD *)a1 + 1);
    for ( i = (unsigned __int64)&v10[2 * *a1]; (unsigned __int64)v10 < i; i = *((_QWORD *)a1 + 1) + 16LL * *a1 )
    {
      v12 = *v10;
      if ( a3 < *v10 || (v13 = v10[1], a2 > v13) )
      {
        *(_OWORD *)v9 = *(_OWORD *)v10;
      }
      else
      {
        if ( a2 <= v12 )
        {
          if ( a3 >= v13 )
            goto LABEL_18;
          *(_QWORD *)v9 = a3 + 1;
          v14 = v10[1];
        }
        else
        {
          if ( a3 < v13 )
          {
            *(_QWORD *)v9 = a3 + 1;
            *((_QWORD *)v9 + 1) = v10[1];
            *((_QWORD *)v9 + 2) = *v10;
            *((_QWORD *)v9 + 3) = a2 - 1;
            v9 += 32;
            goto LABEL_18;
          }
          *(_QWORD *)v9 = v12;
          v14 = a2 - 1;
        }
        *((_QWORD *)v9 + 1) = v14;
      }
      v9 += 16;
LABEL_18:
      v10 += 2;
    }
  }
  v15 = (v9 - v8) >> 4;
  if ( (_WORD)v15 )
  {
    if ( (unsigned __int16)v15 > a1[1] )
    {
      v16 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned __int16)v15, 0x4C627241u);
      if ( !v16 )
      {
        v6 = -1073741670;
        ExFreePoolWithTag(v8, 0);
        return v6;
      }
      v18 = (void *)*((_QWORD *)a1 + 1);
      if ( v18 )
        ExFreePoolWithTag(v18, 0);
      *((_QWORD *)a1 + 1) = v16;
      a1[1] = v15;
    }
    memmove(*((void **)a1 + 1), v8, 16LL * (unsigned __int16)v15);
  }
  ExFreePoolWithTag(v8, 0);
  result = 0LL;
  *a1 = v15;
  return result;
}
