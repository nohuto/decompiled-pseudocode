/*
 * XREFs of VerifierIoWMIRegistrationControl @ 0x1406D0E58
 * Callers:
 *     <none>
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140002178 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x140002454 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x1400025D0 (VfAvlInitializeLockContext.c)
 *     ViTargetWMIDeregister @ 0x1406C4770 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1406C4808 (ViTargetWMIRegister.c)
 */

NTSTATUS __fastcall VerifierIoWMIRegistrationControl(PDEVICE_OBJECT DeviceObject, signed int Action)
{
  volatile signed __int32 *v4; // rax
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !VfSafeMode && Action < 0 )
  {
    switch ( Action & 0x7FFFFFFF )
    {
      case 1:
LABEL_7:
        ViTargetWMIRegister((__int64)DeviceObject);
        break;
      case 2:
        ViTargetWMIDeregister((__int64)DeviceObject);
        break;
      case 3:
        ViTargetWMIDeregister((__int64)DeviceObject);
        goto LABEL_7;
    }
  }
  if ( (MmVerifierData & 0x10) != 0 && Action >= 0 )
  {
    VfAvlInitializeLockContext((__int64)v6, 1);
    v4 = (volatile signed __int32 *)VfAvlLookupTreeNode(ViDevObjAvl, (__int64)v6, (unsigned __int64)DeviceObject, 0LL);
    if ( v4 )
    {
      switch ( Action )
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
  return pXdvIoWMIRegistrationControl(DeviceObject, Action);
}
