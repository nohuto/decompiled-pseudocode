/*
 * XREFs of RtlpTpIoAlloc @ 0x18007E7CC
 * Callers:
 *     RtlpTpIoLookup @ 0x18007E680 (RtlpTpIoLookup.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     TppGetCurrentThreadNumaNode @ 0x18003DE48 (TppGetCurrentThreadNumaNode.c)
 *     TppPoolpReferenceGlobalPool @ 0x18003E8AC (TppPoolpReferenceGlobalPool.c)
 *     TpBindFileToDirect @ 0x18007D710 (TpBindFileToDirect.c)
 *     TpDereferenceGlobalPool @ 0x18007D790 (TpDereferenceGlobalPool.c)
 */

__int64 __fastcall RtlpTpIoAlloc(unsigned __int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  unsigned __int64 Heap; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  _BYTE *v11; // rsi
  _DWORD *v12; // r14
  _PEB_LDR_DATA *v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-28h]
  _PEB_LDR_DATA *v16; // [rsp+68h] [rbp+20h] BYREF

  v16 = 0LL;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 184LL);
  if ( !Heap )
  {
    v10 = -1073741801;
    goto LABEL_7;
  }
  v10 = TppPoolpReferenceGlobalPool(
          (volatile signed __int32 **)&TppPoolpGlobalPool,
          (char *)&TppPoolpGlobalPoolLock,
          (volatile signed __int32 **)&v16,
          v9);
  v15 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)Heap = a2;
    *(_QWORD *)(Heap + 64) = RtlpTpIoCallback;
    v11 = (_BYTE *)(Heap + 76);
    v12 = (_DWORD *)(Heap + 72);
    if ( v16 )
    {
      TppGetCurrentThreadNumaNode((__int64)v16, (_DWORD *)(Heap + 72), (unsigned __int8 *)(Heap + 76));
    }
    else
    {
      *v12 = 0;
      *v11 = 0;
    }
    *(_QWORD *)(Heap + 40) = 0LL;
    *(_QWORD *)(Heap + 56) = Heap + 48;
    *(_QWORD *)(Heap + 48) = Heap + 48;
    *(_QWORD *)(Heap + 8) = TppDirectTaskVFuncs;
    *(_DWORD *)(Heap + 16) = *v12;
    *(_BYTE *)(Heap + 20) = *v11;
    v13 = v16;
    *(_QWORD *)(Heap + 80) = v16;
    v10 = TpBindFileToDirect(a3, Heap + 8, v13);
    v15 = v10;
    if ( v10 >= 0 )
    {
      ++*(_DWORD *)(Heap + 88);
      *(_QWORD *)(Heap + 96) = Heap + 96;
      *(_QWORD *)(Heap + 104) = 0LL;
      *(_QWORD *)(Heap + 112) = 0LL;
      *a1 = Heap;
      v10 = 0;
LABEL_7:
      v15 = v10;
    }
  }
  if ( v10 < 0 )
  {
    if ( v16 )
      TpDereferenceGlobalPool((__int64)v16, v6, v8, v9);
    if ( Heap )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
      return v15;
    }
  }
  return (unsigned int)v10;
}
