/*
 * XREFs of NdisAllocateNetBufferPool @ 0x1C001CA90
 * Callers:
 *     DriverEntry @ 0x1C01027E0 (DriverEntry.c)
 * Callees:
 *     ndisPplCreatePool @ 0x1C0015DA4 (ndisPplCreatePool.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 */

NDIS_HANDLE __stdcall NdisAllocateNetBufferPool(NDIS_HANDLE NdisHandle, PNET_BUFFER_POOL_PARAMETERS Parameters)
{
  __int64 v2; // r9
  NDIS_HANDLE v4; // r14
  char *v5; // rbx
  __int16 v6; // si
  unsigned __int16 v7; // si
  char *Pool; // rax
  KIRQL v9; // al
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v11; // rcx
  int v13; // eax
  unsigned __int16 v14; // dx
  _UNKNOWN *retaddr; // [rsp+90h] [rbp+88h]

  v4 = NdisHandle;
  v5 = 0LL;
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_q(10LL, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, NdisHandle);
  if ( Parameters->Header.Type == 0x80 )
  {
    if ( Parameters->Header.Revision )
    {
      v6 = 176;
      if ( !Parameters->DataSize
        || (v13 = MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize),
            NdisHandle = (NDIS_HANDLE)((v13 + 7) & 0xFFFFFFF8),
            v14 = LOWORD(Parameters->DataSize) + ((v13 + 7) & 0xFFF8),
            v14 >= (unsigned int)NdisHandle)
        && (v6 = v14 + 176, (unsigned __int16)(v14 + 176) >= v14) )
      {
        v7 = (v6 + 7) & 0xFFF8;
        Pool = ndisPplCreatePool(
                 (__int64)NdisHandle,
                 v7,
                 Parameters->PoolTag,
                 v2,
                 (FREE_FUNCTION_EX *)ndisFreeToNPagedPool);
        v5 = Pool;
        if ( Pool )
        {
          *(_WORD *)Pool = 268;
          *((_WORD *)Pool + 1) = 384;
          *((_QWORD *)Pool + 5) = v4;
          *((_DWORD *)Pool + 14) = Parameters->PoolTag;
          if ( Parameters->DataSize )
          {
            *((_DWORD *)Pool + 22) |= 1u;
            *((_DWORD *)Pool + 23) = Parameters->DataSize;
            *((_DWORD *)Pool + 24) = (MmSizeOfMdl((PVOID)0xFFF, Parameters->DataSize) + 7) & 0xFFFFFFF8;
          }
          *((_WORD *)v5 + 16) = v7;
          KeInitializeSpinLock((PKSPIN_LOCK)v5 + 8);
          KeInitializeSpinLock((PKSPIN_LOCK)v5 + 1);
          *((_QWORD *)v5 + 3) = v5 + 16;
          *((_QWORD *)v5 + 2) = v5 + 16;
          v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalNetBufferPoolListLock);
          Flink = ndisGlobalNetBufferPoolList.Flink;
          v11 = (_LIST_ENTRY *)(v5 + 72);
          if ( ndisGlobalNetBufferPoolList.Flink->Blink != &ndisGlobalNetBufferPoolList )
            __fastfail(3u);
          v11->Flink = ndisGlobalNetBufferPoolList.Flink;
          *((_QWORD *)v5 + 10) = &ndisGlobalNetBufferPoolList;
          Flink->Blink = v11;
          ndisGlobalNetBufferPoolList.Flink = (_LIST_ENTRY *)(v5 + 72);
          KeReleaseSpinLock(&ndisGlobalNetBufferPoolListLock, v9);
          *((_QWORD *)v5 + 6) = retaddr;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895DC >= 4u )
    WPP_SF_qq(11LL, &WPP_dd2f2ecee6683acc3056f01a069fb608_Traceguids, v4, v5);
  return v5;
}
