/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800CC600
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlNewSecurityObject @ 0x18005D1A0 (RtlNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x180065340 (RtlCreateAndSetSD.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int64 a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10[3]; // [rsp+30h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, v10);
  if ( (int)result >= 0 )
  {
    v9 = RtlNewSecurityObject(0, v10[0], a7, a5, -4LL, a6);
    RtlFreeHeap((__int64)ProcessHeap, 0, v10[0]);
    return v9;
  }
  return result;
}
