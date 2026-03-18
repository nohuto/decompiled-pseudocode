/*
 * XREFs of NtCreateDirectoryObjectEx @ 0x1404C40BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __fastcall NtCreateDirectoryObjectEx(HANDLE *a1, ACCESS_MASK a2, int a3, void *a4, char a5)
{
  return ObpCreateDirectoryObject(a1, a2, a3, a4, a5);
}
