/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x1405016E8
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x14050126C (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 *v16; // rbx
  int v17; // r15d
  int v18; // eax
  __int64 *v19; // rdx
  __int64 **v20; // rcx
  __int64 v21; // rcx
  struct _EX_RUNDOWN_REF *v22; // rcx
  unsigned __int64 v23; // rtt
  unsigned __int64 v24; // rtt
  __int64 v26; // rdx
  struct _EX_RUNDOWN_REF *v27; // rcx
  unsigned __int64 v28; // rtt
  struct _EX_RUNDOWN_REF *v29; // rcx
  unsigned __int64 v30; // rtt
  SIZE_T NumberOfBytes; // [rsp+28h] [rbp-38h]
  char PreviousMode; // [rsp+30h] [rbp-30h]
  unsigned __int64 v33; // [rsp+38h] [rbp-28h] BYREF
  __int64 v34; // [rsp+40h] [rbp-20h] BYREF
  int v35[2]; // [rsp+48h] [rbp-18h] BYREF

  v7 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (int)ExpCaptureWnfStateName(a2, &v33, 0LL) < 0 )
    return 3221225485LL;
  v11 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, v9, v10);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v11, (ULONG_PTR)(a1 + 10), v12);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v13 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0LL, v12);
  v15 = v13;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v13, (ULONG_PTR)(a1 + 13), v14);
  if ( v15 )
    *(_BYTE *)(v15 + 26) |= 1u;
  v16 = (__int64 *)a1[14];
  if ( v16 == a1 + 14 )
  {
LABEL_37:
    v17 = 0;
  }
  else
  {
    while ( *(v16 - 11) != a3 || v33 != *(v16 - 6) )
    {
      v16 = (__int64 *)*v16;
      if ( v16 == a1 + 14 )
        goto LABEL_37;
    }
    v17 = 1;
    if ( a4 == *((_DWORD *)v16 + 6) && *((int *)v16 + 4) > 1 )
    {
      v18 = *((_DWORD *)v16 + 5);
      if ( v18 )
      {
        *((_DWORD *)v16 + 4) = 1;
        if ( a5 == -1073741267 && (v18 & 1) == 0 )
          *((_DWORD *)v16 + 5) = v18 | 1;
      }
      else if ( a5 )
      {
        *((_DWORD *)v16 + 4) = 3;
      }
      else
      {
        *((_DWORD *)v16 + 4) = 0;
        v19 = (__int64 *)*v16;
        v20 = (__int64 **)v16[1];
        if ( *(__int64 **)(*v16 + 8) != v16 || *v20 != v16 )
          __fastfail(3u);
        *v20 = v19;
        v19[1] = (__int64)v20;
      }
      if ( *((_DWORD *)v16 + 4) != 3 )
      {
        if ( (*((_BYTE *)v16 + 20) & 1) == 0 && (v16[3] & 1) != 0 )
        {
          v21 = *(v16 - 7);
          if ( v21 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v21 + 164), 0xFFFFFFFF) == 1 )
            {
              v22 = (struct _EX_RUNDOWN_REF *)(*(v16 - 7) + 8);
              _m_prefetchw(v22);
              v23 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v23 == _InterlockedCompareExchange64((volatile signed __int64 *)v22, v23 + 2, v23)
                || ExfAcquireRundownProtection(v22) )
              {
                v7 = (struct _EX_RUNDOWN_REF *)*(v16 - 7);
              }
            }
          }
        }
        *((_DWORD *)v16 + 6) = 0;
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64(a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  if ( !v17 && (a4 & 1) != 0 )
  {
    v26 = a1[1];
    *(_QWORD *)v35 = 0LL;
    LODWORD(NumberOfBytes) = PreviousMode == 0;
    ExpWnfResolveScopeInstance((signed __int64 *)v35, v26, 0LL, (v33 >> 6) & 0xF, 0LL, NumberOfBytes);
    if ( (int)ExpWnfLookupNameInstance(*(_QWORD *)v35, v33, &v34) >= 0 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v34 + 164), 0xFFFFFFFF) == 1 )
      {
        v7 = (struct _EX_RUNDOWN_REF *)v34;
      }
      else
      {
        v29 = (struct _EX_RUNDOWN_REF *)(v34 + 8);
        _m_prefetchw((const void *)(v34 + 8));
        v30 = v29->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v30 != _InterlockedCompareExchange64((volatile signed __int64 *)v29, v30 - 2, v30) )
          ExfReleaseRundownProtection(v29);
      }
    }
    v27 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)v35 + 8LL);
    _m_prefetchw((const void *)(*(_QWORD *)v35 + 8LL));
    v28 = v27->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)v27, v28 - 2, v28) )
      ExfReleaseRundownProtection(v27);
  }
  if ( v7 )
  {
    ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL);
    _m_prefetchw(&v7[1]);
    v24 = v7[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)&v7[1], v24 - 2, v24) )
      ExfReleaseRundownProtection(v7 + 1);
  }
  return 0LL;
}
