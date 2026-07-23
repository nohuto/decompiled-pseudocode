/*
 * XREFs of CcUninitializeVolumeCacheMap @ 0x1400CAE80
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall CcUninitializeVolumeCacheMap(_DWORD *P)
{
  int v2; // edi
  KIRQL v3; // al
  int v4; // edx
  KIRQL v5; // si
  int v6; // edx
  _DWORD **v7; // rdx
  PVOID *v8; // rax
  void *v9; // rcx

  v2 = 0;
  v3 = KeAcquireQueuedSpinLock(5uLL);
  v4 = P[1];
  v5 = v3;
  if ( !v4 )
    KeBugCheckEx(0x34u, 0x559uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = v4 - 1;
  P[1] = v6;
  if ( !v6 )
  {
    v2 = 1;
    v7 = (_DWORD **)*((_QWORD *)P + 2);
    v8 = (PVOID *)*((_QWORD *)P + 3);
    if ( v7[1] != P + 4 || *v8 != P + 4 )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    v9 = (void *)*((_QWORD *)P + 20);
    if ( v9 )
    {
      ObfDereferenceObjectWithTag(v9, 0x746C6644u);
      *((_QWORD *)P + 20) = 0LL;
    }
  }
  KeReleaseQueuedSpinLock(5uLL, v5);
  if ( v2 )
    ExFreePoolWithTag(P, 0x6D566343u);
}
