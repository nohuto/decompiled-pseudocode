/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1405444DC
 * Callers:
 *     NtCreatePrivateNamespace @ 0x14054422C (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ObpLookupNamespaceEntry @ 0x14046FAE8 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  __int64 v11; // rdx
  char *v12; // rax
  __int64 *v13; // rcx
  signed __int64 v14; // rcx
  ULONG_PTR v15; // rtt
  struct _KTHREAD *v16; // rcx
  __int16 v17; // ax
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&qword_140331B90, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140331B90, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140331B90, v6, (ULONG_PTR)&qword_140331B90, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( ObpLookupNamespaceEntry(v7, a1) )
  {
    _m_prefetchw(&qword_140331B90);
    v19 = qword_140331B90 - 16;
    if ( (qword_140331B90 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v19 = 0LL;
    if ( (qword_140331B90 & 2) != 0
      || (v20 = qword_140331B90,
          v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140331B90, v19, qword_140331B90)) )
    {
      ExfReleasePushLock(&qword_140331B90, v11);
    }
    KeAbPostRelease((ULONG_PTR)&qword_140331B90);
    v21 = KeGetCurrentThread();
    v22 = v21->KernelApcDisable + 1;
    v21->KernelApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
      && !v21->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 3221225525LL;
  }
  else
  {
    v12 = (char *)&ObpPrivateNamespaceLookupTable + 16 * *(unsigned __int8 *)(a1 + 40);
    v13 = (__int64 *)*((_QWORD *)v12 + 1);
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 8) = v13;
    if ( (char *)*v13 != v12 )
      __fastfail(3u);
    *v13 = a1;
    *((_QWORD *)v12 + 1) = a1;
    ++dword_140331B98;
    _m_prefetchw(&qword_140331B90);
    v14 = qword_140331B90 - 16;
    if ( (qword_140331B90 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v14 = 0LL;
    if ( (qword_140331B90 & 2) != 0
      || (v15 = qword_140331B90,
          v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140331B90, v14, qword_140331B90)) )
    {
      ExfReleasePushLock(&qword_140331B90, v11);
    }
    KeAbPostRelease((ULONG_PTR)&qword_140331B90);
    v16 = KeGetCurrentThread();
    v17 = v16->KernelApcDisable + 1;
    v16->KernelApcDisable = v17;
    if ( !v17
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152
      && !v16->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return 0LL;
  }
}
