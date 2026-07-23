/*
 * XREFs of TpAllocWork @ 0x18003DBB0
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18007B59C (LdrpEnableParallelLoading.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppWorkInitialize @ 0x18003DDB8 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18007D9B4 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocWork(
        PTP_WORK *WorkReturn,
        PTP_WORK_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r12d
  PTP_WORK *v7; // r14
  unsigned int Flags; // edi
  _TP_WORK *Heap; // rax
  _TP_WORK *v10; // rbx
  NTSTATUS v11; // edi
  int v13; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  _TP_WORK *BaseAddress; // [rsp+88h] [rbp+20h]

  v5 = (int)Context;
  v7 = WorkReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( !WorkReturn
    || !Callback
    || (Flags & 0xFFFFFFFC) != 0
    || (WorkReturn = (PTP_WORK *)NtCurrentPeb()->Ldr, *((_BYTE *)WorkReturn + 72)) )
  {
    TppRaiseInvalidParameter(WorkReturn, Callback, Context);
    return -1073741811;
  }
  else
  {
    *v7 = 0LL;
    Heap = (_TP_WORK *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8, 0xE8uLL);
    v10 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 21) = retaddr;
      v11 = TppWorkInitialize(
              (_DWORD)Heap,
              v5,
              (_DWORD)CallbackEnviron,
              Flags,
              (__int64)&TppWorkpCleanupGroupMemberVFuncs,
              (__int64)&TppWorkpTaskVFuncs);
      v13 = v11;
      if ( v11 >= 0 )
      {
        *((_QWORD *)v10 + 10) = Callback;
        v11 = 0;
        v13 = 0;
        if ( CallbackEnviron )
          *((_QWORD *)v10 + 4) = CallbackEnviron->FinalizationCallback;
        if ( *((_QWORD *)v10 + 2) )
          TppCleanupGroupAddMember(v10);
      }
    }
    else
    {
      v11 = -1073741801;
      v13 = -1073741801;
    }
    if ( v11 >= 0 )
      goto LABEL_15;
    if ( v10 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
      v10 = 0LL;
      v11 = v13;
    }
    if ( v11 >= 0 )
LABEL_15:
      *v7 = v10;
    return v11;
  }
}
