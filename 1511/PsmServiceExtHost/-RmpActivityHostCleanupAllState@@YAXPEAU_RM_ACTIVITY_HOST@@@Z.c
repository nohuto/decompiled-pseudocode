/*
 * XREFs of ?RmpActivityHostCleanupAllState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180040A10
 * Callers:
 *     ?RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180040AA0 (-RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009380 (-RmpActivityHostCleanupTypeSpecificState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall RmpActivityHostCleanupAllState(struct _RM_ACTIVITY_HOST *a1)
{
  RmpActivityHostCleanupTypeSpecificState(a1);
  RmpActivityHostCleanupCommonState(a1);
}
