/*
 * XREFs of ExpWnfDeleteNameInstance @ 0x1404AE36C
 * Callers:
 *     ExpWnfDeleteProcessContext @ 0x1404AD754 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteNameInstanceCallback @ 0x1404ADF70 (ExpWnfDeleteNameInstanceCallback.c)
 *     NtDeleteWnfStateName @ 0x1404ADFA4 (NtDeleteWnfStateName.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExWaitForRundownProtectionRelease @ 0x140074DB4 (ExWaitForRundownProtectionRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfDeleteStateData @ 0x1404AE6B4 (ExpWnfDeleteStateData.c)
 */

__int64 __fastcall ExpWnfDeleteNameInstance(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  _BYTE *v7; // rax
  _BYTE *v8; // rbx
  volatile signed __int64 *v9; // rdi
  _BYTE *v10; // rax
  _BYTE *v11; // rbx
  _BYTE *v12; // rax
  _BYTE *v13; // rsi
  struct _EX_RUNDOWN_REF *v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 *v16; // rdi
  _BYTE *v17; // rax
  _BYTE *v18; // rsi
  unsigned __int64 v19; // rdx
  struct _EX_RUNDOWN_REF **v20; // rcx
  struct _EX_RUNDOWN_REF *Count; // r12
  unsigned __int64 v23; // rsi
  unsigned __int64 *v24; // rsi
  _BYTE *v25; // rax
  _BYTE *v26; // r13
  _BYTE *v27; // rax
  _BYTE *v28; // r13
  unsigned __int64 v29; // rdx
  struct _EX_RUNDOWN_REF **v30; // rcx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = (_BYTE *)KeAbPreAcquire(a1 + 48, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v7, (ULONG_PTR)v3);
  if ( v8 )
    v8[26] |= 1u;
  if ( a2[6].Count )
  {
    v9 = (volatile signed __int64 *)&a2[14];
    v10 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v10, (ULONG_PTR)&a2[14]);
    if ( v11 )
      v11[26] |= 1u;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), (__int64)&a2[2]);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      ExfAcquirePushLockExclusiveEx(&a2[14].Count, v12, (ULONG_PTR)&a2[14]);
    if ( v13 )
      v13[26] |= 1u;
    while ( 1 )
    {
      v14 = a2 + 15;
      if ( (struct _EX_RUNDOWN_REF *)v14->Count == v14 )
        break;
      Count = (struct _EX_RUNDOWN_REF *)v14->Count;
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v14->Count - 56));
      v23 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
      KeAbPostRelease((ULONG_PTR)&a2[14]);
      v24 = (unsigned __int64 *)(*(_QWORD *)(v23 + 1720) + 80LL);
      v25 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v24, 0LL, 0);
      v26 = v25;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
        ExfAcquirePushLockExclusiveEx(v24, v25, (ULONG_PTR)v24);
      if ( v26 )
        v26[26] |= 1u;
      v27 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&a2[14], 0LL, 0);
      v28 = v27;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        ExfAcquirePushLockExclusiveEx(&a2[14].Count, v27, (ULONG_PTR)&a2[14]);
      if ( v28 )
        v28[26] |= 1u;
      if ( Count[-2].Count )
      {
        v29 = Count->Count;
        v30 = (struct _EX_RUNDOWN_REF **)Count[1].Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count || *v30 != Count )
          __fastfail(3u);
        *v30 = (struct _EX_RUNDOWN_REF *)v29;
        *(_QWORD *)(v29 + 8) = v30;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v24);
      KeAbPostRelease((ULONG_PTR)v24);
      ExReleaseRundownProtection(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&a2[14]);
    KeAbPostRelease((ULONG_PTR)&a2[14]);
    v15 = a2[19].Count;
    if ( v15 )
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(v15 + 1720) + 56LL);
      v17 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v16, 0LL, 0);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        ExfAcquirePushLockExclusiveEx(v16, v17, (ULONG_PTR)v16);
      if ( v18 )
        v18[26] |= 1u;
      v19 = a2[17].Count;
      v20 = (struct _EX_RUNDOWN_REF **)a2[18].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &a2[17] || *v20 != &a2[17] )
        __fastfail(3u);
      *v20 = (struct _EX_RUNDOWN_REF *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v16);
      KeAbPostRelease((ULONG_PTR)v16);
    }
    ExReleaseRundownProtection(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    ExpWnfDeleteStateData(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v3);
    KeAbPostRelease((ULONG_PTR)v3);
    return 0LL;
  }
}
