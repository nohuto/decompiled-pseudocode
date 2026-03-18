/*
 * XREFs of HvMarkBaseBlockDirty @ 0x140564650
 * Callers:
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     CmUnloadKey @ 0x14049F858 (CmUnloadKey.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     CmShutdownSystem @ 0x1405FC64C (CmShutdownSystem.c)
 *     CmFreezeRegistry @ 0x140602BC0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1400F0130 (CmpArmLazyWriter.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1400F02D4 (KiQueryUnbiasedInterruptTime.c)
 *     CmpIssueNewDirtyCallback @ 0x1404EC660 (CmpIssueNewDirtyCallback.c)
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
