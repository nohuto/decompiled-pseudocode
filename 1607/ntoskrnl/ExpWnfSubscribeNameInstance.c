/*
 * XREFs of ExpWnfSubscribeNameInstance @ 0x1404625B4
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfUpdateSubscription @ 0x1404629E4 (ExpWnfUpdateSubscription.c)
 */

__int64 __fastcall ExpWnfSubscribeNameInstance(
        __int64 a1,
        struct _KPROCESS *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        char a7,
        signed __int64 *a8,
        struct _EX_RUNDOWN_REF **a9,
        struct _EX_RUNDOWN_REF **a10,
        _DWORD *a11)
{
  struct _SINGLE_LIST_ENTRY *Next; // r12
  unsigned int v12; // edi
  __int64 v15; // r14
  int updated; // r14d
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v18; // rsi
  signed __int64 v19; // r12
  unsigned __int64 *v20; // r14
  _BYTE *v21; // rax
  _BYTE *v22; // r15
  volatile signed __int64 *v23; // r15
  _BYTE *v24; // rax
  signed __int8 v25; // cf
  _BYTE *v26; // rcx
  struct _EX_RUNDOWN_REF *v27; // rcx
  struct _SINGLE_LIST_ENTRY *v28; // rax
  struct _SINGLE_LIST_ENTRY **p_Next; // rdx
  struct _EX_RUNDOWN_REF **v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rax
  signed __int32 v32; // ecx
  int v33; // eax
  unsigned int v34; // edx
  int v36; // [rsp+50h] [rbp-20h] BYREF
  int v37; // [rsp+54h] [rbp-1Ch] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+58h] [rbp-18h] BYREF
  struct _SINGLE_LIST_ENTRY *v39; // [rsp+60h] [rbp-10h]
  _BYTE *v40; // [rsp+68h] [rbp-8h]

  Next = a2[2].SwapListEntry.Next;
  v12 = 0;
  v39 = Next;
  v36 = 0;
  *a11 = 0;
  v37 = 0;
  if ( a7 == 1 )
  {
    v15 = KeAbPreAcquire((ULONG_PTR)&Next[10], 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((unsigned __int64 *)&Next[10], v15, (ULONG_PTR)&Next[10]);
    if ( v15 )
      *(_BYTE *)(v15 + 26) |= 1u;
    updated = ExpWnfUpdateSubscription(
                a1,
                (_DWORD)Next,
                a3,
                a4,
                a6,
                (__int64)&v38,
                (__int64)&v36,
                (__int64)&v37,
                (__int64)a8);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Next[10], 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&Next[10]);
    KeAbPostRelease((ULONG_PTR)&Next[10]);
    if ( updated >= 0 )
      goto LABEL_47;
  }
  if ( PsInitialSystemProcess == a2 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x88uLL, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x88uLL, 0x20666E57u);
  v18 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x88uLL);
  LODWORD(v18->Count) = 8915205;
  v18[10].Count = a3;
  v18[11].Count = a4;
  LODWORD(v18[12].Count) = a5;
  HIDWORD(v18[12].Ptr) = a6;
  v18[1].Count = 0LL;
  v18[7].Count = *(unsigned __int64 *)(a1 + 40);
  if ( a7 )
  {
    do
      v19 = _InterlockedIncrement64(&ExpWnfSubcriptionIdCounter);
    while ( !v19 );
    if ( a8 )
      *a8 = v19;
  }
  else
  {
    v19 = (signed __int64)v18;
    if ( a9 )
      *a9 = v18;
  }
  v20 = (unsigned __int64 *)&v39[10];
  v21 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&v39[10], 0LL, 0);
  v22 = v21;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
    ExfAcquirePushLockExclusiveEx(v20, v21, (ULONG_PTR)v20);
  if ( v22 )
    v22[26] |= 1u;
  v23 = (volatile signed __int64 *)(a1 + 112);
  v24 = (_BYTE *)KeAbPreAcquire(a1 + 112, 0LL, 0);
  v25 = _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL);
  v26 = v24;
  v40 = v24;
  if ( v25 )
  {
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v24, a1 + 112);
    v26 = v40;
  }
  if ( v26 )
    v26[26] |= 1u;
  if ( *(_QWORD *)(a1 + 48) )
  {
    if ( a7 != 1
      || (int)ExpWnfUpdateSubscription(
                a1,
                (_DWORD)v39,
                a3,
                a4,
                a6,
                (__int64)&v38,
                (__int64)&v36,
                (__int64)&v37,
                (__int64)a8) < 0 )
    {
      v18[5].Count = (unsigned __int64)a2;
      v18[6].Count = a1;
      v18[2].Count = v19;
      ExAcquireRundownProtection(v18 + 1);
      if ( a9 )
        ExAcquireRundownProtection(v18 + 1);
      v27 = v18 + 3;
      v28 = v39 + 11;
      p_Next = &v39[12].Next->Next;
      if ( *p_Next != &v39[11] )
        __fastfail(3u);
      v27->Count = (unsigned __int64)v28;
      v18[4].Count = (unsigned __int64)p_Next;
      *p_Next = (struct _SINGLE_LIST_ENTRY *)v27;
      v28[1].Next = (struct _SINGLE_LIST_ENTRY *)v27;
      v30 = *(struct _EX_RUNDOWN_REF ***)(a1 + 128);
      v31 = v18 + 8;
      if ( *v30 != (struct _EX_RUNDOWN_REF *)(a1 + 120) )
        __fastfail(3u);
      v31->Count = a1 + 120;
      v18[9].Count = (unsigned __int64)v30;
      *v30 = v31;
      *(_QWORD *)(a1 + 128) = v31;
      if ( (BYTE4(v18[12].Ptr) & 1) != 0 )
      {
        v32 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 1u);
        v33 = v36;
        if ( !v32 )
          v33 = 1;
        v36 = v33;
      }
      if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v20);
      KeAbPostRelease((ULONG_PTR)v20);
      *a10 = v18;
      goto LABEL_40;
    }
    if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    ExFreePoolWithTag(v18, 0x20666E57u);
LABEL_47:
    *a10 = v38;
LABEL_40:
    v34 = 0;
    if ( v37 < 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 164), 0xFFFFFFFF) == 1 )
      v34 = 8;
    if ( v36 > 0 )
    {
      v34 |= 2u;
    }
    else if ( v36 < 0 )
    {
      v34 |= 4u;
    }
    if ( v34 )
    {
      LOBYTE(v12) = a7 != 0;
      ExpWnfNotifyNameSubscribers(a1, v34, 1, v12);
      *a11 = 1;
    }
    return 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
  KeAbPostRelease(a1 + 112);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20);
  KeAbPostRelease((ULONG_PTR)v20);
  ExFreePoolWithTag(v18, 0x20666E57u);
  return 3221225524LL;
}
