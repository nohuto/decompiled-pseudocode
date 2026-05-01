/*
 * XREFs of ?RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x18003B6D0
 * Callers:
 *     RmpObjectTableDestroy @ 0x180041200 (RmpObjectTableDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostTableDeletionCallback(struct _RM_OBJECT_HEADER *a1)
{
  *((_QWORD *)a1 + 93) = 0LL;
  RmpActivityHostCleanupAllState(a1);
}
