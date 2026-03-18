/*
 * XREFs of PiDmObjectGetCachedObjectReference @ 0x140547318
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140439694 (PiDmObjectGetCachedObjectProperty.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140439E00 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 */

__int64 __fastcall PiDmObjectGetCachedObjectReference(
        unsigned int a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        volatile signed __int64 *a5)
{
  volatile signed __int64 *v5; // rbx
  char v7; // si
  int Object; // edi
  __int64 v10; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r14
  ULONG_PTR v16; // rdx
  volatile signed __int64 v17; // rcx
  signed __int64 v18; // rax
  signed __int64 v19; // rcx
  volatile signed __int64 v20; // rtt
  ULONG_PTR v21; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v23; // ax
  unsigned int v25; // [rsp+20h] [rbp-10h] BYREF
  DEVPROPKEY **v26; // [rsp+28h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+70h] [rbp+40h] BYREF

  BugCheckParameter2 = a3;
  v5 = (volatile signed __int64 *)a3;
  v7 = 0;
  Object = -1073741802;
  PiDmGetCacheKeys(a1, &v26, &v25);
  if ( v25 )
  {
    CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v26, v25, v10);
    v15 = CachedKeyIndex;
    if ( CachedKeyIndex < (unsigned int)v12 )
    {
      if ( !v5 )
      {
        Object = PiDmGetObject(a1, a2, &BugCheckParameter2);
        if ( Object < 0 )
          return (unsigned int)Object;
        v5 = (volatile signed __int64 *)BugCheckParameter2;
        v7 = 1;
      }
      PiDmObjectAcquireSharedLock(v5, v12, v13, v14);
      v16 = (unsigned int)(LODWORD(v5[3 * v15 + 13]) - 1);
      if ( LODWORD(v5[3 * v15 + 13]) == 1 )
      {
        Object = -1073741275;
      }
      else if ( LODWORD(v5[3 * v15 + 13]) == 5 )
      {
        v17 = v5[3 * v15 + 15];
        *a5 = v17;
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
        v5 = (volatile signed __int64 *)BugCheckParameter2;
        Object = 0;
      }
      else
      {
        Object = -1073741802;
      }
      _m_prefetchw((const void *)v5);
      v18 = *v5;
      v19 = *v5 - 16;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v19 = 0LL;
      if ( (v18 & 2) != 0
        || (v16 = BugCheckParameter2,
            v20 = *v5,
            v20 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v19, v18)) )
      {
        v21 = BugCheckParameter2;
        ExfReleasePushLock((_QWORD *)BugCheckParameter2, v16);
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
        && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
        && !CurrentThread->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      if ( v7 )
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    }
  }
  return (unsigned int)Object;
}
