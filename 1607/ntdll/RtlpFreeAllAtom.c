/*
 * XREFs of RtlpFreeAllAtom @ 0x180067ADC
 * Callers:
 *     RtlpDereferenceAtom @ 0x180067C98 (RtlpDereferenceAtom.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpFreeHandleForAtom @ 0x180067B5C (RtlpFreeHandleForAtom.c)
 *     RtlpHashStringToAtom @ 0x180068050 (RtlpHashStringToAtom.c)
 */

signed int __fastcall RtlpFreeAllAtom(char *a1, __int64 a2, __int64 a3)
{
  signed int result; // eax
  PVOID BaseAddress; // [rsp+50h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  BaseAddress = a1;
  result = RtlpHashStringToAtom(a2, a1 + 18, a3, &v6, 0LL, &v7, &BaseAddress);
  if ( result >= 0 && BaseAddress )
  {
    if ( v6 )
      *v6 = *(_QWORD *)BaseAddress;
    RtlpFreeHandleForAtom(a2);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  }
  return result;
}
