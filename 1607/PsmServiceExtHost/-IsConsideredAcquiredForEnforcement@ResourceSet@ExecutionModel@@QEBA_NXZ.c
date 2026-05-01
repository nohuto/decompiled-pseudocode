/*
 * XREFs of ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x1800116D4
 * Callers:
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180014270 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     RmpActivityHostUpdateDigests @ 0x180014920 (RmpActivityHostUpdateDigests.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(ExecutionModel::ResourceSet *this)
{
  return *((_DWORD *)this + 338) == 2 || (*((_BYTE *)this + 1412) & 0x10) != 0;
}
