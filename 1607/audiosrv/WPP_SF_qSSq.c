/*
 * XREFs of WPP_SF_qSSq @ 0x180070718
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x18006D5C4 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_qSSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const wchar_t *a5)
{
  __int64 v6; // rax
  const wchar_t *v7; // rcx
  __int64 v9; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  if ( a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
  }
  v7 = L"NULL";
  if ( a5 )
    v7 = a5;
  return EtwTraceMessage(a1, 43LL, &WPP_62c432f5c4e23fa6826c3a082556b9ea_Traceguids, 41LL, &v9, 8LL, v7);
}
