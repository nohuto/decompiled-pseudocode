/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x14070DDD0
 * Callers:
 *     VfFreeMemoryNotification @ 0x140702884 (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14008446C (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400845E8 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F004 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x1402238E4 (VfPoolIsInternalFree.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEAC (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    result = qword_14072C308;
    if ( qword_14072C308 )
    {
      result = VfPoolIsInternalFree();
      if ( !(_DWORD)result )
      {
        VfAvlInitializeLockContext((__int64)v6, 1);
        v5 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v6, a1, a2);
        result = VfAvlCleanupLockContext((__int64)v6);
        if ( v5 )
        {
          do
            result = ViRemLockDeleteFirstTreeNode(a1, a2);
          while ( (_DWORD)result );
        }
      }
    }
  }
  return result;
}
