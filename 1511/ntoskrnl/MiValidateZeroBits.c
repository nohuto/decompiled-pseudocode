/*
 * XREFs of MiValidateZeroBits @ 0x14062379C
 * Callers:
 *     NtCreateEnclave @ 0x14062A184 (NtCreateEnclave.c)
 * Callees:
 *     RtlFindMostSignificantBit @ 0x1400D0454 (RtlFindMostSignificantBit.c)
 */

__int64 __fastcall MiValidateZeroBits(ULONGLONG *a1)
{
  ULONGLONG v1; // rax

  v1 = *a1;
  if ( *a1 && (v1 < 0x20 ? (*a1 = v1 + 32) : (*a1 = 63 - RtlFindMostSignificantBit(*a1)), *a1 > 0x35) )
    return 3221225485LL;
  else
    return 0LL;
}
