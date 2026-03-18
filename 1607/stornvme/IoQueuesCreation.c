/*
 * XREFs of IoQueuesCreation @ 0x1C0005BD0
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0006E84 (NVMeControllerInitPart2.c)
 * Callees:
 *     IoQueuesFreeResources @ 0x1C0005DA8 (IoQueuesFreeResources.c)
 *     NVMeIoCompletionQueueCreate @ 0x1C000D18C (NVMeIoCompletionQueueCreate.c)
 *     NVMeIoSubmissionQueueCreate @ 0x1C000D384 (NVMeIoSubmissionQueueCreate.c)
 */

char __fastcall IoQueuesCreation(__int64 a1, char a2, __int64 a3)
{
  unsigned __int16 v5; // di
  unsigned __int16 v6; // di

  v5 = 1;
  if ( *(_WORD *)(a1 + 234) )
  {
    while ( 1 )
    {
      LOBYTE(a3) = a2;
      if ( !(unsigned __int8)NVMeIoCompletionQueueCreate(a1, v5, a3) )
        break;
      if ( ++v5 > *(_WORD *)(a1 + 234) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v6 = 1;
    if ( !*(_WORD *)(a1 + 232) )
      return 1;
    while ( 1 )
    {
      LOBYTE(a3) = a2;
      if ( !(unsigned __int8)NVMeIoSubmissionQueueCreate(a1, v6, a3) )
        break;
      if ( ++v6 > *(_WORD *)(a1 + 232) )
        return 1;
    }
  }
  IoQueuesFreeResources(a1);
  return 0;
}
