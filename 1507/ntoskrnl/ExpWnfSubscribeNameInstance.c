/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x140503024
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpWnfUpdateSubscription @ 0x140503480 (ExpWnfUpdateSubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        unsigned __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        char a7,
        struct _EX_RUNDOWN_REF **a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        _DWORD *a11)
{
  unsigned __int64 v11; // r14
  unsigned __int64 *v15; // rsi
  __int64 v16; // r9
  __int64 v17; // r14
  int updated; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v20; // r15
  __int64 v21; // r9
  struct _EX_RUNDOWN_REF *v22; // r12
  signed __int64 v23; // r12
  unsigned __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r14
  volatile signed __int64 *v28; // r14
  __int64 v29; // rax
  __int64 v30; // r9
  signed __int8 v31; // cf
  __int64 v32; // rcx
  unsigned __int64 v33; // rtt
  struct _EX_RUNDOWN_REF *v34; // rcx
  unsigned __int64 v35; // rax
  struct _EX_RUNDOWN_REF **v36; // rdx
  struct _EX_RUNDOWN_REF **v37; // rdx
  struct _EX_RUNDOWN_REF *v38; // rax
  signed __int32 v39; // ecx
  int v40; // eax
  __int64 v41; // rdx
  unsigned __int64 v43; // rtt
  int v44; // [rsp+50h] [rbp-30h] BYREF
  int v45; // [rsp+54h] [rbp-2Ch] BYREF
  unsigned __int64 v46; // [rsp+58h] [rbp-28h]
  struct _EX_RUNDOWN_REF *v47; // [rsp+60h] [rbp-20h] BYREF
  struct _EX_RUNDOWN_REF *v48; // [rsp+68h] [rbp-18h]
  __int64 v49; // [rsp+70h] [rbp-10h]
  int v52; // [rsp+D8h] [rbp+58h]

  v52 = a4;
  v11 = a2[2].Affinity.Bitmap[19];
  v46 = v11;
  v44 = 0;
  *a11 = 0;
  v45 = 0;
  if ( a7 == 1 )
  {
    v15 = (unsigned __int64 *)(v11 + 80);
    v17 = KeAbPreAcquire(v11 + 80, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v15, v17, (ULONG_PTR)v15, v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
    updated = ExpWnfUpdateSubscription(a1, v46, a3, a4, a6, (__int64)&v47, (__int64)&v44, (__int64)&v45, (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v15);
    KeAbPostRelease((ULONG_PTR)v15);
    if ( updated >= 0 )
      goto LABEL_49;
    v11 = v46;
  }
  if ( PsInitialSystemProcess == a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v20->Count) = 8915205;
  v20[10].Count = a3;
  v20[11].Count = a4;
  v22 = v20 + 1;
  LODWORD(v20[12].Count) = a5;
  HIDWORD(v20[12].Ptr) = a6;
  v20[1].Count = 0LL;
  v20[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
    {
      v23 = _InterlockedExchangeAdd64(&ExpWnfSubcriptionIdCounter, 1uLL);
      v48 = (struct _EX_RUNDOWN_REF *)(v23 + 1);
    }
    while ( v23 == -1 );
    v22 = v20 + 1;
    if ( a8 )
      *a8 = v48;
  }
  else
  {
    v48 = v20;
    if ( a9 )
      *a9 = v20;
  }
  v24 = (unsigned __int64 *)(v11 + 80);
  v25 = KeAbPreAcquire(v11 + 80, 0LL, 0LL, v21);
  v27 = v25;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
    ExfAcquirePushLockExclusiveEx(v24, v25, (ULONG_PTR)v24, v26);
  if ( v27 )
    *(_BYTE *)(v27 + 26) |= 1u;
  v28 = (volatile signed __int64 *)(a1 + 112);
  v29 = KeAbPreAcquire(a1 + 112, 0LL, 0LL, v26);
  v31 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v32 = v29;
  v49 = v29;
  if ( v31 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v29, a1 + 112, v30);
    v32 = v49;
  }
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(a1, v46, a3, v52, a6, (__int64)&v47, (__int64)&v44, (__int64)&v45, (__int64)a8) < 0 )
    {
      v20[5].Count = (unsigned __int64)a2;
      v20[2].Count = (unsigned __int64)v48;
      v20[6].Count = a1;
      _m_prefetchw(v22);
      v33 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v33 + 2, v33) )
        ExfAcquireRundownProtection(v22);
      if ( a9 )
      {
        _m_prefetchw(v22);
        v43 = v22->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v43 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v43 + 2, v43) )
          ExfAcquireRundownProtection(v22);
      }
      v34 = v20 + 3;
      v35 = v46 + 88;
      v36 = *(struct _EX_RUNDOWN_REF ***)(v46 + 96);
      v20[3].Count = v46 + 88;
      v20[4].Count = (unsigned __int64)v36;
      if ( *v36 != (struct _EX_RUNDOWN_REF *)v35 )
        __fastfail(3u);
      *v36 = v34;
      *(_QWORD *)(v35 + 8) = v34;
      v37 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128);
      v38 = v20 + 8;
      v20[8].Count = a1 + 120;
      v20[9].Count = (unsigned __int64)v37;
      if ( *v37 != (struct _EX_RUNDOWN_REF *)(a1 + 120) )
        __fastfail(3u);
      *v37 = v38;
      *(_QWORD *)(a1 + 128) = v38;
      if ( (BYTE4(v20[12].Ptr) & 1) != 0 )
      {
        v39 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v40 = v44;
        if ( !v39 )
          v40 = 1;
        v44 = v40;
      }
      if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v24);
      KeAbPostRelease((ULONG_PTR)v24);
      *a10 = v20;
      goto LABEL_42;
    }
    if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v24);
    KeAbPostRelease((ULONG_PTR)v24);
    ExFreePoolWithTag(v20, 0x20666E57u);
LABEL_49:
    *a10 = v47;
LABEL_42:
    v41 = 0LL;
    if ( v45 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v41 = 8LL;
    if ( v44 > 0 )
    {
      v41 = (unsigned int)v41 | 2;
    }
    else if ( v44 < 0 )
    {
      v41 = (unsigned int)v41 | 4;
    }
    if ( (_DWORD)v41 )
    {
      ExpWnfNotifyNameSubscribers(a1, v41, 1LL);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v24);
  KeAbPostRelease((ULONG_PTR)v24);
  ExFreePoolWithTag(v20, 0x20666E57u);
  return 3221225524LL;
}
