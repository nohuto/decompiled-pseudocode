/*
 * XREFs of RtlSparseBitmapCtxAllocateRange @ 0x1402230C8
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x140223B50 (RtlpSparseBitmapCtxPrepareRanges.c)
 * Callees:
 *     RtlSparseBitmapCtxInitializeRange @ 0x14022318C (RtlSparseBitmapCtxInitializeRange.c)
 */

signed __int64 __fastcall RtlSparseBitmapCtxAllocateRange(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  signed __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  signed __int64 v10; // rsi
  signed __int32 v11; // eax
  __int64 v12; // rcx

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 8LL * a2);
  if ( !v5 )
  {
    if ( *(_DWORD *)(a1 + 48) >= *(_DWORD *)(a1 + 60) )
      return 0LL;
    v6 = *(unsigned int *)(a1 + 56);
    v7 = 4 * (unsigned int)((unsigned __int64)(v6 + 31) >> 5) + 24;
    v8 = *(_DWORD *)(a1 + 68);
    if ( v8 )
      v7 = (unsigned int)(v6 * v8 + v7);
    v9 = (*(__int64 (__fastcall **)(__int64))(a1 + 32))(v7);
    v10 = v9;
    if ( v9 )
    {
      RtlSparseBitmapCtxInitializeRange(a1, v9);
      v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 48), 1u);
      v12 = *(_QWORD *)(a1 + 8);
      if ( (unsigned int)(v11 + 1) <= *(_DWORD *)(a1 + 60) )
      {
        v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 8 * v3), v10, 0LL);
        if ( !v5 )
          return v10;
      }
      else
      {
        v5 = 0LL;
        if ( v12 )
          v5 = *(_QWORD *)(v12 + 8 * v3);
      }
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
      (*(void (__fastcall **)(signed __int64))(a1 + 40))(v10);
    }
    else
    {
      return 0LL;
    }
  }
  return v5;
}
