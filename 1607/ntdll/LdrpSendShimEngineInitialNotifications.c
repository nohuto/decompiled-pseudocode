/*
 * XREFs of LdrpSendShimEngineInitialNotifications @ 0x18007DED8
 * Callers:
 *     LdrpDynamicShimModule @ 0x18002D724 (LdrpDynamicShimModule.c)
 *     LdrpLoadShimEngine @ 0x18007DCD0 (LdrpLoadShimEngine.c)
 *     LdrpSendShimEngineInitialNotifications @ 0x18007DED8 (LdrpSendShimEngineInitialNotifications.c)
 * Callees:
 *     LdrpSendShimEngineInitialNotifications @ 0x18007DED8 (LdrpSendShimEngineInitialNotifications.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpSendShimEngineInitialNotifications(__int64 *a1, __int64 (__fastcall *a2)(__int64 *))
{
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 *i; // rsi
  _QWORD *v7; // rbx

  result = *a1;
  if ( (*(_DWORD *)(*a1 - 56) & 0x800) == 0 )
  {
    *(_BYTE *)(result - 55) |= 8u;
    v5 = (_QWORD *)a1[5];
    if ( v5 )
    {
      v7 = (_QWORD *)a1[5];
      do
      {
        v7 = (_QWORD *)*v7;
        result = LdrpSendShimEngineInitialNotifications(v7[1], a2);
      }
      while ( v7 != v5 );
    }
    for ( i = (__int64 *)a1[1]; i != a1; i = (__int64 *)i[1] )
    {
      result = a2(i - 20);
      *((_BYTE *)i - 55) |= 8u;
    }
  }
  return result;
}
