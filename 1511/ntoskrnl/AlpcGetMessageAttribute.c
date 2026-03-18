/*
 * XREFs of AlpcGetMessageAttribute @ 0x140092160
 * Callers:
 *     PopUmpoProcessMessages @ 0x140092198 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1400922C4 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)~(2 * a2 - 1));
}
