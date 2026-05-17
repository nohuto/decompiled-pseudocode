/*
 * XREFs of LdrpCMFRemoveFromStandbyQueue @ 0x180086498
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpCMFAddToStanbyQueue @ 0x1800D3CC8 (LdrpCMFAddToStanbyQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrpCMFRemoveFromStandbyQueue(int a1)
{
  unsigned __int16 v1; // r8
  unsigned __int16 v2; // dx
  __int64 result; // rax
  __int64 v4; // rcx

  v1 = CMFQueueRear;
  v2 = 0;
  if ( CMFQueueRear )
  {
    while ( 1 )
    {
      result = v2;
      if ( a1 == CMFStandbyQueue[v2] )
        break;
      if ( ++v2 >= (unsigned __int16)CMFQueueRear )
        return result;
    }
    while ( v2 < v1 - 1 )
    {
      v4 = v2++;
      CMFStandbyQueue[v4] = CMFStandbyQueue[v4 + 1];
    }
    result = 0xFFFFLL;
    CMFQueueRear = v1 - 1;
  }
  return result;
}
