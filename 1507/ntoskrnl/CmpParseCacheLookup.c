/*
 * XREFs of CmpParseCacheLookup @ 0x14044BDF8
 * Callers:
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     CmpParseCacheComputeRegHashKey @ 0x14044C048 (CmpParseCacheComputeRegHashKey.c)
 *     CmpParseCacheLookupByHash @ 0x14044C0C8 (CmpParseCacheLookupByHash.c)
 */

__int64 __fastcall CmpParseCacheLookup(int a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r15
  _WORD *v6; // rbx
  int v8; // r13d
  __int16 v9; // si
  unsigned __int64 v10; // rax
  BOOLEAN v11; // r14
  unsigned int v12; // ebp
  _WORD *v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r9
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rtt
  struct _KTHREAD *v19; // rdx
  unsigned int v20; // ebx
  signed __int64 v21; // rcx
  ULONG_PTR v22; // rtt
  unsigned __int64 v23; // rtt
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int16 v27; // cx
  __int16 v28; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+42h] [rbp-86h]
  __int64 v30; // [rsp+58h] [rbp-70h]
  __int64 v31; // [rsp+60h] [rbp-68h]
  __int64 v32; // [rsp+68h] [rbp-60h]
  _BYTE v33[16]; // [rsp+70h] [rbp-58h] BYREF

  v5 = v33;
  v6 = (_WORD *)*((_QWORD *)a2 + 1);
  v31 = a5;
  v32 = a4;
  v29[0] = 0LL;
  v8 = (int)a2;
  v9 = 0;
  v10 = (unsigned __int64)*a2 >> 1;
  v11 = 1;
  v30 = a3;
  v12 = 0;
  v28 = 0;
  *(_QWORD *)((char *)v29 + 6) = v6;
  v13 = &v6[v10];
  while ( v13 > v6 )
  {
    while ( v6 < v13 && *v6 == 92 )
    {
      ++v6;
      v9 += 2;
    }
    if ( v6 == v13 )
    {
      if ( !v12 )
        return (unsigned int)-1073741811;
      break;
    }
    for ( ; v6 < v13; v9 += 2 )
    {
      if ( *v6 == 92 )
        break;
      ++v6;
    }
    v28 = v9;
    LOWORD(v29[0]) = v9;
    *v5 = CmpParseCacheComputeRegHashKey(&v28);
    ++v12;
    ++v5;
    if ( v12 >= 3 )
      break;
  }
  v14 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpParseCacheLock, v14, (ULONG_PTR)&CmpParseCacheLock, v15);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v17 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v18 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v18 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v17,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL)
    || (v11 = ExfAcquireRundownProtection(&CmpShutdownRundown)) != 0 )
  {
    v20 = CmpParseCacheLookupByHash(v17, a1, v8, (unsigned int)v33, v12, v30, v32, v31);
  }
  else
  {
    v19 = KeGetCurrentThread();
    v27 = v19->KernelApcDisable + 1;
    v19->KernelApcDisable = v27;
    if ( !v27
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
      && !v19->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    v20 = -1073741431;
  }
  _m_prefetchw(&CmpParseCacheLock);
  v21 = CmpParseCacheLock - 16;
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v21 = 0LL;
  if ( (CmpParseCacheLock & 2) != 0
    || (v22 = CmpParseCacheLock,
        v22 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v21, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock, (__int64)v19);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  if ( v11 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v23 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v23 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v24 = KeGetCurrentThread();
    v25 = v24->KernelApcDisable + 1;
    v24->KernelApcDisable = v25;
    if ( !v25
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
      && !v24->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return v20;
}
