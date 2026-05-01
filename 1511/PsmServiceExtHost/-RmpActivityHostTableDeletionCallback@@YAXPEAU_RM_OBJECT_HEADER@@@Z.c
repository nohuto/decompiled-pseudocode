/*
 * XREFs of ?RmpActivityHostTableDeletionCallback@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180040AA0
 * Callers:
 *     RmpObjectTableDestroy @ 0x180045E30 (RmpObjectTableDestroy.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpActivityHostTableDeletionCallback(struct _RM_OBJECT_HEADER *a1)
{
  *((_QWORD *)a1 + 94) = 0LL;
  *((_QWORD *)a1 + 100) = 0LL;
  RmpActivityHostCleanupAllState(a1);
}
