/*
 * XREFs of AlpcpValidateMessage @ 0x1404B5B14
 * Callers:
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpValidateConnectionMessage @ 0x1404B5ADC (AlpcpValidateConnectionMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpValidateMessage(unsigned __int16 *a1, char a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 v4; // r9
  __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v2 = *a1;
  v4 = *a1 + 40;
  if ( v2 < (unsigned __int16)(v2 + 40) )
  {
    v5 = v2;
    v6 = a1[1];
    v7 = v5 + 40;
    if ( a2 )
    {
      if ( v7 <= v6 )
      {
        a1[1] = v4;
        return 0LL;
      }
    }
    else if ( v7 == v6 )
    {
      return 0LL;
    }
  }
  return 3221225485LL;
}
