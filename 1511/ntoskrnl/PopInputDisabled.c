/*
 * XREFs of PopInputDisabled @ 0x14063C4D4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14053D648 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140038610 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1400E6E28 (MmGetNextSession.c)
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
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
