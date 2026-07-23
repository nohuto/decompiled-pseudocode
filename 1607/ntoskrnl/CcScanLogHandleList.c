/*
 * XREFs of CcScanLogHandleList @ 0x1400CA8AC
 * Callers:
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     CcCalculatePagesToWrite @ 0x1400C9AC0 (CcCalculatePagesToWrite.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CcScanLogHandleList(_DWORD *a1, int a2, __int64 *a3)
{
  KIRQL v6; // al
  __int64 *v7; // rdi
  KIRQL v8; // bp
  __int64 *v9; // rbx
  __int64 v10; // rcx
  int *v11; // rsi
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 **v21; // rcx
  void *v22; // rcx
  unsigned __int16 v23; // [rsp+60h] [rbp+8h] BYREF

  v23 = 0;
  *a1 = 0;
  *a3 = 0x7FFFFFFFFFFFFFFFLL;
  v6 = KeAcquireQueuedSpinLock(5uLL);
  v7 = (__int64 *)CcVolumeCacheMapList;
  v8 = v6;
  while ( v7 != &CcVolumeCacheMapList )
  {
    v9 = v7 - 2;
    ++*((_DWORD *)v7 - 3);
    KeReleaseQueuedSpinLock(5uLL, v8);
    v10 = v7[3];
    if ( v10 )
      ((void (__fastcall *)(__int64, unsigned __int16 *))v9[7])(v10, &v23);
    v8 = KeAcquireQueuedSpinLock(5uLL);
    if ( v9[5] )
    {
      v11 = (int *)(v9 + 8);
      if ( (unsigned __int64)v9[8] >= 0xFFFFFFFF )
      {
        ++CcDbgForcedLogPercentFull;
        v23 = 0;
      }
      else
      {
        v12 = *v11;
        *((_DWORD *)v9 + 28) = *v11;
        if ( v23 )
        {
          v13 = 100 * v12;
          *((_DWORD *)v9 + 28) = v13;
          v14 = v13 / v23;
          goto LABEL_9;
        }
      }
      v14 = *((_DWORD *)v9 + 37);
LABEL_9:
      *((_DWORD *)v9 + 28) = v14;
      v9[13] = v14;
      v9[12] = v14;
      v9[11] = v14;
      *((_DWORD *)v9 + 28) = (3 * v14) >> 2;
      v15 = CcCalculatePagesToWrite(a2, (__int64)(v9 + 8), (unsigned __int64 *)v9 + 11, 1);
      v16 = *(_QWORD *)v11;
      v9[9] = *(_QWORD *)v11;
      if ( v15 > v16 >> 3 )
      {
        *a1 += v15;
        ++CcDbgAdditionalPagesQueuedCount;
        *((_DWORD *)v9 + 36) = v15;
      }
      else
      {
        *((_DWORD *)v9 + 36) = 0;
      }
      *((_DWORD *)v9 + 20) = *((_DWORD *)v9 + 36);
      if ( v9[4] )
      {
        v19 = v9[22];
        if ( v19 < *a3 )
          *a3 = v19;
      }
    }
    v17 = *((_DWORD *)v9 + 1);
    v7 = (__int64 *)*v7;
    if ( !v17 )
      KeBugCheckEx(0x34u, 0x559uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v18 = v17 - 1;
    *((_DWORD *)v9 + 1) = v18;
    if ( !v18 )
    {
      v20 = v9[2];
      v21 = (__int64 **)v9[3];
      if ( *(__int64 **)(v20 + 8) != v9 + 2 || *v21 != v9 + 2 )
        __fastfail(3u);
      *v21 = (__int64 *)v20;
      *(_QWORD *)(v20 + 8) = v21;
      v22 = (void *)v9[20];
      if ( v22 )
      {
        ObfDereferenceObjectWithTag(v22, 0x746C6644u);
        v9[20] = 0LL;
      }
      ExFreePoolWithTag(v9, 0x6D566343u);
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v8);
}
