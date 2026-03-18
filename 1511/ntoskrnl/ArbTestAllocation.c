/*
 * XREFs of ArbTestAllocation @ 0x14052BE34
 * Callers:
 *     <none>
 * Callees:
 *     ArbpBuildAllocationStack @ 0x14052D2D4 (ArbpBuildAllocationStack.c)
 *     RtlCopyRangeList @ 0x14052E024 (RtlCopyRangeList.c)
 *     RtlDeleteOwnersRanges @ 0x14052E334 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x14052E404 (RtlFreeRangeList.c)
 */

__int64 __fastcall ArbTestAllocation(__int64 a1, __int64 ***a2)
{
  __int64 **v2; // r8
  NTSTATUS v5; // eax
  NTSTATUS v6; // ebx
  unsigned int v7; // ebp
  void *v8; // r15
  __int64 *i; // rsi
  void *v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 j; // rax
  int v13; // eax
  __int64 **v14; // r10
  __int64 **v15; // rdx
  char v16; // cl
  __int64 *v17; // r9
  __int64 result; // rax
  __int64 **v19; // rcx
  __int64 *v20; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 **, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v2,
           *(_QWORD *)(a1 + 48));
  else
    v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_24;
  v7 = 0;
  v8 = 0LL;
  for ( i = **a2; *a2 != (__int64 **)i; i = (__int64 *)*i )
  {
    ++v7;
    if ( !a2[2] )
    {
      v10 = (void *)i[4];
      if ( v8 != v10 )
      {
        v8 = (void *)i[4];
        v6 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), v10);
        if ( v6 < 0 )
          goto LABEL_24;
      }
    }
    i[6] = 0LL;
    if ( *(_QWORD *)(a1 + 144) )
    {
      v11 = i[3];
      for ( j = v11 + 32LL * *((unsigned int *)i + 4); v11 < j; j = i[3] + 32LL * *((unsigned int *)i + 4) )
      {
        v13 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 144))(v11);
        if ( v13 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_24;
        }
        v11 += 32LL;
        i[6] += v13;
      }
    }
  }
  v14 = *a2;
  do
  {
    v15 = (__int64 **)*v14;
    v16 = 1;
    v17 = (__int64 *)**v14;
    if ( *v14 == (__int64 *)v14 )
      break;
    do
    {
      if ( v17 == (__int64 *)v14 )
        break;
      if ( (__int64)v15[6] > v17[6] )
      {
        v19 = (__int64 **)v15[1];
        v20 = (__int64 *)*v17;
        *v19 = v17;
        v20[1] = (__int64)v15;
        *v15 = v20;
        v15[1] = v17;
        v17[1] = (__int64)v19;
        v16 = 0;
        *v17 = (__int64)v15;
      }
      v15 = (__int64 **)*v15;
      v17 = *v15;
    }
    while ( v15 != v14 );
  }
  while ( !v16 );
  v6 = ArbpBuildAllocationStack(a1, *a2, v7, v17);
  if ( v6 < 0
    || (result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232))(a1, *(_QWORD *)(a1 + 112)),
        v6 = result,
        (int)result < 0) )
  {
LABEL_24:
    RtlFreeRangeList(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v6;
  }
  return result;
}
