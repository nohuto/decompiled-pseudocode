/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x14043DF10
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E564 (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PiDmObjectRelease @ 0x14043D3D0 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x14043D410 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x14043D898 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x14043D8F0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x14045AC18 (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmCacheDataEncode @ 0x14045AD0C (PiDmCacheDataEncode.c)
 */

void __fastcall PiDmObjectUpdateCachedObjectProperty(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        unsigned int a8)
{
  signed __int64 v9; // rbx
  DEVPROPKEY **v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // rbp
  unsigned int v14; // edx
  signed __int64 *v15; // rdi
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  ULONG_PTR v18; // rbx
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF
  DEVPROPKEY **v21; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v20 = a3;
    v9 = 0LL;
    BugCheckParameter2[0] = 0LL;
    PiDmGetCacheKeys(a1, &v21, &v20);
    if ( (_DWORD)v20 )
    {
      v11 = v21;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v21, v20, a5);
      v13 = CachedKeyIndex;
      if ( CachedKeyIndex < v14 && (int)PiDmGetObject(a1, a2, BugCheckParameter2) >= 0 )
      {
        v15 = (signed __int64 *)BugCheckParameter2[0];
        PiDmObjectAcquireExclusiveLock(BugCheckParameter2[0]);
        if ( !LODWORD(v15[3 * v13 + 13]) )
          PiDmCacheDataEncode(a6, a7, a8, LODWORD(v11[3 * v13 + 1]), HIDWORD(v11[3 * v13 + 1]), &v15[3 * v13 + 13]);
        _m_prefetchw(v15);
        v16 = *v15;
        if ( (*v15 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
          v9 = v16 - 16;
        if ( (v16 & 2) != 0
          || (v17 = *v15, v17 != _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)BugCheckParameter2[0],
                                   v9,
                                   v16)) )
        {
          v18 = BugCheckParameter2[0];
          ExfReleasePushLock((_QWORD *)BugCheckParameter2[0]);
        }
        else
        {
          v18 = BugCheckParameter2[0];
        }
        KeAbPostRelease(v18);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        PiDmObjectRelease((unsigned int *)BugCheckParameter2[0]);
      }
    }
  }
}
