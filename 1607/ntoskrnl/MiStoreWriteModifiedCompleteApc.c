/*
 * XREFs of MiStoreWriteModifiedCompleteApc @ 0x1401246C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall MiStoreWriteModifiedCompleteApc(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  return MiWriteComplete(*a4, (int *)(*a4 + 16), 0);
}
