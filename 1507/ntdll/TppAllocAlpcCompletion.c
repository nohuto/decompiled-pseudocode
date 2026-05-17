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

__int64 __fastcall TppAllocAlpcCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, char *a4, __int64 a5, char a6)
{
  _PEB_LDR_DATA *v8; // r13
  unsigned int v9; // ebx
  __int64 Heap; // rax
  unsigned __int64 v11; // rdi
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // ebx
  __int64 v15; // r8
  _PEB_LDR_DATA *v16; // rcx
  _BYTE *v17; // rbx
  _DWORD *v18; // r15
  __int64 v19; // r15
  char *v20; // rdx
  volatile signed __int32 *v21; // r8
  __int64 v22; // r9
  int v24; // [rsp+30h] [rbp-48h]
  _QWORD v25[3]; // [rsp+38h] [rbp-40h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int64 v27; // [rsp+80h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( !Ldr || !a3 || !a2 || (v9 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  *(_QWORD *)&v8->Length = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x80000) | 8u, 288LL);
  v11 = Heap;
  v27 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 240) = retaddr;
    v12 = (_QWORD *)(Heap + 72);
    v14 = TppCleanupGroupMemberInitialize(Heap + 72, a4, a5, v9, (__int64)TppAlpcpCleanupGroupMemberVFuncs);
    v24 = v14;
    if ( v14 >= 0 )
    {
      *(_QWORD *)(v11 + 152) = a3;
      *(_DWORD *)(v11 + 280) &= ~1u;
      *(_DWORD *)(v11 + 280) |= a6 != 0;
      *(_QWORD *)(v11 + 264) = a2;
      v16 = *(_PEB_LDR_DATA **)(v11 + 208);
      *(_QWORD *)(v11 + 56) = TppAlpcpExecuteCallback;
      v17 = (_BYTE *)(v11 + 68);
      v18 = (_DWORD *)(v11 + 64);
      if ( v16 )
      {
        TppGetCurrentThreadNumaNode((__int64)v16, (_DWORD *)(v11 + 64), (unsigned __int8 *)(v11 + 68));
      }
      else
      {
        *v18 = 0;
        *v17 = 0;
      }
      *(_QWORD *)(v11 + 32) = 0LL;
      *(_QWORD *)(v11 + 48) = v11 + 40;
      *(_QWORD *)(v11 + 40) = v11 + 40;
      *(_QWORD *)v11 = TppDirectTaskVFuncs;
      *(_DWORD *)(v11 + 8) = *v18;
      *(_BYTE *)(v11 + 12) = *v17;
      v19 = *(_QWORD *)(v11 + 208);
      if ( v19 )
      {
        v16 = NtCurrentPeb()->Ldr;
        if ( !v16->ShutdownInProgress )
        {
          v25[1] = *(_QWORD *)(v19 + 64);
          v11 = v27;
          v25[0] = v27;
          v14 = NtAlpcSetInformation(a2, 2LL, v25);
          if ( v14 >= 0 )
          {
            TpAdjustBindingCount(v19, 1u);
            v14 = 0;
          }
          goto LABEL_16;
        }
        v11 = v27;
      }
      TppRaiseInvalidParameter(v16, v13, v15);
      v14 = -1073741811;
LABEL_16:
      v24 = v14;
      if ( v14 >= 0 )
      {
        v14 = 0;
        v24 = 0;
        if ( a5 )
          v12[4] = *(_QWORD *)(a5 + 48);
        if ( v12[2] )
          TppCleanupGroupAddMember(v12);
      }
      if ( v14 < 0 )
        TppCleanupGroupMemberDestroy(v12, v20, v21, v22);
    }
  }
  else
  {
    v14 = -1073741801;
    v24 = -1073741801;
  }
  if ( v14 >= 0 )
    goto LABEL_30;
  if ( v11 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v27);
    v11 = 0LL;
    v14 = v24;
  }
  if ( v14 >= 0 )
LABEL_30:
    *(_QWORD *)&v8->Length = v11;
  return (unsigned int)v14;
}
