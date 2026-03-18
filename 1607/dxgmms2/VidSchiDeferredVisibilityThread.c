/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C0012C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 result; // rax
  _QWORD *v10; // rax
  int v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+30h] [rbp-28h]

  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[13])(a1, 3LL);
  if ( *(_DWORD *)(a1 + 176) == 1 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2136) + 384LL);
    _InterlockedExchange((volatile __int32 *)(v4 + 2064), 0);
    if ( *(_DWORD *)(v4 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8LL * v3 + 2968) + 46912LL), 0, 3) == 3 )
        {
          LOBYTE(v2) = 1;
          LOBYTE(v12) = 0;
          LOBYTE(v11) = 1;
          v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, _QWORD, int, int))DxgCoreInterface[23])(
                 *(_QWORD *)(a1 + 2128),
                 v3,
                 v2,
                 0x2000LL,
                 0LL,
                 v11,
                 v12);
          v8 = v5;
          if ( v5 < 0 )
          {
            v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
            v10[3] = v3;
            v10[4] = a1;
            v10[5] = v8;
            WdLogEvent5_WdAssertion(v10);
          }
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(v4 + 40) );
    }
  }
  ((void (__fastcall *)(__int64, __int64))DxgCoreInterface[14])(a1, 3LL);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[3])(*(_QWORD *)(a1 + 16), a1);
  return result;
}
