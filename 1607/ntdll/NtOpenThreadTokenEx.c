/*
 * XREFs of NtOpenThreadTokenEx @ 0x1800A6A00
 * Callers:
 *     RtlCheckTokenCapability @ 0x18000DDE0 (RtlCheckTokenCapability.c)
 *     RtlCheckTokenMembershipEx @ 0x180011030 (RtlCheckTokenMembershipEx.c)
 *     RtlpOpenThreadToken @ 0x18007D554 (RtlpOpenThreadToken.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenThreadTokenEx(
        HANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        BOOLEAN OpenAsSelf,
        ULONG HandleAttributes,
        PHANDLE TokenHandle)
{
  NTSTATUS result; // eax

  result = 47;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
