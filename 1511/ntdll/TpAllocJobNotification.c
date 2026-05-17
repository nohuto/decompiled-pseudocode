/*
 * XREFs of TpAllocJobNotification @ 0x180081660
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x180077A64 (TppCleanupGroupAddMember.c)
 *     ZwSetInformationJobObject @ 0x1800A8070 (ZwSetInformationJobObject.c)
 *     memset @ 0x1800AB900 (memset.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocJobNotification(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // ebp
  _QWORD *p_Length; // r12
  void *Heap; // rax
  unsigned __int64 v11; // rbx
  int v12; // ebp
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  __int64 v16; // r14
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD v21[2]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v5 = 0;
  p_Length = &Ldr->Length;
  if ( a5 )
    v5 = *(_DWORD *)(a5 + 56);
  if ( !Ldr || !a3 || !a2 || (v5 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *p_Length = 0LL;
  Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, 288LL);
  v11 = (unsigned __int64)Heap;
  if ( !Heap )
    return 3221225495LL;
  memset(Heap, 0, 0x120uLL);
  *(_QWORD *)(v11 + 240) = retaddr;
  v12 = TppCleanupGroupMemberInitialize(v11 + 72, a4, a5, v5, (__int64)TppJobpCleanupGroupMemberVFuncs);
  if ( v12 < 0 )
  {
LABEL_21:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, v11);
    return (unsigned int)v12;
  }
  v13 = *(_QWORD *)(v11 + 208);
  *(_QWORD *)(v11 + 152) = a3;
  v14 = (_BYTE *)(v11 + 68);
  *(_QWORD *)(v11 + 264) = a2;
  v15 = (_DWORD *)(v11 + 64);
  *(_QWORD *)(v11 + 56) = TppJobpExecuteCallback;
  if ( v13 )
  {
    TppGetCurrentThreadNumaNode(v13, (_DWORD *)(v11 + 64), (unsigned __int8 *)(v11 + 68));
  }
  else
  {
    *v15 = 0;
    *v14 = 0;
  }
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 48) = v11 + 40;
  *(_QWORD *)(v11 + 40) = v11 + 40;
  v21[0] = v11;
  *(_QWORD *)v11 = TppDirectTaskVFuncs;
  *(_DWORD *)(v11 + 8) = *v15;
  *(_BYTE *)(v11 + 12) = *v14;
  v16 = *(_QWORD *)(v11 + 208);
  v21[1] = *(_QWORD *)(v16 + 64);
  v12 = ZwSetInformationJobObject(a2, 7LL, v21, 16LL);
  if ( v12 < 0 )
  {
    TppCleanupGroupMemberDestroy((_QWORD *)(v11 + 72));
    goto LABEL_21;
  }
  TpAdjustBindingCount(v16, 1u);
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 72));
  *(_QWORD *)(v11 + 280) = 0LL;
  if ( a5 )
    *(_QWORD *)(v11 + 104) = *(_QWORD *)(a5 + 48);
  if ( *(_QWORD *)(v11 + 88) )
    TppCleanupGroupAddMember((_QWORD *)(v11 + 72), v17, v18, v19);
  *p_Length = v11;
  return 0LL;
}
