/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x1404C1D40
 * Callers:
 *     PiDmGetReferencedObjectFromProperty @ 0x1404C1CB4 (PiDmGetReferencedObjectFromProperty.c)
 *     PiDmObjectGetCachedObjectProperty @ 0x1404E1DD4 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1404E2474 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1404E24C0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        signed __int64 *a5)
{
  signed __int64 *v5; // rbx
  unsigned int v7; // r15d
  int Object; // edi
  char v9; // si
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // r14
  unsigned int v13; // edx
  int v14; // edx
  signed __int64 v15; // rcx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+40h] BYREF

  BugCheckParameter2 = a3;
  v5 = (signed __int64 *)a3;
  v7 = a1;
  Object = -1073741802;
  v9 = 0;
  PiDmGetCacheKeys(a1, &v25, &v24);
  if ( v24 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v25, v24, v10);
    v12 = CachedKeyIndex;
    if ( CachedKeyIndex < v13 )
    {
      if ( !v5 )
      {
        Object = PiDmGetObject(v7, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v5 = (signed __int64 *)BugCheckParameter2;
        v9 = 1;
      }
      PiDmObjectAcquireSharedLock(v5);
      v14 = v5[3 * v12 + 13];
      if ( v14 == 6 )
      {
        v15 = v5[3 * v12 + 15];
        *a5 = v15;
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
        v5 = (signed __int64 *)BugCheckParameter2;
        Object = 0;
      }
      else if ( v14 == 2 )
      {
        Object = -1073741275;
      }
      else
      {
        Object = -1073741802;
      }
      _m_prefetchw(v5);
      v16 = *v5;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
        v17 = v16 - 16;
      else
        v17 = 0LL;
      if ( (v16 & 2) != 0
        || (v18 = *v5, v18 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v17, v16)) )
      {
        v19 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2);
      }
      else
      {
        v19 = BugCheckParameter2;
      }
      KeAbPostRelease(v19);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
      if ( v9 )
        PiDmObjectRelease((PVOID)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
