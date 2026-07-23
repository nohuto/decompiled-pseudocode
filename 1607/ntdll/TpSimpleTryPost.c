/*
 * XREFs of TpSimpleTryPost @ 0x18007A0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkPost @ 0x18003CDE4 (TppWorkPost.c)
 *     TppWorkInitialize @ 0x18003D79C (TppWorkInitialize.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TppCleanupGroupAddMember @ 0x18007A214 (TppCleanupGroupAddMember.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpSimpleTryPost(PTP_SIMPLE_CALLBACK Callback, PVOID Context, PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v4; // r15d
  PTP_SIMPLE_CALLBACK v5; // r14
  unsigned int Flags; // edi
  _QWORD *Heap; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rbx
  NTSTATUS v12; // edi
  int v14; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  PVOID BaseAddress; // [rsp+70h] [rbp+18h]

  v4 = (int)Context;
  v5 = Callback;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (Callback = (PTP_SIMPLE_CALLBACK)NtCurrentPeb()->Ldr, *((_BYTE *)Callback + 72)) )
  {
    TppRaiseInvalidParameter(Callback);
    return -1073741811;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xF0uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      Heap[22] = retaddr;
      v12 = TppWorkInitialize(
              (__int64)Heap,
              v4,
              (int)CallbackEnviron,
              Flags,
              (__int64)TppSimplepCleanupGroupMemberVFuncs,
              (__int64)&TppSimplepTaskVFuncs);
      v14 = v12;
      if ( v12 >= 0 )
      {
        v12 = 0;
        v14 = 0;
        v11[10] = v5;
        if ( CallbackEnviron )
          v11[4] = CallbackEnviron->FinalizationCallback;
        if ( v11[2] )
          TppCleanupGroupAddMember(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v14 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_15;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v11 = 0LL;
      v12 = v14;
    }
    if ( v12 >= 0 )
LABEL_15:
      TppWorkPost((__int64)v11, v8, v9, v10);
    return v12;
  }
}
