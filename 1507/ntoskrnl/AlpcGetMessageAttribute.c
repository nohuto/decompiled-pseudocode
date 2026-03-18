/*
 * XREFs of AlpcGetMessageAttribute @ 0x1400EE08C
 * Callers:
 *     PopUmpoProcessMessages @ 0x1400EE0C4 (PopUmpoProcessMessages.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 * Callees:
 *     AlpcGetHeaderSize @ 0x1400EE200 (AlpcGetHeaderSize.c)
 */

char *__fastcall AlpcGetMessageAttribute(_DWORD *a1, int a2)
{
  if ( (*a1 & a2) == 0 || ((a2 - 1) & a2) != 0 )
    return 0LL;
  else
    return (char *)a1 + (unsigned int)AlpcGetHeaderSize(*a1 & (unsigned int)~(2 * a2 - 1));
}
