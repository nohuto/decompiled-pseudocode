/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800D16A8
 * Callers:
 *     LdrpInitializationFailure @ 0x1800D22F0 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1800D2D24 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x180008A70 (EtwEventWriteNoRegistration.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void *__fastcall LdrpLogFatalLdrEtwEvent(const void **a1, __int128 *a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rbx
  void *result; // rax
  int v7; // eax
  unsigned __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  int v9; // [rsp+28h] [rbp-30h]
  int v10; // [rsp+2Ch] [rbp-2Ch]

  v3 = *(unsigned __int16 *)a1;
  if ( v3 + 2 > *((unsigned __int16 *)a1 + 1) || (v5 = (unsigned __int64)a1[1], *(_WORD *)(v5 + 2 * (v3 >> 1))) )
  {
    result = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v5 = (unsigned __int64)result;
    if ( !result )
      return result;
    memmove(result, a1[1], *(unsigned __int16 *)a1);
    *(_WORD *)(v5 + 2 * ((unsigned __int64)*(unsigned __int16 *)a1 >> 1)) = 0;
  }
  v7 = *(unsigned __int16 *)a1 + 2;
  v8 = v5;
  v9 = v7;
  v10 = 0;
  result = (void *)EtwEventWriteNoRegistration((__int64)&UserLoaderGuid, a2, 1, (__int64)&v8);
  if ( (const void *)v5 != a1[1] )
    return (void *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return result;
}
