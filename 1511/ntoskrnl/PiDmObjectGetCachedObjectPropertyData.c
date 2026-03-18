/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x14043D764
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x14043D254 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x14043D898 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14043D8F0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     PiDmCacheDataDecode @ 0x14043E09C (PiDmCacheDataDecode.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectPropertyData(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  signed __int64 *v8; // rbx
  unsigned int v10; // r14d
  int Object; // edi
  char v12; // si
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  signed __int64 *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  ULONG_PTR v21; // rbx
  unsigned int v23; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v8 = (signed __int64 *)a3;
  v10 = a1;
  Object = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v24, &v23);
  if ( v23 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v24[0], v23, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !v8 )
      {
        Object = PiDmGetObject(v10, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v8 = (signed __int64 *)BugCheckParameter2;
        v12 = 1;
      }
      PiDmObjectAcquireSharedLock(v8);
      v17 = &v8[2 * v15 + 13 + v15];
      if ( *(_DWORD *)v17 )
        Object = PiDmCacheDataDecode(v17, a5, a6, a7, a8);
      else
        Object = -1073741802;
      _m_prefetchw(v8);
      v18 = *v8;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v19 = v18 - 16;
      else
        v19 = 0LL;
      if ( (v18 & 2) != 0
        || (v20 = *v8, v20 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v19, v18)) )
      {
        v21 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v21 = BugCheckParameter2;
      }
      KeAbPostRelease(v21);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v12 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
