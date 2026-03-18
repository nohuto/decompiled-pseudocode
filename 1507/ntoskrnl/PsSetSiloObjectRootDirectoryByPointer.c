/*
 * XREFs of PsSetSiloObjectRootDirectoryByPointer @ 0x1406C12E4
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 */

NTSTATUS __fastcall PsSetSiloObjectRootDirectoryByPointer(__int64 a1, void **a2)
{
  return ObSetSiloRootDirectoryByPointer(a1, *a2, KeGetCurrentThread()->PreviousMode);
}
