/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1401B1D50
 * Callers:
 *     <none>
 * Callees:
 *     MmSetAddressRangeModified @ 0x140016B20 (MmSetAddressRangeModified.c)
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcIsFatalWriteError @ 0x14008E0DC (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1400AAA58 (CcPerfLogFlushSection.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400CDB94 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x1400CDBEC (CcReferenceSharedCacheMapFileObject.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rsi
  ULONG_PTR v6; // rbp
  __int64 v7; // r8
  __int64 Status; // rdx

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1F8DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *((_QWORD *)Bcb + 22);
  IoStatus->Status = 0;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v5 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModified(*((PVOID *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((__int64)Bcb, 1, 2);
      v6 = CcReferenceSharedCacheMapFileObject(v5);
      if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v5, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v6 + 40), (va_list)Bcb + 8, *((unsigned int *)Bcb + 1));
      CcDereferenceSharedCacheMapFileObject(v5, v6);
      Status = (unsigned int)IoStatus->Status;
      if ( (int)Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), Status, v7) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((__int64)Bcb, 0, 0);
      if ( CcDeferredWrites.Flink != &CcDeferredWrites )
        CcPostDeferredWrites();
    }
    else
    {
      CcUnpinFileDataEx((__int64)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((__int64)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}
