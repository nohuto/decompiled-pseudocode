/*
 * XREFs of PopInputDisabled @ 0x140674BC4
 * Callers:
 *     PopAdaptivePowerSettingCallback @ 0x14056D950 (PopAdaptivePowerSettingCallback.c)
 * Callees:
 *     MmGetSessionId @ 0x140013CE0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x140087F10 (MmGetNextSession.c)
 *     PsIsServiceSession @ 0x1404873C8 (PsIsServiceSession.c)
 *     PopSetSessionUserStatus @ 0x14052EBB4 (PopSetSessionUserStatus.c)
 */

void __fastcall PopInputDisabled(unsigned int a1, char a2, char a3)
{
  struct _KPROCESS *i; // rcx
  unsigned int SessionId; // edi
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
      if ( !PsIsServiceSession(SessionId) && a1 != SessionId )
        PopSetSessionUserStatus(SessionId, 0);
    }
  }
  if ( a2 )
    PopSetSessionUserStatus(a1, 0);
}
