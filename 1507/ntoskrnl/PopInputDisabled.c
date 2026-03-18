/*
 * XREFs of PopInputDisabled @ 0x1406BCB30
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x140598BF8 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140050140 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400FD460 (MmGetNextSession.c)
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  struct _KPROCESS *i; // rcx
  unsigned int SessionId; // eax
  struct _KPROCESS *NextSession; // rax
  struct _KPROCESS *v8; // rbx

  if ( a3 )
  {
    for ( i = 0LL; ; i = v8 )
    {
      NextSession = (struct _KPROCESS *)MmGetNextSession(i);
      v8 = NextSession;
      if ( !NextSession )
        break;
      SessionId = MmGetSessionId(NextSession);
      if ( SessionId && a1 != SessionId )
        PopSetSessionUserStatus(SessionId, 0);
    }
  }
  if ( a2 )
    PopSetSessionUserStatus(a1, 0);
}
