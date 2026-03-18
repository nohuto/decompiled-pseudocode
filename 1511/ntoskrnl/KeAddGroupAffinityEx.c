/*
 * XREFs of KeAddGroupAffinityEx @ 0x14009409C
 * Callers:
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeAddGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( *a1 <= a2 )
    *a1 = a2 + 1;
  result = a2;
  *(_QWORD *)&a1[4 * a2 + 4] |= a3;
  return result;
}
