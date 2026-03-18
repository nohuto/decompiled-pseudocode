/*
 * XREFs of CmpParseCacheLookup @ 0x1403BB324
 * Callers:
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     CmpParseCacheComputeRegHashKey @ 0x1403BB524 (CmpParseCacheComputeRegHashKey.c)
 *     CmpParseCacheLookupByHash @ 0x1403BB5A4 (CmpParseCacheLookupByHash.c)
 */

__int64 __fastcall CmpParseCacheLookup(int a1, unsigned __int16 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r14
  _WORD *v6; // rbx
  int v9; // r15d
  unsigned __int64 v10; // rax
  __int16 v11; // si
  unsigned int v12; // ebp
  _WORD *v13; // rdi
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // ecx
  BOOLEAN v17; // di
  unsigned int v18; // ebx
  signed __int64 v19; // rcx
  ULONG_PTR v20; // rtt
  __int16 v22; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v23[14]; // [rsp+42h] [rbp-76h]
  __int64 v24; // [rsp+50h] [rbp-68h]
  __int64 v25; // [rsp+58h] [rbp-60h]
  _BYTE v26[16]; // [rsp+68h] [rbp-50h] BYREF

  v5 = v26;
  v6 = (_WORD *)*((_QWORD *)a2 + 1);
  v25 = a5;
  v22 = 0;
  *(_QWORD *)v23 = 0LL;
  v9 = (int)a2;
  v10 = (unsigned __int64)*a2 >> 1;
  v11 = 0;
  v24 = a4;
  v12 = 0;
  *(_QWORD *)&v23[6] = v6;
  v13 = &v6[v10];
  while ( v13 > v6 )
  {
    while ( v6 < v13 && *v6 == 92 )
    {
      ++v6;
      v11 += 2;
    }
    if ( v6 == v13 )
    {
      if ( !v12 )
        return (unsigned int)-1073741811;
      break;
    }
    for ( ; v6 < v13; v11 += 2 )
    {
      if ( *v6 == 92 )
        break;
      ++v6;
    }
    v22 = v11;
    *(_WORD *)v23 = v11;
    *v5 = CmpParseCacheComputeRegHashKey(&v22);
    ++v12;
    ++v5;
    if ( v12 >= 3 )
      break;
  }
  v14 = KeAbPreAcquire((ULONG_PTR)&CmpParseCacheLock, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(&CmpParseCacheLock, v14, (ULONG_PTR)&CmpParseCacheLock);
  if ( v14 )
    *(_BYTE *)(v14 + 26) |= 1u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( v17 )
  {
    v18 = CmpParseCacheLookupByHash(v16, a1, v9, (unsigned int)v26, v12, a3, v24, v25);
  }
  else
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v18 = -1073741431;
  }
  _m_prefetchw(&CmpParseCacheLock);
  if ( (CmpParseCacheLock & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v19 = CmpParseCacheLock - 16;
  else
    v19 = 0LL;
  if ( (CmpParseCacheLock & 2) != 0
    || (v20 = CmpParseCacheLock,
        v20 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpParseCacheLock, v19, CmpParseCacheLock)) )
  {
    ExfReleasePushLock(&CmpParseCacheLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpParseCacheLock);
  if ( v17 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v18;
}
