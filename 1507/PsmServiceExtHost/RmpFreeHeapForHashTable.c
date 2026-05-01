/*
 * XREFs of RmpFreeHeapForHashTable @ 0x180039AC0
 * Callers:
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006AE0 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800087C0 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     RmpObjectTableInitialize @ 0x18001A190 (RmpObjectTableInitialize.c)
 *     RmpActivityHostInitializeModule @ 0x18001A2B0 (RmpActivityHostInitializeModule.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LPVOID __fastcall RmpFreeHeapForHashTable(PVOID P)
{
  return RmpFreeHeap(P);
}
