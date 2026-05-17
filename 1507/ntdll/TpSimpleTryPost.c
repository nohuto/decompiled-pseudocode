/*
 * XREFs of TpSimpleTryPost @ 0x18007D880
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003D810 (TppCleanupGroupMemberDestroy.c)
 *     TppWorkInitialize @ 0x18003DDB8 (TppWorkInitialize.c)
 *     TppWorkPost @ 0x18003EC38 (TppWorkPost.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     TppCleanupGroupAddMember @ 0x18007D9B4 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x1800F5C58 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpSimpleTryPost(_PEB_LDR_DATA *Ldr, __int64 a2, __int64 a3)
{
  int v4; // r15d
  _PEB_LDR_DATA *v5; // r14
  int v6; // edi
  __int64 Heap; // rax
  _QWORD *v8; // rbx
  int v9; // edi
  int v11; // [rsp+34h] [rbp-24h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  unsigned __int64 v13; // [rsp+70h] [rbp+18h]

  v4 = a2;
  v5 = Ldr;
  if ( a3 )
    v6 = *(_DWORD *)(a3 + 56);
  else
    v6 = 0;
  if ( !Ldr || (v6 & 0xFFFFFFFC) != 0 || (Ldr = NtCurrentPeb()->Ldr, Ldr->ShutdownInProgress) )
  {
    TppRaiseInvalidParameter(Ldr, a2, a3);
    return 3221225485LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x200000) | 8u, 232LL);
    v8 = (_QWORD *)Heap;
    v13 = Heap;
    if ( Heap )
    {
      *(_QWORD *)(Heap + 168) = retaddr;
      v9 = TppWorkInitialize(
             Heap,
             v4,
             a3,
             v6,
             (__int64)TppSimplepCleanupGroupMemberVFuncs,
             (__int64)TppSimplepTaskVFuncs);
      v11 = v9;
      if ( v9 >= 0 )
      {
        v9 = 0;
        v11 = 0;
        v8[10] = v5;
        if ( a3 )
          v8[4] = *(_QWORD *)(a3 + 48);
        if ( v8[2] )
          TppCleanupGroupAddMember(v8);
      }
    }
    else
    {
      v9 = -1073741801;
      v11 = -1073741801;
    }
    if ( v9 >= 0 )
      goto LABEL_15;
    if ( v8 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, v13);
      v8 = 0LL;
      v9 = v11;
    }
    if ( v9 >= 0 )
LABEL_15:
      TppWorkPost((__int64)v8);
    return (unsigned int)v9;
  }
}
