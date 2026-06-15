/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180028260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( (unsigned int)IsTSSessionGetAudioProtocolSupported() )
    return TS_SessionGetAudioProtocol(a1, a2, a3, a4);
  else
    return 1LL;
}
