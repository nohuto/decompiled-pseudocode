/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x1403E429C
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1403E3EA0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ExpCaptureWnfStateName @ 0x1403E5210 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v8; // rbp
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 *v14; // rbx
  int v15; // eax
  __int64 *v16; // rdx
  __int64 **v17; // rcx
  __int64 v18; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h] BYREF
  int v23[2]; // [rsp+40h] [rbp-38h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( (int)ExpCaptureWnfStateName(a2, &v21) < 0 )
    return 3221225485LL;
  v11 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, v10);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v11, (ULONG_PTR)(a1 + 10));
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0LL);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v12, (ULONG_PTR)(a1 + 13));
  if ( v13 )
    *(_BYTE *)(v13 + 26) |= 1u;
  v14 = (__int64 *)a1[14];
  if ( v14 != a1 + 14 )
  {
    while ( *(v14 - 11) != a3 || v21 != *(v14 - 6) )
    {
      v14 = (__int64 *)*v14;
      if ( v14 == a1 + 14 )
        goto LABEL_27;
    }
    v9 = 1;
    if ( a4 == *((_DWORD *)v14 + 6) && *((int *)v14 + 4) > 1 )
    {
      v15 = *((_DWORD *)v14 + 5);
      if ( v15 )
      {
        *((_DWORD *)v14 + 4) = 1;
        if ( a5 == -1073741267 && (v15 & 1) == 0 )
          *((_DWORD *)v14 + 5) = v15 | 1;
      }
      else if ( a5 )
      {
        *((_DWORD *)v14 + 4) = 3;
      }
      else
      {
        *((_DWORD *)v14 + 4) = 0;
        v16 = (__int64 *)*v14;
        v17 = (__int64 **)v14[1];
        if ( *(__int64 **)(*v14 + 8) != v14 || *v17 != v14 )
          __fastfail(3u);
        *v17 = v16;
        v16[1] = (__int64)v17;
      }
      if ( *((_DWORD *)v14 + 4) != 3 )
      {
        if ( (*((_BYTE *)v14 + 20) & 1) == 0 && (v14[3] & 1) != 0 )
        {
          v18 = *(v14 - 7);
          if ( v18 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 164), 0xFFFFFFFF) == 1
              && ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(v14 - 7) + 8)) )
            {
              v8 = (struct _EX_RUNDOWN_REF *)*(v14 - 7);
            }
          }
        }
        *((_DWORD *)v14 + 6) = 0;
      }
    }
  }
LABEL_27:
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v9 && (a4 & 1) != 0 )
  {
    v20 = a1[1];
    *(_QWORD *)v23 = 0LL;
    ExpWnfResolveScopeInstance((int)v23, v20, 0, (v21 >> 6) & 0xF, 0LL);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v23, v21, &v22) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 164), 0xFFFFFFFF) == 1 )
        v8 = (struct _EX_RUNDOWN_REF *)v22;
      else
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v22 + 8));
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v23 + 8LL));
  }
  if ( v8 )
  {
    ExpWnfNotifyNameSubscribers(v8, 8LL, 1LL, 1LL);
    ExReleaseRundownProtection_0(v8 + 1);
  }
  return 0LL;
}
