/*
 * XREFs of CmpLockHiveFlusherShared @ 0x14065D9B4
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall CmpLockHiveFlusherShared(__int64 a1)
{
  return ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 2848), 1u);
}
