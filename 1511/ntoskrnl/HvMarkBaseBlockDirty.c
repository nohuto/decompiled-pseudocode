/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1404C1D94
 * Callers:
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpCreateLinkNode @ 0x1403CDCDC (CmpCreateLinkNode.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     CmUnloadKey @ 0x140498EAC (CmUnloadKey.c)
 *     CmFreezeRegistry @ 0x1405188CC (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     CmShutdownSystem @ 0x1405DE7A4 (CmShutdownSystem.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140038E1C (KiQueryUnbiasedInterruptTime.c)
 *     CmpArmLazyWriter @ 0x140038EB0 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x1404C1E00 (CmpIssueNewDirtyCallback.c)
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
    CmpArmLazyWriter(0, (__int64)&v3, 0);
  }
}
