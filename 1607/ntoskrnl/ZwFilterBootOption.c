/*
 * XREFs of ZwFilterBootOption @ 0x14015BCD0
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x1401C7484 (IopInitializeInMemoryDumpData.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwFilterBootOption(
        FILTER_BOOT_OPTION_OPERATION FilterOperation,
        ULONG ObjectType,
        ULONG ElementType,
        PVOID Data,
        ULONG DataSize)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&FilterOperation);
}
