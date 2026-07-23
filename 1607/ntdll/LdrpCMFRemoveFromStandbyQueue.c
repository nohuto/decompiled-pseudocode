/*
 * XREFs of LdrpCMFRemoveFromStandbyQueue @ 0x18008A234
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800DC028 (LdrpCMFAddToStanbyQueue.c)
 * Callees:
 *     <none>
 */

void __fastcall LdrpCMFRemoveFromStandbyQueue(int a1)
{
  __int16 v1; // r9
  unsigned __int16 v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  int v5; // r10d

  v1 = CMFQueueRear;
  v2 = 0;
  if ( CMFQueueRear )
  {
    while ( a1 != CMFStandbyQueue[v2] )
    {
      if ( ++v2 >= (unsigned __int16)CMFQueueRear )
        return;
    }
    v5 = (unsigned __int16)CMFQueueRear - 1;
    while ( 1 )
    {
      v4 = v2;
      if ( v2 >= v5 )
        break;
      v3 = v2++;
      CMFStandbyQueue[v3] = CMFStandbyQueue[v4 + 1];
    }
    CMFQueueRear = v1 - 1;
  }
}
