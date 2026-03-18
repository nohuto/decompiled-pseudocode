/*
 * XREFs of PspGetProcessInJobHierarchyCallback @ 0x1406420D4
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetProcessInJobHierarchyCallback(void *a1, _QWORD *a2)
{
  ObfReferenceObjectWithTag(a1, 0x624A7350u);
  *a2 = a1;
  return 3221226048LL;
}
