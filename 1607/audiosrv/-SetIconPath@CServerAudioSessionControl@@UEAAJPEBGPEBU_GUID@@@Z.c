/*
 * XREFs of ?SetIconPath@CServerAudioSessionControl@@UEAAJPEBGPEBU_GUID@@@Z @ 0x180060D00
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CServerAudioSessionControl::SetIconPath(
        CServerAudioSessionControl *this,
        const unsigned __int16 *a2,
        const struct _GUID *a3)
{
  unsigned __int64 v3; // rax

  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0x3E8 )
    return (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, const struct _GUID *))(**((_QWORD **)this + 9)
                                                                                             + 232LL))(
             *((_QWORD *)this + 9),
             a2,
             a3);
  AudSrvTraceLoggingErrorHelper("CServerAudioSessionControl::SetIconPath", 317, -2147024809);
  return 2147942487LL;
}
