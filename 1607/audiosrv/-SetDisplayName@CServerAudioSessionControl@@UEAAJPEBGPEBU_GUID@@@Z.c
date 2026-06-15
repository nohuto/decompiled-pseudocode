/*
 * XREFs of ?SetDisplayName@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180060CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetDisplayName(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 <= 0x3E8 )
  {
    LOBYTE(a4) = 1;
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *, __int64))(**((_QWORD **)this + 9) + 216LL))(
             *((_QWORD *)this + 9),
             a2,
             a3,
             a4);
  }
  else
  {
    AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetDisplayName", 263, -2147024809);
    return 2147942487LL;
  }
}
