/*
 * XREFs of TpAllocIoCompletion @ 0x180079E60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TpBindFileToDirect @ 0x18007A054 (TpBindFileToDirect.c)
 *     TppCleanupGroupAddMember @ 0x18007A214 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __cdecl TpAllocIoCompletion(
        PTP_IO *IoReturn,
        HANDLE File,
        PTP_IO_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  PTP_IO *v8; // r13
  unsigned int Flags; // edi
  char *Heap; // rax
  char *v11; // rbx
  NTSTATUS v12; // edi
  __int64 v13; // rcx
  char *v14; // r14
  _DWORD *v15; // r15
  int v17; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  char *BaseAddress; // [rsp+70h] [rbp+8h]

  v8 = IoReturn;
  if ( CallbackEnviron )
    Flags = CallbackEnviron->u.Flags;
  else
    Flags = 0;
  if ( IoReturn
    && File
    && Callback
    && (Flags & 0xFFFFFFFC) == 0
    && (IoReturn = (PTP_IO *)NtCurrentPeb()->Ldr, !*((_BYTE *)IoReturn + 72)) )
  {
    *v8 = 0LL;
    Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8, 0x120uLL);
    v11 = Heap;
    BaseAddress = Heap;
    if ( Heap )
    {
      *((_QWORD *)Heap + 22) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(
              (__int64)Heap,
              (__int64)Context,
              (__int64)CallbackEnviron,
              Flags,
              (__int64)&TppIopCleanupGroupMemberVFuncs);
      v17 = v12;
      if ( v12 >= 0 )
      {
        *((_QWORD *)v11 + 10) = Callback;
        *((_QWORD *)v11 + 34) = File;
        *((_DWORD *)v11 + 70) = 0;
        v13 = *((_QWORD *)v11 + 18);
        *((_QWORD *)v11 + 32) = TppIopExecuteCallback;
        v14 = v11 + 268;
        v15 = v11 + 264;
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (_DWORD *)v11 + 66, (unsigned __int8 *)v11 + 268);
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *((_QWORD *)v11 + 29) = 0LL;
        *((_QWORD *)v11 + 31) = v11 + 240;
        *((_QWORD *)v11 + 30) = v11 + 240;
        *((_QWORD *)v11 + 25) = TppDirectTaskVFuncs;
        *((_DWORD *)v11 + 52) = *v15;
        v11[212] = *v14;
        v12 = TpBindFileToDirect(File, v11 + 200, *((_QWORD *)v11 + 18));
        v17 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v17 = 0;
          if ( CallbackEnviron )
            *((_QWORD *)v11 + 4) = CallbackEnviron->FinalizationCallback;
          if ( *((_QWORD *)v11 + 2) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy(v11);
      }
    }
    else
    {
      v12 = -1073741801;
      v17 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_23;
    if ( v11 )
    {
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
      v11 = 0LL;
      v12 = v17;
    }
    if ( v12 >= 0 )
LABEL_23:
      *v8 = (PTP_IO)v11;
    return v12;
  }
  else
  {
    TppRaiseInvalidParameter(IoReturn);
    return -1073741811;
  }
}
