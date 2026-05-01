/*
 * XREFs of ?GetEffectivePriority@ResourceSet@ExecutionModel@@QEBA?AW4Enum@Priority@2@_K@Z @ 0x1800283C0
 * Callers:
 *     RmpActivityHostQueryEffectivePriority @ 0x18002F2D0 (RmpActivityHostQueryEffectivePriority.c)
 *     ?Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPEAV12@@Z @ 0x180035F54 (-Revoke@ResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_ACTION@@W4_RM_REVOKE_REASON_INTERNAL@@_KPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExecutionModel::ResourceSet::GetEffectivePriority(__int64 a1, unsigned __int64 a2)
{
  if ( a2 > *(_QWORD *)(*(_QWORD *)(a1 + 1400) + 936LL) )
    return *(unsigned int *)(a1 + 1364);
  else
    return *(unsigned int *)(a1 + 1360);
}
