/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140564B90
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     CmUnloadKey @ 0x140517C64 (CmUnloadKey.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     CmShutdownSystem @ 0x1405FC700 (CmShutdownSystem.c)
 *     CmFreezeRegistry @ 0x140602C74 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400EDFB0 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400EE154 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1404CE6E8 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 175) && !*(_DWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 5384) = KiQueryUnbiasedInterruptTime();
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(a1 + 175) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0LL, (__int64)&v3, 0);
  }
}
