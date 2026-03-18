/*
 * XREFs of ArbTestAllocation @ 0x1C008B950
 * Callers:
 *     IrqArbTestAllocation @ 0x1C008B910 (IrqArbTestAllocation.c)
 * Callees:
 *     RtlFreeRangeList_0 @ 0x1C002BC50 (RtlFreeRangeList_0.c)
 *     _guard_dispatch_icall_nop @ 0x1C002BE40 (_guard_dispatch_icall_nop.c)
 *     ArbpBuildAllocationStack @ 0x1C008B6EC (ArbpBuildAllocationStack.c)
 */

__int64 __fastcall ArbTestAllocation(__int64 a1, __int64 **a2)
{
  __int64 *v2; // r8
  NTSTATUS v5; // eax
  int v6; // ebx
  int v7; // ebp
  void *v8; // r15
  __int64 i; // rsi
  void *v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int64 j; // rax
  int v13; // eax
  __int64 *v14; // r10
  __int64 *v15; // rdx
  char v16; // cl
  __int64 *v17; // r9
  __int64 result; // rax
  __int64 **v19; // rcx
  __int64 v20; // rax

  v2 = a2[2];
  if ( v2 )
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD))(a1 + 280))(
           a1,
           *((unsigned int *)a2 + 2),
           v2,
           *(_QWORD *)(a1 + 48));
  else
    v5 = RtlCopyRangeList(*(PRTL_RANGE_LIST *)(a1 + 48), *(PRTL_RANGE_LIST *)(a1 + 40));
  v6 = v5;
  if ( v5 < 0 )
    goto LABEL_20;
  v7 = 0;
  v8 = 0LL;
  for ( i = **a2; *a2 != (__int64 *)i; i = *(_QWORD *)i )
  {
    ++v7;
    if ( !a2[2] )
    {
      v10 = *(void **)(i + 32);
      if ( v8 != v10 )
      {
        v8 = *(void **)(i + 32);
        v6 = RtlDeleteOwnersRanges(*(PRTL_RANGE_LIST *)(a1 + 48), v10);
        if ( v6 < 0 )
          goto LABEL_20;
      }
    }
    *(_QWORD *)(i + 48) = 0LL;
    if ( *(_QWORD *)(a1 + 144) )
    {
      v11 = *(_QWORD *)(i + 24);
      for ( j = v11 + 32LL * *(unsigned int *)(i + 16); v11 < j; j = *(_QWORD *)(i + 24)
                                                                   + 32LL * *(unsigned int *)(i + 16) )
      {
        v13 = (*(__int64 (__fastcall **)(unsigned __int64))(a1 + 144))(v11);
        if ( v13 < 0 )
        {
          v6 = -1073741438;
          goto LABEL_20;
        }
        v11 += 32LL;
        *(_QWORD *)(i + 48) += v13;
      }
    }
  }
  v14 = *a2;
  do
  {
    v15 = (__int64 *)*v14;
    v16 = 1;
    v17 = *(__int64 **)*v14;
    if ( (__int64 *)*v14 == v14 )
      break;
    do
    {
      if ( v17 == v14 )
        break;
      if ( v15[6] > v17[6] )
      {
        v19 = (__int64 **)v15[1];
        v20 = *v17;
        *v19 = v17;
        *(_QWORD *)(v20 + 8) = v15;
        *v15 = v20;
        v15[1] = (__int64)v17;
        v17[1] = (__int64)v19;
        v16 = 0;
        *v17 = (__int64)v15;
      }
      v15 = (__int64 *)*v15;
      v17 = (__int64 *)*v15;
    }
    while ( v15 != v14 );
  }
  while ( !v16 );
  v6 = ArbpBuildAllocationStack(a1, *a2, v7);
  if ( v6 < 0
    || (result = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 232))(a1, *(_QWORD *)(a1 + 112)),
        v6 = result,
        (int)result < 0) )
  {
LABEL_20:
    RtlFreeRangeList_0(*(PRTL_RANGE_LIST *)(a1 + 48));
    return (unsigned int)v6;
  }
  return result;
}
