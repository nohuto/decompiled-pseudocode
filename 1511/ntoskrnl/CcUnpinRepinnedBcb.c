/*
 * XREFs of CcUnpinRepinnedBcb @ 0x1401A9140
 * Callers:
 *     <none>
 * Callees:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14000D4E4 (CcReferenceSharedCacheMapFileObject.c)
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     MmSetAddressRangeModified @ 0x1400B9910 (MmSetAddressRangeModified.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x140123608 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1E38uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
      if ( (xmmword_140382290 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v5, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v6 + 40), (va_list)Bcb + 8, *((unsigned int *)Bcb + 1));
      CcDereferenceSharedCacheMapFileObject(v5, v6);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
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
