/*
 * XREFs of ObDrainDeferredObjectDeletion @ 0x1406AB79C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1400D2048 (CmpLoadKeyCommon.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D2B14 (ExBlockOnAddressPushLock.c)
 */

__int64 ObDrainDeferredObjectDeletion()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    result = ObpRemoveObjectList;
    v1 = ObpRemoveObjectList;
    if ( !ObpRemoveObjectList )
      break;
    ExBlockOnAddressPushLock((__int64)&ObpRemoveObjectWait, &ObpRemoveObjectList, &v1, 8uLL, 0LL);
  }
  return result;
}
