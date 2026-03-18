/*
 * XREFs of NtUserEvent @ 0x1C02122F0
 * Callers:
 *     <none>
 * Callees:
 *     xxxCsEvent @ 0x1C000D8F0 (xxxCsEvent.c)
 */

__int64 __fastcall NtUserEvent(char *Src)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // di
  char *v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx

  EnterCrit(0LL, 1LL);
  if ( (((((unsigned __int128)-(__int128)(unsigned __int64)PsGetCurrentProcessWow64Process(v2) >> 64) & 0xFFFFFFFD) + 3) & (unsigned int)Src) != 0 )
    ExRaiseDatatypeMisalignment();
  v3 = *((_WORD *)Src + 3);
  if ( v3 )
  {
    if ( (((-(__int64)(PsGetCurrentProcessWow64Process(W32UserProbeAddress) != 0) & 0xFFFFFFFFFFFFFFFDuLL) + 3) & (unsigned __int64)(Src + 8)) != 0 )
      ExRaiseDatatypeMisalignment();
    v4 = &Src[v3 + 8];
    if ( (unsigned __int64)v4 > W32UserProbeAddress || v4 < Src + 8 )
      *W32UserProbeAddress = 0;
  }
  v5 = xxxCsEvent(Src, v3);
  UserSessionSwitchLeaveCrit(v7, v6);
  return v5;
}
