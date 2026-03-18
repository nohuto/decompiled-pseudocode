/*
 * XREFs of PiDmObjectUpdateCachedObjectProperty @ 0x14043A8B8
 * Callers:
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectUpdateCachedCmProperty @ 0x14043E1DC (PiDmObjectUpdateCachedCmProperty.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiDmGetCacheKeys @ 0x140439DB0 (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140439E00 (PiDmGetCachedKeyIndex.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
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
  DEVPROPKEY **v10; // rdi
  unsigned int CachedKeyIndex; // eax
  __int64 v12; // rsi
  unsigned int v13; // edx
  signed __int64 *v14; // rbx
  ULONG_PTR v15; // rdx
  signed __int64 v16; // rax
  signed __int64 v17; // rcx
  signed __int64 v18; // rtt
  ULONG_PTR v19; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v21; // ax
  ULONG_PTR BugCheckParameter2[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+70h] [rbp+18h] BYREF
  DEVPROPKEY **v24; // [rsp+78h] [rbp+20h] BYREF

  if ( !a4 )
  {
    v23 = a3;
    BugCheckParameter2[0] = 0LL;
    PiDmGetCacheKeys(a1, &v24, &v23);
    if ( (_DWORD)v23 )
    {
      v10 = v24;
      CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v24, v23, a5);
      v12 = CachedKeyIndex;
      if ( CachedKeyIndex < v13 && (int)PiDmGetObject(a1, a2, BugCheckParameter2) >= 0 )
      {
        v14 = (signed __int64 *)BugCheckParameter2[0];
        PiDmObjectAcquireExclusiveLock(BugCheckParameter2[0]);
        if ( !LODWORD(v14[3 * v12 + 13]) )
          PiDmCacheDataEncode(a6, a7, a8, LODWORD(v10[3 * v12 + 1]), HIDWORD(v10[3 * v12 + 1]), &v14[3 * v12 + 13]);
        _m_prefetchw(v14);
        v16 = *v14;
        v17 = *v14 - 16;
        if ( (*v14 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v17 = 0LL;
        if ( (v16 & 2) != 0
          || (v15 = BugCheckParameter2[0],
              v18 = *v14,
              v18 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2[0], v17, v16)) )
        {
          v19 = BugCheckParameter2[0];
          ExfReleasePushLock((_QWORD *)BugCheckParameter2[0], v15);
        }
        else
        {
          v19 = BugCheckParameter2[0];
        }
        KeAbPostRelease(v19);
        CurrentThread = KeGetCurrentThread();
        v21 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v21;
        if ( !v21
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        PiDmObjectRelease((unsigned int *)BugCheckParameter2[0]);
      }
    }
  }
}
