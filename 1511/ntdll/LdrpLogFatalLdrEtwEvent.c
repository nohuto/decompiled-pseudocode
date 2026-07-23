/*
 * XREFs of LdrpLogFatalLdrEtwEvent @ 0x1800CA204
 * Callers:
 *     LdrpInitializationFailure @ 0x1800CAD44 (LdrpInitializationFailure.c)
 *     LdrpGenericExceptionFilter @ 0x1800CB5E8 (LdrpGenericExceptionFilter.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     EtwEventWriteNoRegistration @ 0x180084090 (EtwEventWriteNoRegistration.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

int __fastcall LdrpLogFatalLdrEtwEvent(const void **a1, const EVENT_DESCRIPTOR *a2)
{
  unsigned __int64 v3; // rcx
  _WORD *v5; // rbx
  _WORD *Heap; // rax
  unsigned int v7; // eax
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(unsigned __int16 *)a1;
  if ( v3 + 2 > *((unsigned __int16 *)a1 + 1) || (v5 = a1[1], v5[v3 >> 1]) )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v3 + 2);
    v5 = Heap;
    if ( !Heap )
      return (int)Heap;
    memmove(Heap, a1[1], *(unsigned __int16 *)a1);
    v5[(unsigned __int64)*(unsigned __int16 *)a1 >> 1] = 0;
  }
  v7 = *(unsigned __int16 *)a1 + 2;
  UserData.Ptr = (unsigned __int64)v5;
  UserData.Size = v7;
  UserData.Reserved = 0;
  LODWORD(Heap) = EtwEventWriteNoRegistration(&UserLoaderGuid, a2, 1u, &UserData);
  if ( v5 != a1[1] )
    LODWORD(Heap) = RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (int)Heap;
}
