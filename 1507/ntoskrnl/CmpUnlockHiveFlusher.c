/*
 * XREFs of CmpUnlockHiveFlusher @ 0x14065DB04
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpUnlockHiveFlusher(__int64 a1)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 2848));
}
