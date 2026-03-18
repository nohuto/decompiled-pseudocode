/*
 * XREFs of NtUserGetActiveProcessesDpis @ 0x1401EF2A0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiCacheIndex @ 0x140302350 (GetDpiCacheIndex.c)
 */

__int64 NtUserGetActiveProcessesDpis()
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 i; // rbx
  unsigned int DpiCacheIndex; // eax

  EnterSharedCrit(0LL, 1LL);
  v0 = 0;
  for ( i = *(_QWORD *)(W32GetUserSessionState(v2, v1) + 36400); i; i = *(_QWORD *)(i + 368) )
  {
    DpiCacheIndex = GetDpiCacheIndex(*(unsigned __int16 *)(i + 272));
    if ( DpiCacheIndex != -1 )
    {
      v3 = DpiCacheIndex;
      v0 |= 1 << DpiCacheIndex;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v0;
}
