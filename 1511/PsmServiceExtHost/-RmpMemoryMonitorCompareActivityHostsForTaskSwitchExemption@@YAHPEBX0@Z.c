/*
 * XREFs of ?RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption@@YAHPEBX0@Z @ 0x180041ED0
 * Callers:
 *     <none>
 * Callees:
 *     RmpActivityHostQueryCategory @ 0x180005ECC (RmpActivityHostQueryCategory.c)
 *     RmpEmPriorityCompare @ 0x18001D774 (RmpEmPriorityCompare.c)
 *     RmpPolicyCompareActivityHostsByPriorityAndCommit @ 0x180041694 (RmpPolicyCompareActivityHostsByPriorityAndCommit.c)
 */

__int64 __fastcall RmpMemoryMonitorCompareActivityHostsForTaskSwitchExemption(__int64 a1, __int64 a2)
{
  unsigned __int8 Category; // si
  unsigned __int8 v5; // al
  unsigned int v6; // r9d
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax

  Category = RmpActivityHostQueryCategory(*(_QWORD *)(a1 + 40));
  v5 = RmpActivityHostQueryCategory(*(_QWORD *)(a2 + 40));
  v6 = 1;
  if ( (Category & v5 & 1) != 0 )
  {
    result = RmpEmPriorityCompare(*(_DWORD *)(a1 + 48), *(_DWORD *)(a2 + 48));
    if ( (_DWORD)result )
      return result;
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 928LL);
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 928LL);
    if ( v8 > v9 )
      return v6;
    if ( v8 < v9 )
      return (unsigned int)-1;
  }
  else
  {
    if ( (v5 & 1) == 0 && (Category & 1) != 0 )
      return v6;
    if ( (v5 & 1) != 0 && (Category & 1) == 0 )
      return 0xFFFFFFFFLL;
  }
  return RmpPolicyCompareActivityHostsByPriorityAndCommit(a1, a2);
}
