/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x14045CD10
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x14043D254 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x14045CC84 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x14043D898 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14043D8F0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        volatile signed __int64 *a5)
{
  volatile signed __int64 *v5; // rbx
  int Object; // edi
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // r14
  unsigned int v13; // edx
  volatile signed __int64 v14; // rcx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx
  volatile signed __int64 v17; // rtt
  ULONG_PTR v18; // rbx
  unsigned int v20; // [rsp+20h] [rbp-10h] BYREF
  DEVPROPKEY **v21; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+40h] BYREF

  BugCheckParameter2 = a3;
  v5 = (volatile signed __int64 *)a3;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v21, &v20);
  if ( v20 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v20, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !v5 )
      {
        Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v5 = (volatile signed __int64 *)BugCheckParameter2;
        v9 = 1;
      }
      PiDmObjectAcquireSharedLock(v5);
      if ( LODWORD(v5[3 * v12 + 13]) == 1 )
      {
        Object = -1073741275;
      }
      else if ( LODWORD(v5[3 * v12 + 13]) == 5 )
      {
        v14 = v5[3 * v12 + 15];
        *a5 = v14;
        _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
        v5 = (volatile signed __int64 *)BugCheckParameter2;
        Object = 0;
      }
      else
      {
        Object = -1073741802;
      }
      _m_prefetchw((const void *)v5);
      v15 = *v5;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v16 = v15 - 16;
      else
        v16 = 0LL;
      if ( (v15 & 2) != 0
        || (v17 = *v5, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v16, v15)) )
      {
        v18 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v18 = BugCheckParameter2;
      }
      KeAbPostRelease(v18);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v9 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
