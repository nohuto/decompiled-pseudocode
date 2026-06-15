/*
 * XREFs of WPP_SF_qSSq @ 0x180089C60
 * Callers:
 *     ?OpenStoreKey@CAudioSessionStore@@AEAAJXZ @ 0x1800358E0 (-OpenStoreKey@CAudioSessionStore@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_qSSq(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  __int64 v6; // rcx
  __int64 v8; // [rsp+98h] [rbp+20h] BYREF

  v8 = a4;
  if ( a5 && *a5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a5[v6] );
  }
  return EtwTraceMessage(a1, 43LL, &WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids, 95LL, &v8);
}
