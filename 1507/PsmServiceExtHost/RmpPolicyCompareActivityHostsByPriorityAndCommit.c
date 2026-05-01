/*
 * XREFs of RmpPolicyCompareActivityHostsByPriorityAndCommit @ 0x18003C25C
 * Callers:
 *     ?RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEBX0@Z @ 0x18003C250 (-RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z @ 0x18003C9C0 (-RmpMemoryMonitorCompareActivityHostsForEmpty@@YAHPEBX0@Z.c)
 *     ?RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z @ 0x18003CB10 (-RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z.c)
 * Callees:
 *     RmpEmPriorityCompare @ 0x180007394 (RmpEmPriorityCompare.c)
 */

__int64 __fastcall RmpPolicyCompareActivityHostsByPriorityAndCommit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 *v3; // r9
  unsigned __int64 *v4; // r10
  unsigned int v5; // r8d
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx

  result = RmpEmPriorityCompare(*(_DWORD *)(a1 + 40), *(_DWORD *)(a2 + 40));
  v5 = 0;
  if ( !(_DWORD)result )
  {
    v6 = *v3;
    if ( (*(_BYTE *)(v3[4] + 905) & 1) != 0 )
      v6 >>= 1;
    v7 = *v4;
    if ( (*(_BYTE *)(v4[4] + 905) & 1) != 0 )
      v7 >>= 1;
    if ( v6 <= v7 )
    {
      LOBYTE(v5) = v6 < v7;
      return v5;
    }
    else
    {
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}
