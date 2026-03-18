/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1401DD4E8
 * Callers:
 *     <none>
 * Callees:
 *     CcSetDirtyPinnedData @ 0x14002F920 (CcSetDirtyPinnedData.c)
 *     ObFastReferenceObject @ 0x14004E430 (ObFastReferenceObject.c)
 *     MmSetAddressRangeModified @ 0x14007C280 (MmSetAddressRangeModified.c)
 *     MmIsWriteErrorFatal @ 0x1400823F0 (MmIsWriteErrorFatal.c)
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     CcPerfLogFlushSection @ 0x1401288B4 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v3; // r9
  __int64 v6; // rsi
  __int64 v7; // r9
  signed __int64 *v8; // r15
  __int64 v9; // rdx
  ULONG_PTR v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r9
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  NTSTATUS Status; // ebp
  __int64 v17; // rsi
  signed __int64 *v18; // r14
  __int64 v19; // rdx
  ULONG_PTR v20; // r8
  __int64 v21; // r9
  int v22; // esi
  signed __int64 v23; // rax
  signed __int64 v24; // rtt

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1EF1uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  IoStatus->Status = 0;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModified(*((PVOID *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((__int64)Bcb, 1, 2, v7);
      v8 = (signed __int64 *)(v6 + 96);
      v10 = ObFastReferenceObject((signed __int64 *)(v6 + 96));
      if ( !v10 )
        v10 = CcSlowReferenceSharedCacheMapFileObject(v6, v9, v11, v12);
      if ( (xmmword_1403D1290 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v6, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v10 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), v12, IoStatus, 1);
      _m_prefetchw(v8);
      v14 = *v8;
      while ( (v10 ^ v14) < 0xF )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange64(v8, v14 + 1, v14);
        if ( v15 == v14 )
          goto LABEL_14;
      }
      ObDereferenceObjectDeferDeleteWithTag((PVOID)v10, 0x746C6644u);
LABEL_14:
      Status = IoStatus->Status;
      if ( IoStatus->Status < 0 )
      {
        v17 = *((_QWORD *)Bcb + 22);
        if ( !*(_DWORD *)(v17 + 4) )
          KeBugCheckEx(0x34u, 0x1349uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v18 = (signed __int64 *)(v17 + 96);
        v20 = ObFastReferenceObject((signed __int64 *)(v17 + 96));
        if ( !v20 )
          v20 = CcSlowReferenceSharedCacheMapFileObject(v17, v19, 0LL, v21);
        v22 = *(_DWORD *)(*(_QWORD *)(v20 + 8) + 52LL) & 0x10;
        _m_prefetchw(v18);
        v23 = *v18;
        if ( (v20 ^ *v18) >= 0xF )
        {
LABEL_21:
          ObDereferenceObjectDeferDeleteWithTag((PVOID)v20, 0x746C6644u);
        }
        else
        {
          while ( 1 )
          {
            v24 = v23;
            v23 = _InterlockedCompareExchange64(v18, v23 + 1, v23);
            if ( v24 == v23 )
              break;
            if ( (v20 ^ v23) >= 0xF )
              goto LABEL_21;
          }
        }
        if ( !(unsigned int)MmIsWriteErrorFatal(1, v22, Status) )
          CcSetDirtyPinnedData(Bcb, 0LL);
      }
      CcUnpinFileDataEx((__int64)Bcb, 0, 0, v13);
      if ( CcDeferredWrites.Flink != &CcDeferredWrites )
        CcPostDeferredWrites();
    }
    else
    {
      CcUnpinFileDataEx((__int64)Bcb, 0, 0, v3);
    }
  }
  else
  {
    CcUnpinFileDataEx((__int64)Bcb, 1, 0, v3);
    IoStatus->Status = 0;
  }
}
