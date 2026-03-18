/*
 * XREFs of PsSetSiloObjectRootDirectoryByPointer @ 0x14063FCE8
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     ObSetSiloRootDirectoryByPointer @ 0x140630B4C (ObSetSiloRootDirectoryByPointer.c)
 */

NTSTATUS __fastcall PsSetSiloObjectRootDirectoryByPointer(__int64 a1, void **a2)
{
  return ObSetSiloRootDirectoryByPointer(a1, *a2, KeGetCurrentThread()->PreviousMode);
}
