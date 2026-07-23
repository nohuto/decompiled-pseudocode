/*
 * XREFs of RtlpUmsPrimaryContextWrap @ 0x1800AAC70
 * Callers:
 *     RtlEnterUmsSchedulingMode @ 0x1800EC830 (RtlEnterUmsSchedulingMode.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180085D10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlpUmsPrimaryContextWrap(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _BYTE v4[48]; // [rsp+0h] [rbp-138h] BYREF

  v2 = (char *)NtCurrentTeb()->TlsSlots[4] + 16;
  v2[26] = a1;
  v2[20] = v4;
  v2[19] = v4;
  v2[31] = &loc_1800AAD13;
  return (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64))NtCurrentTeb()->TlsSlots[4] + 28))(0LL, 0LL, a2);
}
