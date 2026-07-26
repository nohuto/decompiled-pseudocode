/*
 * XREFs of NdisAllocateNetBufferListPool @ 0x1C001E6D0
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 *     ndisInitializePeriodicReceives @ 0x1C00FE168 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C001E8F0 (ndisPplCreatePool.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferListPool(
        NDIS_HANDLE NdisHandle,
        PNET_BUFFER_LIST_POOL_PARAMETERS Parameters)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  unsigned __int8 fAllocateNetBuffer; // r12
  unsigned __int16 v7; // si
  unsigned __int16 ContextSize; // r14
  SIZE_T DataSize; // r15
  unsigned __int16 v10; // si
  __int64 Pool; // rax
  KIRQL v12; // al
  _LIST_ENTRY *Flink; // rdx
  int v15; // eax
  unsigned __int16 v16; // dx
  _BYTE v17[16]; // [rsp+80h] [rbp+80h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+B8h]

  v3 = 0LL;
  *(_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL) = retaddr;
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_q(14LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 && Parameters->Header.Revision )
  {
    fAllocateNetBuffer = Parameters->fAllocateNetBuffer;
    v7 = 368;
    ContextSize = Parameters->ContextSize;
    DataSize = Parameters->DataSize;
    if ( fAllocateNetBuffer )
      v7 = 544;
    if ( ContextSize )
    {
      if ( (ContextSize & 7) != 0 )
        goto LABEL_18;
      v7 += ContextSize + 16;
    }
    if ( !(_DWORD)DataSize
      || fAllocateNetBuffer
      && (v15 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize),
          v3 = (v15 + 7) & 0xFFFFFFF8,
          v16 = ((v15 + 7) & 0xFFF8) + DataSize,
          v16 >= (unsigned int)v3)
      && (v7 += v16, v7 >= v16) )
    {
      v10 = (v7 + 7) & 0xFFF8;
      Pool = ndisPplCreatePool(v3, v10, Parameters->PoolTag);
      v4 = Pool;
      if ( Pool )
      {
        *(_WORD *)Pool = 269;
        *(_WORD *)(Pool + 2) = 384;
        *(_QWORD *)(Pool + 40) = NdisHandle;
        *(_DWORD *)(Pool + 56) = Parameters->PoolTag;
        *(_BYTE *)(Pool + 88) = Parameters->ProtocolId;
        if ( fAllocateNetBuffer )
          *(_DWORD *)(Pool + 60) |= 1u;
        if ( ContextSize )
        {
          *(_DWORD *)(Pool + 60) |= 2u;
          *(_WORD *)(Pool + 34) = ContextSize;
        }
        if ( (_DWORD)DataSize )
        {
          *(_DWORD *)(Pool + 60) |= 4u;
          *(_DWORD *)(Pool + 92) = DataSize;
          *(_DWORD *)(Pool + 96) = (MmSizeOfMdl((PVOID)0xFFF, DataSize) + 7) & 0xFFFFFFF8;
        }
        *(_WORD *)(v4 + 32) = v10;
        KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 64));
        KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 8));
        *(_QWORD *)(v4 + 24) = v4 + 16;
        *(_QWORD *)(v4 + 16) = v4 + 16;
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferListPoolListLock);
        Flink = ndisGlobalNetBufferListPoolList.Flink;
        *(_QWORD *)(v4 + 72) = ndisGlobalNetBufferListPoolList.Flink;
        *(_QWORD *)(v4 + 80) = &ndisGlobalNetBufferListPoolList;
        if ( Flink->Blink != &ndisGlobalNetBufferListPoolList )
          __fastfail(3u);
        Flink->Blink = (_LIST_ENTRY *)(v4 + 72);
        ndisGlobalNetBufferListPoolList.Flink = (_LIST_ENTRY *)(v4 + 72);
        KeReleaseSpinLock(&ndisGlobalNetBufferListPoolListLock, v12);
        *(_QWORD *)(v4 + 48) = *(_QWORD *)((unsigned __int64)v17 & 0xFFFFFFFFFFFFFFC0uLL);
      }
    }
  }
LABEL_18:
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_qq(15LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, NdisHandle, v4);
  return (NDIS_HANDLE)v4;
}
