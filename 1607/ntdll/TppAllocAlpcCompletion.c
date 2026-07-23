/*
 * XREFs of TppAllocAlpcCompletion @ 0x180065604
 * Callers:
 *     TpAllocAlpcCompletion @ 0x180065480 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x1800655E0 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003D2F8 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1CC (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TppCleanupGroupAddMember @ 0x18007A214 (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x1800A7530 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  int v13; // ebx
  _PEB_LDR_DATA *v14; // rcx
  _BYTE *v15; // rbx
  _DWORD *v16; // r15
  __int64 v17; // r15
  int v19; // [rsp+30h] [rbp-48h]
  _QWORD PortInformation[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  _QWORD *BaseAddress; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x128uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[31] = retaddr;
    v12 = Heap + 9;
    v13 = TppCleanupGroupMemberInitialize((__int64)(Heap + 9), a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v19 = v13;
    if ( v13 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 72) &= ~1u;
      *((_DWORD *)v11 + 72) |= a6 != 0;
      v11[34] = a2;
      v14 = (_PEB_LDR_DATA *)v11[27];
      v11[7] = TppAlpcpExecuteCallback;
      v15 = (char *)v11 + 68;
      v16 = v11 + 8;
      if ( v14 )
      {
        TppGetCurrentThreadNumaNode((__int64)v14, (_DWORD *)v11 + 16, (unsigned __int8 *)v11 + 68);
      }
      else
      {
        *v16 = 0;
        *v15 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v16;
      *((_BYTE *)v11 + 12) = *v15;
      v17 = v11[27];
      if ( v17 )
      {
        v14 = NtCurrentPeb()->Ldr;
        if ( !v14->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v17 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v13 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v13 >= 0 )
          {
            TpAdjustBindingCount(v17, 1u);
            v13 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter(v14);
      v13 = -1073741811;
LABEL_16:
      v19 = v13;
      if ( v13 >= 0 )
      {
        v13 = 0;
        v19 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12);
      }
      if ( v13 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v13 = -1073741801;
    v19 = -1073741801;
  }
  if ( v13 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v13 = v19;
  }
  if ( v13 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v13;
}
