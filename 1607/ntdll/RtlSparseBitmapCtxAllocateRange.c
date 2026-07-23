/*
 * XREFs of RtlSparseBitmapCtxAllocateRange @ 0x180050F70
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18004FA00 (RtlpSparseBitmapCtxPrepareRanges.c)
 * Callees:
 *     RtlpSparseBitmapCheckRangeArrayPage @ 0x18004FE48 (RtlpSparseBitmapCheckRangeArrayPage.c)
 *     RtlSparseBitmapCtxInitializeRange @ 0x1800514F8 (RtlSparseBitmapCtxInitializeRange.c)
 *     RtlpSparseBitmapCommitRangeArrayPage @ 0x180051688 (RtlpSparseBitmapCommitRangeArrayPage.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall RtlSparseBitmapCtxAllocateRange(__int64 a1, unsigned int a2)
{
  signed __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rax
  signed __int64 v9; // rbp

  v2 = 0LL;
  v3 = a2;
  if ( *(_QWORD *)(a1 + 8) && RtlpSparseBitmapCheckRangeArrayPage(a1, a2) )
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3);
  if ( !v2 )
  {
    if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 60) )
      return 0LL;
    v5 = *(unsigned int *)(a1 + 56);
    v6 = 4 * (unsigned int)((unsigned __int64)(v5 + 31) >> 5) + 24;
    v7 = *(_DWORD *)(a1 + 68);
    if ( v7 )
      v6 = (unsigned int)(v5 * v7 + v6);
    v8 = (*(__int64 (__fastcall **)(__int64))(a1 + 32))(v6);
    v9 = v8;
    if ( !v8 )
      return 0LL;
    RtlSparseBitmapCtxInitializeRange(a1, v8);
    if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 48)) > *(_DWORD *)(a1 + 60) )
    {
      v2 = 0LL;
      if ( *(_QWORD *)(a1 + 8) && RtlpSparseBitmapCheckRangeArrayPage(a1, v3) )
        v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v3);
    }
    else if ( RtlpSparseBitmapCheckRangeArrayPage(a1, v3)
           || (int)RtlpSparseBitmapCommitRangeArrayPage(a1, (unsigned int)v3) >= 0 )
    {
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)(a1 + 8) + 8 * v3), v9, 0LL);
      if ( !v2 )
        return v9;
    }
    else
    {
      v2 = 0LL;
    }
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
    (*(void (__fastcall **)(signed __int64))(a1 + 40))(v9);
  }
  return v2;
}
