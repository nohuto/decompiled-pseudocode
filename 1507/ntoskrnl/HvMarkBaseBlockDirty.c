/*
 * XREFs of HvMarkBaseBlockDirty @ 0x1405C267C
 * Callers:
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     CmpCreateLinkNode @ 0x1404B0468 (CmpCreateLinkNode.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     CmShutdownSystem @ 0x140653CD0 (CmShutdownSystem.c)
 *     CmFreezeRegistry @ 0x140659CF0 (CmFreezeRegistry.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x140062190 (CmpArmLazyWriter.c)
 *     CmpIssueNewDirtyCallback @ 0x140558308 (CmpIssueNewDirtyCallback.c)
 */

void __fastcall HvMarkBaseBlockDirty(__int64 a1)
{
  int v2; // eax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(a1 + 175) && !*(_DWORD *)(a1 + 88) )
  {
    *(_QWORD *)(a1 + 5384) = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
    CmpIssueNewDirtyCallback();
  }
  v2 = *(_DWORD *)(a1 + 144);
  *(_BYTE *)(a1 + 175) = 1;
  if ( (v2 & 2) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 5384) + 10000000LL * (unsigned int)CmpLazyFlushIntervalInSeconds;
    CmpArmLazyWriter(0, (unsigned __int64 *)&v3, 0);
  }
}
