/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x1406C1D54
 * Callers:
 *     VfFreeMemoryNotification @ 0x1406B709C (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     VfPoolIsInternalFree @ 0x14020BE28 (VfPoolIsInternalFree.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1406C1E30 (ViRemLockDeleteFirstTreeNode.c)
 */

__int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  PVOID v5; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    result = qword_1406E0278;
    if ( qword_1406E0278 )
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
