/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1405013FC
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
 *     memset @ 0x140195A80 (memset.c)
 *     ExpWnfReadStateData @ 0x140502F10 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(unsigned __int64 *a1, _QWORD *a2, int a3, __int64 a4)
{
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r14
  unsigned __int64 *v10; // rax
  unsigned __int64 *i; // r12
  unsigned __int64 *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rtt
  int v15; // r15d
  _QWORD *v16; // rcx
  _OWORD *v17; // rax
  unsigned __int64 v18; // rtt
  unsigned int v19; // r15d
  unsigned __int64 v21; // rdx
  unsigned __int64 **v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rtt
  unsigned __int64 v25; // rtt
  int v26; // [rsp+34h] [rbp-64h]
  unsigned int v27; // [rsp+38h] [rbp-60h]
  int v28; // [rsp+3Ch] [rbp-5Ch] BYREF
  unsigned __int64 v29; // [rsp+40h] [rbp-58h]
  int v31; // [rsp+B0h] [rbp+18h] BYREF
  int v32; // [rsp+B8h] [rbp+20h]

  v32 = -2147483622;
  v26 = 0;
  v31 = 0;
  v27 = a3 - 48;
LABEL_2:
  v6 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, 0LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v6, (ULONG_PTR)(a1 + 10), v5);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0LL, v5);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v7, (ULONG_PTR)(a1 + 13), v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = a1 + 14;
  for ( i = (unsigned __int64 *)a1[14]; i != v10; i = (unsigned __int64 *)*i )
  {
    v12 = i - 13;
    if ( *((_DWORD *)i + 4) != 1 )
      continue;
    v13 = v12[6];
    v29 = v13;
    if ( v13 )
    {
      _m_prefetchw((const void *)(v13 + 8));
      v14 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v14 + 2, v14) )
      {
        v13 &= -(__int64)(ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v13 + 8)) != 0);
        v29 = v13;
      }
    }
    v15 = *((_DWORD *)v12 + 31) & *((_DWORD *)v12 + 25);
    if ( !v13 )
      v15 &= ~1u;
    if ( !v15 )
      goto LABEL_43;
    memset(a2, 0, 0x30uLL);
    v16 = a2;
    a2[1] = v12[7] ^ 0x41C64E6DA3BC0074LL;
    *a2 = v12[2];
    if ( (v15 & 1) == 0 )
      goto LABEL_24;
    v17 = *(_OWORD **)(v13 + 64);
    if ( v17 )
      *(_OWORD *)((char *)a2 + 28) = *v17;
    v26 = ExpWnfReadStateData(v13, &v31, a2 + 6, v27, &v28);
    if ( v26 >= 0 )
    {
      v16 = a2;
      *((_DWORD *)a2 + 4) = v31;
      *((_DWORD *)a2 + 5) = v28;
LABEL_24:
      *((_DWORD *)v16 + 11) = 48;
      *((_DWORD *)v16 + 6) = v15;
    }
    if ( v13 )
    {
      _m_prefetchw((const void *)(v13 + 8));
      v18 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v18 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v18 - 2, v18) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v13 + 8));
      v13 = 0LL;
    }
    if ( v26 >= 0 )
    {
      if ( !v31 )
        v15 &= ~1u;
      if ( v15 )
      {
        *((_DWORD *)v12 + 32) = v15;
        v12[15] = 2LL;
        v19 = 0;
        goto LABEL_34;
      }
LABEL_43:
      i = (unsigned __int64 *)i[1];
      v21 = v12[13];
      v22 = (unsigned __int64 **)v12[14];
      if ( *(unsigned __int64 **)(v21 + 8) != v12 + 13 || *v22 != v12 + 13 )
        __fastfail(3u);
      *v22 = (unsigned __int64 *)v21;
      *(_QWORD *)(v21 + 8) = v22;
      *((_DWORD *)v12 + 30) = 0;
      v23 = *((_DWORD *)v12 + 31);
      *(unsigned __int64 *)((char *)v12 + 124) = 0LL;
      if ( v13 )
      {
        if ( (v23 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v13 + 164), 0xFFFFFFFF) == 1 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)a1 + 13);
          KeAbPostRelease((ULONG_PTR)(a1 + 13));
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)a1 + 10);
          KeAbPostRelease((ULONG_PTR)(a1 + 10));
          ExpWnfNotifyNameSubscribers(v13, 8LL, 1LL);
          _m_prefetchw((const void *)(v13 + 8));
          v24 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v24 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v24 - 2, v24) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v13 + 8));
          goto LABEL_2;
        }
        _m_prefetchw((const void *)(v13 + 8));
        v25 = *(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v25 != _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8), v25 - 2, v25) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v13 + 8));
      }
      goto LABEL_58;
    }
    if ( v32 == -2147483622 )
      v32 = v26;
LABEL_58:
    v10 = a1 + 14;
  }
  v19 = v32;
LABEL_34:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  return v19;
}
