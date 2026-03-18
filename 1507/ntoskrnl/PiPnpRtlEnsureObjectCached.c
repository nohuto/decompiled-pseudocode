/*
 * XREFs of PiPnpRtlEnsureObjectCached @ 0x14067F934
 * Callers:
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiDmGetObject @ 0x140439850 (PiDmGetObject.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiDmObjectAcquireExclusiveLock @ 0x1404E04DC (PiDmObjectAcquireExclusiveLock.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 */

__int64 __fastcall PiPnpRtlEnsureObjectCached(__int64 a1, wchar_t *a2)
{
  int Object; // eax
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int64 *v8; // rbx
  ULONG_PTR v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rcx
  signed __int64 v12; // rtt
  ULONG_PTR v13; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v15; // ax
  int v16; // ebx
  struct _KTHREAD *v17; // rdx
  __int16 v18; // cx
  __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+30h] BYREF
  PVOID P; // [rsp+68h] [rbp+38h] BYREF

  BugCheckParameter2 = 0LL;
  P = 0LL;
  v20 = 0LL;
  Object = PiDmGetObject(1LL, (__int64)a2, &BugCheckParameter2);
  v4 = Object;
  if ( Object < 0 )
  {
    if ( Object == -1073741772 )
    {
      v4 = PiDmAddCacheReferenceForObject(1u, a2, (volatile signed __int32 **)&BugCheckParameter2);
      if ( v4 >= 0 )
      {
        v8 = (signed __int64 *)BugCheckParameter2;
        PiDmObjectAcquireExclusiveLock((unsigned __int64 *)BugCheckParameter2, v5, v6, v7);
        *((_DWORD *)v8 + 8) |= 1u;
        _m_prefetchw(v8);
        v10 = *v8;
        v11 = *v8 - 16;
        if ( (*v8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v11 = 0LL;
        if ( (v10 & 2) != 0
          || (v9 = BugCheckParameter2,
              v12 = *v8,
              v12 != _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v11, v10)) )
        {
          v13 = BugCheckParameter2;
          ExfReleasePushLock((_QWORD *)BugCheckParameter2, v9);
        }
        else
        {
          v13 = BugCheckParameter2;
        }
        KeAbPostRelease(v13);
        CurrentThread = KeGetCurrentThread();
        v15 = CurrentThread->KernelApcDisable + 1;
        CurrentThread->KernelApcDisable = v15;
        if ( !v15
          && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
          && !CurrentThread->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
        if ( (int)PiPnpRtlBeginOperation((__int64 **)&P) >= 0 )
        {
          PiPnpRtlDisableRemoveOperationDispatch();
          v16 = PiPnpRtlObjectEventCreate(a2, 1u, (__int64)P, &v20);
          ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
          v17 = KeGetCurrentThread();
          v18 = v17->KernelApcDisable + 1;
          v17->KernelApcDisable = v18;
          if ( !v18
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v17->ApcState.ApcListHead[0].Flink != &v17->152
            && !v17->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          if ( v16 >= 0 && v20 )
            *(_DWORD *)(v20 + 4) |= 1u;
          PiPnpRtlEndOperation((char *)P);
        }
      }
    }
  }
  else
  {
    v4 = 0;
  }
  if ( BugCheckParameter2 )
    PiDmObjectRelease((unsigned int *)BugCheckParameter2);
  return (unsigned int)v4;
}
