/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C00162C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r9
  __int64 v9; // r14
  _QWORD *v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rax
  int v18; // [rsp+28h] [rbp-30h]

  DxgCoreInterface[13](a1, (_OWORD *)3);
  if ( *(_DWORD *)(a1 + 160) == 1 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 1984) + 384LL);
    _InterlockedExchange((volatile __int32 *)(v4 + 2072), 0);
    if ( *(_DWORD *)(v4 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8LL * v3 + 2640) + 41760LL), 0, 3) == 3 )
        {
          LOBYTE(v2) = 1;
          LOBYTE(v18) = 1;
          v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _QWORD, int))DxgCoreInterface[23])(
                 *(_QWORD *)(a1 + 1976),
                 v3,
                 v2,
                 0x2000LL,
                 0LL,
                 v18);
          v9 = v5;
          if ( v5 < 0 )
          {
            v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6, v2, v8);
            v10[3] = v3;
            v10[4] = a1;
            v10[5] = v9;
            WdLogEvent5_WdAssertion(v10);
          }
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(v4 + 40) );
    }
  }
  result = DxgCoreInterface[14](a1, (_OWORD *)3);
  v16 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 24));
  if ( !v16 )
    result = DxgCoreInterface[3](*(_QWORD *)(a1 + 16), (_OWORD *)a1);
  if ( v16 < 0 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v17 + 24) = 1067LL;
    return WdLogEvent5_WdAssertion(v17);
  }
  return result;
}
