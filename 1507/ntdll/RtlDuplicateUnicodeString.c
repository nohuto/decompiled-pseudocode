/*
 * XREFs of RtlDuplicateUnicodeString @ 0x18006BC20
 * Callers:
 *     RtlpTpIoDllProcessUnloads @ 0x1800F6084 (RtlpTpIoDllProcessUnloads.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x180024358 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlValidateUnicodeString @ 0x18006BD70 (RtlValidateUnicodeString.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

NTSTATUS __cdecl RtlDuplicateUnicodeString(ULONG Flags, PUNICODE_STRING StringIn, PUNICODE_STRING StringOut)
{
  char v5; // r15
  unsigned __int16 Length; // di
  unsigned __int16 *v7; // rsi
  NTSTATUS result; // eax
  unsigned __int16 v9; // bx
  unsigned __int16 *StringRoutine; // rax

  v5 = Flags;
  Length = 0;
  v7 = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 || !StringOut || (Flags & 3) == 2 )
    return -1073741811;
  result = RtlValidateUnicodeString(0, StringIn);
  if ( result < 0 )
    return result;
  if ( StringIn )
    Length = StringIn->Length;
  if ( (v5 & 1) != 0 && Length == 0xFFFE )
    return -1073741562;
  if ( (v5 & 1) != 0 )
    v9 = Length + 2;
  else
    v9 = Length;
  if ( (v5 & 2) == 0 && !Length )
    v9 = 0;
  if ( !v9 )
  {
LABEL_19:
    StringOut->MaximumLength = v9;
    StringOut->Length = Length;
    StringOut->Buffer = v7;
    return 0;
  }
  StringRoutine = (unsigned __int16 *)NtdllpAllocateStringRoutine(v9);
  v7 = StringRoutine;
  if ( StringRoutine )
  {
    if ( Length )
      memmove(StringRoutine, StringIn->Buffer, Length);
    if ( (v5 & 1) != 0 )
      v7[(unsigned __int64)Length >> 1] = 0;
    goto LABEL_19;
  }
  return -1073741801;
}
