/*
 * XREFs of PiDmObjectGetCachedObjectPropertyData @ 0x140439BE0
 * Callers:
 *     PiDmObjectGetCachedObjectProperty @ 0x140439694 (PiDmObjectGetCachedObjectProperty.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140439E00 (PiDmGetCachedKeyIndex.c)
 *     PiDmCacheDataDecode @ 0x140439E44 (PiDmCacheDataDecode.c)
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
  unsigned int v10; // esi
  unsigned int v11; // ebp
  char v12; // r14
  __int64 v13; // r9
  unsigned int CachedKeyIndex; // eax
  __int64 v15; // r9
  __int64 v16; // rbx
  unsigned int v17; // edx
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v19; // rdi
  ULONG_PTR v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // r9
  signed __int64 v23; // rax
  signed __int64 *v24; // rdi
  __int64 v25; // rcx
  bool v26; // zf
  signed __int64 *v27; // rcx
  signed __int64 v28; // rax
  signed __int64 v29; // rcx
  signed __int64 v30; // rtt
  ULONG_PTR v31; // rbx
  struct _KTHREAD *v32; // rcx
  __int16 v33; // ax
  __int64 result; // rax
  unsigned int v35; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v36[6]; // [rsp+38h] [rbp-30h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp+18h] BYREF

  BugCheckParameter2 = a3;
  v10 = a1;
  v11 = -1073741802;
  v12 = 0;
  PiDmGetCacheKeys(a1, v36, &v35);
  if ( !v35 )
    return 3221225494LL;
  CachedKeyIndex = PiDmGetCachedKeyIndex(v36[0], v35, v13);
  v16 = CachedKeyIndex;
  if ( CachedKeyIndex >= v17 )
    return v11;
  if ( a3 )
  {
LABEL_4:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v19 = (volatile signed __int64 *)BugCheckParameter2;
    v21 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, v15);
    v23 = _InterlockedCompareExchange64(v19, 17LL, 0LL);
    v24 = (signed __int64 *)BugCheckParameter2;
    if ( v23 )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v21, BugCheckParameter2, v22);
    if ( v21 )
    {
      *(_BYTE *)(v21 + 26) |= 1u;
      v24 = (signed __int64 *)BugCheckParameter2;
    }
    v25 = v16 + 2 * v16 + 13;
    v26 = LODWORD(v24[v25]) == 0;
    v27 = &v24[v25];
    if ( !v26 )
      v11 = PiDmCacheDataDecode(v27, a5, a6, a7, a8);
    _m_prefetchw(v24);
    v28 = *v24;
    if ( (*v24 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
      v29 = v28 - 16;
    else
      v29 = 0LL;
    if ( (v28 & 2) != 0
      || (v20 = BugCheckParameter2,
          v30 = *v24,
          v30 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v29, v28)) )
    {
      v31 = BugCheckParameter2;
      ExfReleasePushLock((_QWORD *)BugCheckParameter2, v20);
    }
    else
    {
      v31 = BugCheckParameter2;
    }
    KeAbPostRelease(v31);
    v32 = KeGetCurrentThread();
    v33 = v32->KernelApcDisable + 1;
    v32->KernelApcDisable = v33;
    if ( !v33
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v32->ApcState.ApcListHead[0].Flink != &v32->152
      && !v32->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v12 )
      PiDmObjectRelease((unsigned int *)BugCheckParameter2);
    return v11;
  }
  result = PiDmGetObject(v10, a2, &BugCheckParameter2);
  if ( (int)result >= 0 )
  {
    v12 = 1;
    goto LABEL_4;
  }
  return result;
}
