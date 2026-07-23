/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x14070DE00
 * Callers:
 *     VfFreeMemoryNotification @ 0x1407028B4 (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     VfPoolIsInternalFree @ 0x140223710 (VfPoolIsInternalFree.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x14070DEDC (ViRemLockDeleteFirstTreeNode.c)
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
