/*
 * XREFs of ExpWnfDeliverThreadNotifications @ 0x1404601D4
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x140460090 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExpWnfReadStateData @ 0x140461E70 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfDeliverThreadNotifications(unsigned __int64 *a1, _QWORD *a2, int a3)
{
  __int64 v4; // r14
  _BYTE *v5; // rax
  _BYTE *v6; // r14
  unsigned __int64 *v7; // rax
  unsigned __int64 *i; // r12
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rsi
  int v11; // r15d
  _QWORD *v12; // rcx
  _OWORD *v13; // rax
  unsigned int v14; // r15d
  unsigned __int64 v16; // rdx
  unsigned __int64 **v17; // rcx
  int v18; // eax
  int v19; // [rsp+34h] [rbp-54h]
  unsigned int v20; // [rsp+38h] [rbp-50h]
  int v21; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned __int64 v22; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+A0h] [rbp+18h] BYREF
  int v25; // [rsp+A8h] [rbp+20h]

  v25 = -2147483622;
  v19 = 0;
  v24 = 0;
  v20 = a3 - 48;
LABEL_2:
  v4 = KeAbPreAcquire((ULONG_PTR)(a1 + 10), 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, v4, (ULONG_PTR)(a1 + 10));
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 13), 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v5, (ULONG_PTR)(a1 + 13));
  if ( v6 )
    v6[26] |= 1u;
  v7 = a1 + 14;
  for ( i = (unsigned __int64 *)a1[14]; i != v7; i = (unsigned __int64 *)*i )
  {
    v9 = i - 13;
    if ( *((_DWORD *)i + 4) != 1 )
      continue;
    v10 = v9[6];
    v22 = v10;
    if ( v10 )
    {
      v10 &= -(__int64)(ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v10 + 8)) != 0);
      v22 = v10;
    }
    v11 = *((_DWORD *)v9 + 31) & *((_DWORD *)v9 + 25);
    if ( !v10 )
      v11 &= ~1u;
    if ( !v11 )
      goto LABEL_40;
    memset(a2, 0, 0x30uLL);
    v12 = a2;
    a2[1] = v9[7] ^ 0x41C64E6DA3BC0074LL;
    *a2 = v9[2];
    if ( (v11 & 1) == 0 )
      goto LABEL_23;
    v13 = *(_OWORD **)(v10 + 64);
    if ( v13 )
      *(_OWORD *)((char *)a2 + 28) = *v13;
    v19 = ExpWnfReadStateData(v10, &v24, a2 + 6, v20, &v21);
    if ( v19 >= 0 )
    {
      v12 = a2;
      *((_DWORD *)a2 + 4) = v24;
      *((_DWORD *)a2 + 5) = v21;
LABEL_23:
      *((_DWORD *)v12 + 11) = 48;
      *((_DWORD *)v12 + 6) = v11;
    }
    if ( v10 )
    {
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 8));
      v10 = 0LL;
    }
    if ( v19 >= 0 )
    {
      if ( !v24 )
        v11 &= ~1u;
      if ( v11 )
      {
        *((_DWORD *)v9 + 32) = v11;
        v9[15] = 2LL;
        v14 = 0;
        goto LABEL_31;
      }
LABEL_40:
      i = (unsigned __int64 *)i[1];
      v16 = v9[13];
      v17 = (unsigned __int64 **)v9[14];
      if ( *(unsigned __int64 **)(v16 + 8) != v9 + 13 || *v17 != v9 + 13 )
        __fastfail(3u);
      *v17 = (unsigned __int64 *)v16;
      *(_QWORD *)(v16 + 8) = v17;
      *((_DWORD *)v9 + 30) = 0;
      v18 = *((_DWORD *)v9 + 31);
      *(unsigned __int64 *)((char *)v9 + 124) = 0LL;
      if ( v10 )
      {
        if ( (v18 & 1) != 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 164), 0xFFFFFFFF) == 1 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)a1 + 13);
          KeAbPostRelease((ULONG_PTR)(a1 + 13));
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)a1 + 10);
          KeAbPostRelease((ULONG_PTR)(a1 + 10));
          ExpWnfNotifyNameSubscribers(v10, 8LL, 1LL);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 8));
          goto LABEL_2;
        }
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v10 + 8));
      }
      goto LABEL_52;
    }
    if ( v25 == -2147483622 )
      v25 = v19;
LABEL_52:
    v7 = a1 + 14;
  }
  v14 = v25;
LABEL_31:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)a1 + 13);
  KeAbPostRelease((ULONG_PTR)(a1 + 13));
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)a1 + 10);
  KeAbPostRelease((ULONG_PTR)(a1 + 10));
  return v14;
}
