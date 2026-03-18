/*
 * XREFs of MiDeleteParentDecayNode @ 0x1400DFE0C
 * Callers:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiRemoveDecayClusterTimer @ 0x1400DFEB0 (MiRemoveDecayClusterTimer.c)
 */

unsigned __int8 __fastcall MiDeleteParentDecayNode(__int64 a1)
{
  __int64 v1; // rdx
  ULONG_PTR v2; // rbx
  __int64 v3; // rax
  char v4; // al
  unsigned __int8 result; // al

  v1 = *(_QWORD *)(a1 + 24) & 0xFFFFFFFFFLL;
  v2 = 48 * v1 - 0x58000000000LL;
  v3 = *(_QWORD *)(v2 + 40);
  *(_QWORD *)(v2 + 16) = (v1 << 12) | *(_QWORD *)(v2 + 16) & 0xFFFF000000000FFFuLL;
  *(_QWORD *)(v2 + 40) = v1 | v3 & 0xFFFFFFF000000000uLL;
  MiUnlinkPageFromList(v2, 1);
  MiRemoveDecayClusterTimer(v2);
  v4 = *(_BYTE *)(v2 + 35);
  if ( (v4 & 8) == 0 )
    return (unsigned __int8)RtlpInterlockedPushEntrySList(&ListHead, (PSLIST_ENTRY)v2);
  result = v4 & 0xF7;
  *(_BYTE *)(v2 + 35) = result;
  return result;
}
