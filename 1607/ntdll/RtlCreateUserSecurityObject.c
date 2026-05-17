/*
 * XREFs of RtlCreateUserSecurityObject @ 0x1800D48F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlNewSecurityObject @ 0x1800870D0 (RtlNewSecurityObject.c)
 *     RtlCreateAndSetSD @ 0x18008C800 (RtlCreateAndSetSD.c)
 */

__int64 __fastcall RtlCreateUserSecurityObject(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  void *ProcessHeap; // rdi
  __int64 result; // rax
  unsigned int v9; // ebx
  _BYTE *v10; // [rsp+30h] [rbp-18h] BYREF

  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  result = RtlCreateAndSetSD(a1, a2, a3, a4, &v10);
  if ( (int)result >= 0 )
  {
    v9 = RtlNewSecurityObject(0LL, v10, a7, a5, (void *)0xFFFFFFFFFFFFFFFCLL, a6);
    RtlFreeHeap((__int64)ProcessHeap, 0, (unsigned __int64)v10);
    return v9;
  }
  return result;
}
