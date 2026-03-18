/*
 * XREFs of CcNotifyOfMappedWriteComplete @ 0x1400E4064
 * Callers:
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcReleaseByteRangeFromWrite @ 0x1400E4134 (CcReleaseByteRangeFromWrite.c)
 *     CcIsFatalWriteError @ 0x1400E4250 (CcIsFatalWriteError.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 */

void __fastcall CcNotifyOfMappedWriteComplete(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rdi
  bool v5; // si
  __int64 v6; // rbx
  __int64 v7; // rcx
  KIRQL v8; // al
  KIRQL v9; // bl
  char v10; // al
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6 = a3;
  if ( a4 < 0 )
  {
    v10 = CcIsFatalWriteError(v4);
    a2 = v11;
    v5 = v10 == 0;
  }
  v7 = *(_QWORD *)(v4 + 48);
  if ( a2 + v6 > v7 )
  {
    if ( a2 > v7 )
      goto LABEL_6;
    LODWORD(v6) = v7 - a2;
  }
  if ( (_DWORD)v6 )
    CcReleaseByteRangeFromWrite(v4, &v11, (unsigned int)v6, 0LL, v5);
LABEL_6:
  if ( CcDeferredWrites.Flink != &CcDeferredWrites )
    CcPostDeferredWrites(v7);
  v8 = KeAcquireQueuedSpinLock(5uLL);
  --*(_DWORD *)(v4 + 516);
  v9 = v8;
  CcDecrementOpenCount((_DWORD *)v4);
  KeReleaseQueuedSpinLock(5uLL, v9);
}
