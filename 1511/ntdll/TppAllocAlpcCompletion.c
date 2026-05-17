/*
 * XREFs of TppAllocAlpcCompletion @ 0x18006BF34
 * Callers:
 *     TpAllocAlpcCompletion @ 0x18006BDB0 (TpAllocAlpcCompletion.c)
 *     TpAllocAlpcCompletionEx @ 0x18006BF10 (TpAllocAlpcCompletionEx.c)
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18000CFA0 (TpAdjustBindingCount.c)
 *     TppGetCurrentThreadNumaNode @ 0x18000D404 (TppGetCurrentThreadNumaNode.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     TppCleanupGroupAddMember @ 0x180077A64 (TppCleanupGroupAddMember.c)
 *     NtAlpcSetInformation @ 0x1800A61D0 (NtAlpcSetInformation.c)
 *     TppRaiseInvalidParameter @ 0x1800F5658 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  _PEB_LDR_DATA *v17; // rcx
  _BYTE *v18; // rbx
  _DWORD *v19; // r15
  __int64 v20; // r15
  int v22; // [rsp+30h] [rbp-48h]
  _QWORD v23[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v25; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 288LL);
  v11 = Heap;
  v25 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 240) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v22 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 280) &= ~1u;
      *(_DWORD *)(v11 + 280) |= a6 != 0;
      *(_QWORD *)(v11 + 264) = a2;
      v17 = *(_PEB_LDR_DATA **)(v11 + 208);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      v18 = (_BYTE *)(v11 + 68);
      v19 = (_DWORD *)(v11 + 64);
      if ( v17 )
      {
        TppGetCurrentThreadNumaNode((__int64)v17, (_DWORD *)(v11 + 64), (unsigned __int8 *)(v11 + 68));
      }
      else
      {
        *v19 = 0;
        *v18 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = *v19;
      *(_BYTE *)(v11 + 12) = *v18;
      v20 = *(_QWORD *)(v11 + 208);
      if ( v20 )
      {
        v17 = NtCurrentPeb()->Ldr;
        if ( !v17->ShutdownInProgress )
        {
          v23[1] = *(_QWORD *)(v20 + 64);
          v11 = v25;
          v23[0] = v25;
          v14 = NtAlpcSetInformation(a2, 2LL, v23);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v20, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v25;
      }
      TppRaiseInvalidParameter(v17, v13, v15, v16);
      v14 = -1073741811;
LABEL_16:
      v22 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v22 = 0;
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
    v22 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v25);
    v11 = 0LL;
    v14 = v22;
  }
  if ( v14 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
