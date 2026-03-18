/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140561FF0
 * Callers:
 *     ExpWnfStartKernelDispatcher @ 0x140561FD8 (ExpWnfStartKernelDispatcher.c)
 *     ExpWnfWorkItemRoutine @ 0x1406FC580 (ExpWnfWorkItemRoutine.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 */

void __fastcall ExpWnfDispatchKernelSubscription(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  volatile signed __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  _QWORD *v9; // r13
  _QWORD *v10; // rbp
  struct _EX_RUNDOWN_REF *v11; // r15
  unsigned __int64 v12; // rtt
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  unsigned __int64 *v15; // r12
  unsigned int v16; // r14d
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rsi
  unsigned __int64 v21; // rtt
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r9
  unsigned __int64 v26; // rtt
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // rsi
  bool v30; // zf
  unsigned __int64 v31; // rtt
  __int64 v32; // r9
  unsigned __int64 v33; // rtt
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rsi
  unsigned __int64 v37; // rtt
  unsigned __int64 v38; // [rsp+38h] [rbp-40h]
  __int64 v39; // [rsp+40h] [rbp-38h] BYREF

  v4 = PsInitialSystemProcess[2].Affinity.Bitmap[19];
  v38 = v4;
  v5 = (volatile signed __int64 *)(v4 + 104);
  v6 = KeAbPreAcquire(v4 + 104, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v4 + 104), v6, v4 + 104, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (_QWORD *)(v4 + 112);
  while ( (_QWORD *)*v9 != v9 )
  {
    v10 = (_QWORD *)*v9;
    v11 = (struct _EX_RUNDOWN_REF *)(*v9 - 96LL);
    _m_prefetchw(v11);
    v12 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v12 + 2, v12) )
      ExfAcquireRundownProtection(v11);
    *((_DWORD *)v10 + 4) = 2;
    v13 = *v10;
    v14 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v14 != v10 )
      __fastfail(3u);
    *v14 = v13;
    v15 = (unsigned __int64 *)(v4 + 80);
    *(_QWORD *)(v13 + 8) = v14;
    do
    {
      while ( 1 )
      {
        v16 = *((_DWORD *)v10 + 5);
        *((_DWORD *)v10 + 5) = 0;
        if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v5);
        KeAbPostRelease((ULONG_PTR)v5);
        v18 = KeAbPreAcquire((ULONG_PTR)v15, 0LL, 0LL, v17);
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 17LL, 0LL) )
          ExfAcquirePushLockSharedEx(v15, v18, (ULONG_PTR)v15, v19);
        if ( v18 )
          *(_BYTE *)(v18 + 26) |= 1u;
        v20 = *(v10 - 7);
        if ( !v20 )
          goto LABEL_51;
        _m_prefetchw((const void *)(v20 + 8));
        v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v21 != _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v21 + 2, v21) )
          v20 &= -(__int64)(ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v20 + 8)) != 0);
        if ( !v20 )
LABEL_51:
          v16 &= ~1u;
        if ( (v16 & 1) != 0 )
        {
          v22 = *(_DWORD *)(v20 + 96);
          if ( v22 <= *((_DWORD *)v10 - 2) )
            v16 &= ~1u;
          else
            *((_DWORD *)v10 - 2) = v22;
        }
        if ( !v16 )
          break;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v15);
        KeAbPostRelease((ULONG_PTR)v15);
        v39 = *(v10 - 6) ^ 0x41C64E6DA3BC0074LL;
        if ( v20 )
          v23 = *(_QWORD *)(v20 + 64);
        else
          v23 = 0LL;
        if ( v20 && (v16 & 1) != 0 )
          v24 = *(unsigned int *)(v20 + 96);
        else
          v24 = 0LL;
        ((void (__fastcall *)(_QWORD *, __int64 *, _QWORD, __int64, __int64, _QWORD))*(v10 - 3))(
          v10 - 13,
          &v39,
          v16,
          v24,
          v23,
          *(v10 - 2));
        if ( (v16 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v20, 8u, 0, 0LL);
        if ( v20 )
        {
          _m_prefetchw((const void *)(v20 + 8));
          v26 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v26 - 2, v26) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v20 + 8));
        }
        v27 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0LL, v25);
        v29 = v27;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v27, (ULONG_PTR)v5, v28);
        if ( v29 )
          *(_BYTE *)(v29 + 26) |= 1u;
        if ( !*((_DWORD *)v10 + 5) )
        {
          *((_DWORD *)v10 + 4) = 0;
          _m_prefetchw(v11);
          v31 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
          v30 = v31 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, v31 - 2, v31);
          goto LABEL_45;
        }
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v15);
      KeAbPostRelease((ULONG_PTR)v15);
      if ( v20 )
      {
        _m_prefetchw((const void *)(v20 + 8));
        v33 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)(v20 + 8), v33 - 2, v33) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v20 + 8));
      }
      v34 = KeAbPreAcquire((ULONG_PTR)v5, 0LL, 0LL, v32);
      v36 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v34, (ULONG_PTR)v5, v35);
      if ( v36 )
        *(_BYTE *)(v36 + 26) |= 1u;
    }
    while ( *((_DWORD *)v10 + 5) );
    *((_DWORD *)v10 + 4) = 0;
    _m_prefetchw(v11);
    v37 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
    v30 = v37 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, v37 - 2, v37);
LABEL_45:
    v4 = v38;
    if ( !v30 )
      ExfReleaseRundownProtection(v11);
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
}
