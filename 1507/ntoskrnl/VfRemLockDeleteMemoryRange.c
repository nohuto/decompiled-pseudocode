/*
 * XREFs of VfRemLockDeleteMemoryRange @ 0x1407435AC
 * Callers:
 *     VfFreeMemoryNotification @ 0x140737404 (VfFreeMemoryNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400257E0 (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x140025810 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x140025AC8 (VfAvlInitializeLockContext.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1407436A4 (ViRemLockDeleteFirstTreeNode.c)
 */

signed __int64 __fastcall VfRemLockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
  PVOID v6; // rbx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)ViRemLockInitialized;
  if ( ViRemLockInitialized )
  {
    result = qword_140763278;
    if ( qword_140763278 )
    {
      CurrentThread = KeGetCurrentThread();
      result = (signed __int64)&unk_140356F68;
      while ( CurrentThread != *(struct _KTHREAD **)result )
      {
        result += 64LL;
        if ( result >= (__int64)&PcwpSynchCounterSet )
        {
          VfAvlInitializeLockContext((__int64)v7, 1);
          v6 = VfAvlLookupTreeNode(&ViRemLockAvl, (__int64)v7, a1, a2);
          result = VfAvlCleanupLockContext((__int64)v7);
          if ( v6 )
          {
            do
              result = ViRemLockDeleteFirstTreeNode(a1, a2);
            while ( (_DWORD)result );
          }
          return result;
        }
      }
    }
  }
  return result;
}
