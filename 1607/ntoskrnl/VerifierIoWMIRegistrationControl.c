/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x14071D000
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400825CC (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140082748 (VfAvlInitializeLockContext.c)
 *     VfAvlLookupTreeNode @ 0x14012F574 (VfAvlLookupTreeNode.c)
 *     ViTargetWMIDeregister @ 0x140710834 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1407108CC (ViTargetWMIRegister.c)
 */

__int64 __fastcall VerifierIoWMIRegistrationControl(unsigned __int64 a1, int a2)
{
  volatile signed __int32 *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfSafeMode && a2 < 0 )
  {
    switch ( a2 & 0x7FFFFFFF )
    {
      case 1:
LABEL_7:
        ViTargetWMIRegister(a1);
        break;
      case 2:
        ViTargetWMIDeregister(a1);
        break;
      case 3:
        ViTargetWMIDeregister(a1);
        goto LABEL_7;
    }
  }
  if ( (MmVerifierData & 0x10) != 0 && a2 >= 0 )
  {
    VfAvlInitializeLockContext((__int64)v6, 1);
    v4 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v6, a1, 0LL);
    if ( v4 )
    {
      switch ( a2 )
      {
        case 1:
          goto LABEL_14;
        case 2:
          _InterlockedAnd(v4 + 4, 0xFFFFFFFE);
          break;
        case 3:
LABEL_14:
          _InterlockedOr(v4 + 4, 1u);
          break;
      }
    }
    VfAvlCleanupLockContext((__int64)v6);
  }
  return pXdvIoWMIRegistrationControl(a1, (unsigned int)a2);
}
