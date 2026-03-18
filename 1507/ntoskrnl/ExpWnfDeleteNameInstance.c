/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x14053F340
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x14053EEA4 (ExpWnfDeleteNameInstanceCallback.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlAvlRemoveNode @ 0x14008CBF0 (RtlAvlRemoveNode.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x14053F6E0 (ExpWnfDeleteStateData.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3, __int64 a4)
{
  unsigned __int64 *v4; // rsi
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbx
  volatile signed __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rsi
  struct _EX_RUNDOWN_REF *v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  struct _EX_RUNDOWN_REF **v27; // rcx
  unsigned __int64 v28; // rtt
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *Count; // r13
  struct _EX_RUNDOWN_REF *v34; // rsi
  unsigned __int64 v35; // rtt
  __int64 v36; // r14
  unsigned __int64 *v37; // r12
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // r9
  __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  _QWORD *v46; // rcx
  unsigned __int64 v47; // rtt

  v4 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, a4);
  v10 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (ULONG_PTR)v4, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a2[6].Count )
  {
    v11 = (volatile signed __int64 *)&a2[14];
    v12 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0LL, v9);
    v14 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v12, (ULONG_PTR)&a2[14], v13);
    if ( v14 )
      *(_BYTE *)(v14 + 26) |= 1u;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    v16 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0LL, v15);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v16, (ULONG_PTR)&a2[14], v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
LABEL_20:
    v19 = a2 + 15;
    while ( (struct _EX_RUNDOWN_REF *)v19->Count != v19 )
    {
      Count = (_QWORD *)v19->Count;
      v34 = (struct _EX_RUNDOWN_REF *)(v19->Count - 56);
      _m_prefetchw(v34);
      v35 = v34->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v34, v35 + 2, v35) )
        ExfAcquireRundownProtection(v34);
      v36 = *(Count - 3);
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v37 = (unsigned __int64 *)(*(_QWORD *)(v36 + 1696) + 80LL);
      v39 = KeAbPreAcquire((ULONG_PTR)v37, 0LL, 0LL, v38);
      v41 = v39;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v37, 0LL) )
        ExfAcquirePushLockExclusiveEx(v37, v39, (ULONG_PTR)v37, v40);
      if ( v41 )
        *(_BYTE *)(v41 + 26) |= 1u;
      v42 = KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0LL, v40);
      v44 = v42;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v42, (ULONG_PTR)&a2[14], v43);
      if ( v44 )
        *(_BYTE *)(v44 + 26) |= 1u;
      if ( *(Count - 2) )
      {
        v45 = *Count;
        v46 = (_QWORD *)Count[1];
        if ( *(_QWORD **)(*Count + 8LL) != Count || (_QWORD *)*v46 != Count )
          __fastfail(3u);
        *v46 = v45;
        *(_QWORD *)(v45 + 8) = v46;
        *(Count - 2) = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v37, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v37);
      KeAbPostRelease((ULONG_PTR)v37);
      _m_prefetchw(v34);
      v47 = v34->Count & 0xFFFFFFFFFFFFFFFEuLL;
      v19 = a2 + 15;
      if ( v47 != _InterlockedCompareExchange64((volatile signed __int64 *)v34, v47 - 2, v47) )
      {
        ExfReleaseRundownProtection(v34);
        goto LABEL_20;
      }
    }
    if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v21 = a2[19].Count;
    if ( v21 )
    {
      v22 = (unsigned __int64 *)(*(_QWORD *)(v21 + 1696) + 56LL);
      v23 = KeAbPreAcquire((ULONG_PTR)v22, 0LL, 0LL, v20);
      v25 = v23;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
        ExfAcquirePushLockExclusiveEx(v22, v23, (ULONG_PTR)v22, v24);
      if ( v25 )
        *(_BYTE *)(v25 + 26) |= 1u;
      v26 = a2[17].Count;
      v27 = (struct _EX_RUNDOWN_REF **)a2[18].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v26 + 8) != &a2[17] || *v27 != &a2[17] )
        __fastfail(3u);
      *v27 = (struct _EX_RUNDOWN_REF *)v26;
      *(_QWORD *)(v26 + 8) = v27;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v22, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v22);
      KeAbPostRelease((ULONG_PTR)v22);
    }
    _m_prefetchw(&a2[1]);
    v28 = a2[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[1], v28 - 2, v28) )
      ExfReleaseRundownProtection(a2 + 1);
    v29 = _InterlockedCompareExchange64((volatile signed __int64 *)&a2[1], 1LL, 0LL);
    if ( v29 >= 2 )
      ExfWaitForRundownProtectionRelease((volatile signed __int64 *)&a2[1], v29);
    ExpWnfDeleteStateData(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u, v30, v31);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((ULONG_PTR)v4);
    return 0LL;
  }
}
