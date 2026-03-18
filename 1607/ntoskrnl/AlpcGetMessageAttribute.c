/*
 * XREFs of AlpcGetMessageAttribute @ 0x140009EB4
 * Callers:
 *     PopUmpoProcessMessages @ 0x140009EEC (PopUmpoProcessMessages.c)
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x14000A018 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)~(2 * a2 - 1));
}
