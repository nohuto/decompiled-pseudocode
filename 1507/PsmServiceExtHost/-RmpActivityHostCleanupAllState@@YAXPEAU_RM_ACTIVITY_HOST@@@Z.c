/*
 * XREFs of ?RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18003B640
 * Callers:
 *     ?RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18003B6D0 (-RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D044 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupAllState(struct _RM_ACTIVITY_HOST *a1)
{
  RmpActivityHostCleanupTypeSpecificState(a1);
  RmpActivityHostCleanupCommonState(a1);
}
