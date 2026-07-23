/*
 * XREFs of TppAllocAlpcCompletion @ 0x18007B264
 * Callers:
 *     TpAllocAlpcCompletion @ 0x18007A820 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x18007B040 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18003DB58 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18007D9B4 (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x180094190 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, void *a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  _QWORD *Heap; // rax
  _QWORD *v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  _PEB_LDR_DATA *v15; // rcx
  _BYTE *v16; // rbx
  _DWORD *v17; // r15
  __int64 v18; // r15
  int v20; // [rsp+30h] [rbp-48h]
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
    TppRaiseInvalidParameter(Ldr, a2);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8, 0x120uLL);
  v11 = Heap;
  BaseAddress = Heap;
  if ( Heap )
  {
    Heap[30] = retaddr;
    v12 = Heap + 9;
    v14 = TppCleanupGroupMemberInitialize((__int64)(Heap + 9), a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v20 = v14;
    if ( v14 >= 0 )
    {
      v11[19] = a3;
      *((_DWORD *)v11 + 70) &= ~1u;
      *((_DWORD *)v11 + 70) |= a6 != 0;
      v11[33] = a2;
      v15 = (_PEB_LDR_DATA *)v11[26];
      v11[7] = TppAlpcpExecuteCallback;
      v16 = (char *)v11 + 68;
      v17 = v11 + 8;
      if ( v15 )
      {
        TppGetCurrentThreadNumaNode((__int64)v15, (_DWORD *)v11 + 16, (unsigned __int8 *)v11 + 68);
      }
      else
      {
        *v17 = 0;
        *v16 = 0;
      }
      v11[4] = 0LL;
      v11[6] = v11 + 5;
      v11[5] = v11 + 5;
      *v11 = TppDirectTaskVFuncs;
      *((_DWORD *)v11 + 2) = *v17;
      *((_BYTE *)v11 + 12) = *v16;
      v18 = v11[26];
      if ( v18 )
      {
        v15 = NtCurrentPeb()->Ldr;
        if ( !v15->ShutdownInProgress )
        {
          PortInformation[1] = *(_QWORD *)(v18 + 64);
          v11 = BaseAddress;
          PortInformation[0] = BaseAddress;
          v14 = NtAlpcSetInformation(a2, AlpcAssociateCompletionPortInformation, PortInformation, 0x10u);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v18, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = BaseAddress;
      }
      TppRaiseInvalidParameter(v15, v13);
      v14 = -1073741811;
LABEL_16:
      v20 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v20 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12);
    }
  }
  else
  {
    v14 = -1073741801;
    v20 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, BaseAddress);
    v11 = 0LL;
    v14 = v20;
  }
  if ( v14 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
