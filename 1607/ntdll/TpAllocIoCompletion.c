/*
 * XREFs of TpAllocIoCompletion @ 0x180079E70
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5F0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D83C (TppCleanupGroupMemberInitialize.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003E1DC (TppGetCurrentThreadNumaNode.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     TpBindFileToDirect @ 0x18007A064 (TpBindFileToDirect.c)
 *     TppCleanupGroupAddMember @ 0x18007A224 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x1800FE5C4 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpAllocIoCompletion(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  _PEB_LDR_DATA *v8; // r13
  unsigned int v9; // edi
  __int64 Heap; // rax
  __int64 v11; // rbx
  int v12; // edi
  __int64 v13; // rcx
  _BYTE *v14; // r14
  _DWORD *v15; // r15
  char *v16; // rdx
  volatile signed __int32 *v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int64 v22; // [rsp+70h] [rbp+8h]

  v8 = Ldr;
  if ( a5 )
    v9 = *(_DWORD *)(a5 + 56);
  else
    v9 = 0;
  if ( Ldr && a2 && a3 && (v9 & 0xFFFFFFFC) == 0 && (Ldr = NtCurrentPeb()->Ldr, !Ldr->ShutdownInProgress) )
  {
    *(_QWORD *)&v8->Length = 0LL;
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x40000) | 8u, 0x120uLL);
    v11 = Heap;
    v22 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 176) = retaddr;
      v12 = TppCleanupGroupMemberInitialize(Heap, a4, a5, v9, (__int64)TppIopCleanupGroupMemberVFuncs);
      v20 = v12;
      if ( v12 >= 0 )
      {
        *(_QWORD *)(v11 + 80) = a3;
        *(_QWORD *)(v11 + 272) = a2;
        *(_DWORD *)(v11 + 280) = 0;
        v13 = *(_QWORD *)(v11 + 144);
        *(_QWORD *)(v11 + 256) = TppIopExecuteCallback;
        v14 = (_BYTE *)(v11 + 268);
        v15 = (_DWORD *)(v11 + 264);
        if ( v13 )
        {
          TppGetCurrentThreadNumaNode(v13, (_DWORD *)(v11 + 264), (unsigned __int8 *)(v11 + 268));
        }
        else
        {
          *v15 = 0;
          *v14 = 0;
        }
        *(_QWORD *)(v11 + 232) = 0LL;
        *(_QWORD *)(v11 + 248) = v11 + 240;
        *(_QWORD *)(v11 + 240) = v11 + 240;
        *(_QWORD *)(v11 + 200) = TppDirectTaskVFuncs;
        *(_DWORD *)(v11 + 208) = *v15;
        *(_BYTE *)(v11 + 212) = *v14;
        v12 = TpBindFileToDirect(a2, v11 + 200, *(_QWORD *)(v11 + 144));
        v20 = v12;
        if ( v12 >= 0 )
        {
          v12 = 0;
          v20 = 0;
          if ( a5 )
            *(_QWORD *)(v11 + 32) = *(_QWORD *)(a5 + 48);
          if ( *(_QWORD *)(v11 + 16) )
            TppCleanupGroupAddMember(v11);
        }
        if ( v12 < 0 )
          TppCleanupGroupMemberDestroy((_QWORD *)v11, v16, v17, v18);
      }
    }
    else
    {
      v12 = -1073741801;
      v20 = -1073741801;
    }
    if ( v12 >= 0 )
      goto LABEL_23;
    if ( v11 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, v22);
      v11 = 0LL;
      v12 = v20;
    }
    if ( v12 >= 0 )
LABEL_23:
      *(_QWORD *)&v8->Length = v11;
    return (unsigned int)v12;
  }
  else
  {
    TppRaiseInvalidParameter(Ldr, a2, a3, a4);
    return 3221225485LL;
  }
}
