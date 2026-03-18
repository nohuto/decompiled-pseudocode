/*
 * XREFs of ZwFilterBootOption @ 0x14015B760
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1401C75E4 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
