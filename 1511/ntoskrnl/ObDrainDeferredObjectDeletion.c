/*
 * XREFs of ObDrainDeferredObjectDeletion @ 0x14062DBC4
 * Callers:
 *     CmpLoadKeyCommon @ 0x140002D44 (CmpLoadKeyCommon.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400D26F0 (ExBlockOnAddressPushLock.c)
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
