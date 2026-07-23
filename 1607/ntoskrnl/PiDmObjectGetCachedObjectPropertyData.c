/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x1404E22E4
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x1404E1DD4 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x1404E1F90 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x1404E2474 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x1404E24C0 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     PiDmCacheDataDecode @ 0x1404E2B40 (PiDmCacheDataDecode.c)
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
  char v10; // si
  unsigned int v11; // r14d
  int Object; // edi
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // rbp
  unsigned int v16; // edx
  signed __int64 *v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  ULONG_PTR v21; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v23; // ax
  unsigned int v25; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v26[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v8 = (signed __int64 *)a3;
  v10 = 0;
  v11 = a1;
  Object = -1073741802;
  PiDmGetCacheKeys(a1, v26, &v25);
  if ( v25 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex(v26[0], v25, v13);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < v16 )
    {
      if ( !v8 )
      {
        Object = PiDmGetObject(v11, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v8 = (signed __int64 *)BugCheckParameter2;
        v10 = 1;
      }
      PiDmObjectAcquireSharedLock(v8);
      v17 = &v8[2 * v15 + 13 + v15];
      if ( *(_DWORD *)v17 <= 1u )
        Object = -1073741802;
      else
        Object = PiDmCacheDataDecode(v17, a5, a6, a7, a8);
      _m_prefetchw(v8);
      v18 = *v8;
      v19 = *v8 - 16;
      if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
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
      CurrentThread = KeGetCurrentThread();
      v23 = CurrentThread->KernelApcDisable + 1;
      CurrentThread->KernelApcDisable = v23;
      if ( !v23
        && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery((__int64)CurrentThread);
      }
      if ( v10 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
