/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C0016FC0
 * Callers:
 *     DriverEntry @ 0x1C00FC3C0 (DriverEntry.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C001E8F0 (ndisPplCreatePool.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  NDIS_HANDLE v3; // r14
  __int64 v4; // rbx
  __int16 v5; // si
  unsigned __int16 v6; // si
  __int64 Pool; // rax
  KIRQL v8; // al
  _LIST_ENTRY *Flink; // rdx
  int v11; // eax
  unsigned __int16 v12; // dx
  _UNKNOWN *retaddr; // [rsp+90h] [rbp+88h]

  v3 = NdisHandle;
  v4 = 0LL;
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_q(10LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 )
  {
    if ( Parameters->Header.Revision )
    {
      v5 = 176;
      if ( !Parameters->DataSize
        || (v11 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize),
            NdisHandle = (NDIS_HANDLE)((v11 + 7) & 0xFFFFFFF8),
            v12 = LOWORD(Parameters->DataSize) + ((v11 + 7) & 0xFFF8),
            v12 >= (unsigned int)NdisHandle)
        && (v5 = v12 + 176, (unsigned __int16)(v12 + 176) >= v12) )
      {
        v6 = (v5 + 7) & 0xFFF8;
        Pool = ndisPplCreatePool(NdisHandle, v6, Parameters->PoolTag);
        v4 = Pool;
        if ( Pool )
        {
          *(_WORD *)Pool = 268;
          *(_WORD *)(Pool + 2) = 384;
          *(_QWORD *)(Pool + 40) = v3;
          *(_DWORD *)(Pool + 56) = Parameters->PoolTag;
          if ( Parameters->DataSize )
          {
            *(_DWORD *)(Pool + 88) |= 1u;
            *(_DWORD *)(Pool + 92) = Parameters->DataSize;
            *(_DWORD *)(Pool + 96) = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
          }
          *(_WORD *)(v4 + 32) = v6;
          KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 64));
          KeInitializeSpinLock((PKSPIN_LOCK)(v4 + 8));
          *(_QWORD *)(v4 + 24) = v4 + 16;
          *(_QWORD *)(v4 + 16) = v4 + 16;
          v8 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
          Flink = ndisGlobalNetBufferPoolList.Flink;
          *(_QWORD *)(v4 + 72) = ndisGlobalNetBufferPoolList.Flink;
          *(_QWORD *)(v4 + 80) = &ndisGlobalNetBufferPoolList;
          if ( Flink->Blink != &ndisGlobalNetBufferPoolList )
            __fastfail(3u);
          Flink->Blink = (_LIST_ENTRY *)(v4 + 72);
          ndisGlobalNetBufferPoolList.Flink = (_LIST_ENTRY *)(v4 + 72);
          KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v8);
          *(_QWORD *)(v4 + 48) = retaddr;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C008371C >= 4u )
    WPP_SF_qq(11LL, &WPP_b6b6d353eef4cd4f96098e1e69b92016_Traceguids, v3, v4);
  return (NDIS_HANDLE)v4;
}
