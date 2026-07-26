/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C0015EC0
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C01024DC (ndisInitializePeriodicReceives.c)
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C0015DA4 (ndisPplCreatePool.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  __int64 v2; // r9
  __int64 v4; // rcx
  char *v5; // rbx
  unsigned __int8 fAllocateNetBuffer; // r12
  unsigned __int16 v8; // si
  unsigned __int16 ContextSize; // r14
  SIZE_T DataSize; // r15
  unsigned __int16 v11; // si
  char *Pool; // rax
  KIRQL v13; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v15; // rcx
  int v17; // eax
  unsigned __int16 v18; // dx
  _BYTE v19[16]; // [rsp+80h] [rbp+80h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+B8h]

  v4 = 0LL;
  *(_QWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL) = retaddr;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_q(14LL, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
    v8 = 368;
    ContextSize = Parameters->ContextSize;
    DataSize = Parameters->DataSize;
    if ( fAllocateNetBuffer )
      v8 = 544;
    if ( ContextSize )
    {
      if ( (ContextSize & 7) != 0 )
        goto LABEL_18;
      v8 += ContextSize + 16;
    }
    if ( !(_DWORD)DataSize
      || fAllocateNetBuffer
      && (v17 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize),
          v4 = (v17 + 7) & 0xFFFFFFF8,
          v18 = ((v17 + 7) & 0xFFF8) + DataSize,
          v18 >= (unsigned int)v4)
      && (v8 += v18, v8 >= v18) )
    {
      v11 = (v8 + 7) & 0xFFF8;
      Pool = ndisPplCreatePool(v4, v11, Parameters->PoolTag, v2, (FREE_FUNCTION_EX *)ndisFreeNblToNPagedPool);
      v5 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = 269;
        *((_WORD *)Pool + 1) = 384;
        *((_QWORD *)Pool + 5) = NdisHandle;
        *((_DWORD *)Pool + 14) = Parameters->PoolTag;
        Pool[88] = Parameters->ProtocolId;
        if ( fAllocateNetBuffer )
          *((_DWORD *)Pool + 15) |= 1u;
        if ( ContextSize )
        {
          *((_DWORD *)Pool + 15) |= 2u;
          *((_WORD *)Pool + 17) = ContextSize;
        }
        if ( (_DWORD)DataSize )
        {
          *((_DWORD *)Pool + 15) |= 4u;
          *((_DWORD *)Pool + 23) = DataSize;
          *((_DWORD *)Pool + 24) = (MmSizeOfMdl((PVOID)0xFFF, DataSize) + 7) & 0xFFFFFFF8;
        }
        *((_WORD *)v5 + 16) = v11;
        KeInitializeSpinLock((PKSPIN_LOCK)v5 + 8);
        KeInitializeSpinLock((PKSPIN_LOCK)v5 + 1);
        *((_QWORD *)v5 + 3) = v5 + 16;
        *((_QWORD *)v5 + 2) = v5 + 16;
        v13 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
        Flink = ndisGlobalNetBufferListPoolList.Flink;
        v15 = (_LIST_ENTRY *)(v5 + 72);
        if ( ndisGlobalNetBufferListPoolList.Flink->Blink != &ndisGlobalNetBufferListPoolList )
          __fastfail(3u);
        v15->Flink = ndisGlobalNetBufferListPoolList.Flink;
        *((_QWORD *)v5 + 10) = &ndisGlobalNetBufferListPoolList;
        Flink->Blink = v15;
        ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(v5 + 72);
        KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v13);
        *((_QWORD *)v5 + 6) = *(_QWORD *)((unsigned __int64)v19 & 0xFFFFFFFFFFFFFFC0uLL);
      }
    }
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_qq(15LL, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, NdisHandle, v5);
  return v5;
}
