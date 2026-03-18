/*
 * XREFs of KeQueryHeteroCpuPolicyThread @ 0x1401D2CF4
 * Callers:
 *     KeSetUserHeteroCpuPolicyThread @ 0x1401D2F5C (KeSetUserHeteroCpuPolicyThread.c)
 *     NtQueryInformationThread @ 0x140519650 (NtQueryInformationThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryHeteroCpuPolicyThread(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( !a2 )
    return *(unsigned __int8 *)(a1 + 125);
  result = *(_BYTE *)(a1 + 126) & 0x7F;
  if ( (_DWORD)result == 8 )
    return (unsigned int)KiDefaultHeteroCpuPolicy;
  return result;
}
