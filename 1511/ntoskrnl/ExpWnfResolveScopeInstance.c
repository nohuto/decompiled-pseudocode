/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1403E5698
 * Callers:
 *     NtDeleteWnfStateName @ 0x1403E19C4 (NtDeleteWnfStateName.c)
 *     NtCreateWnfStateName @ 0x1403E262C (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x1403E457C (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x1403E4A00 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1403E4D70 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1404B550C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140548688 (NtDeleteWnfStateData.c)
 * Callees:
 *     RtlLengthSid @ 0x140003E60 (RtlLengthSid.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     PsGetMonitorContextServerSilo @ 0x1400C82E0 (PsGetMonitorContextServerSilo.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1403E5E08 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x1403E5F98 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1404B203C (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1404B2C08 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x1404C23B0 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x140548F0C (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, PSID Sid)
{
  __int64 v5; // r13
  char PreviousMode; // r10
  __int64 v8; // rdx
  volatile signed __int64 *v9; // rsi
  __int64 v10; // r8
  ULONG v11; // edx
  volatile signed __int64 *v12; // r12
  struct _EX_RUNDOWN_REF *v13; // r14
  bool v14; // zf
  int CurrentScopeInstance; // edi
  PVOID PoolWithTag; // rax
  unsigned __int64 *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rdi
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v22; // r15d
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 *v25; // r13
  struct _EX_RUNDOWN_REF *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 *v29; // rdi
  int v30; // [rsp+30h] [rbp-50h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-4Ch] BYREF
  volatile signed __int64 *v32; // [rsp+40h] [rbp-40h] BYREF
  _BYTE *v33; // [rsp+48h] [rbp-38h]
  __int64 v34; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h]
  PVOID v36; // [rsp+68h] [rbp-18h] BYREF
  _BYTE v37[16]; // [rsp+70h] [rbp-10h] BYREF
  int v40; // [rsp+D0h] [rbp+50h]

  v40 = a3;
  v5 = a4;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  if ( !PreviousMode || (v8 = -1LL, a4 == 4) )
    v8 = 0LL;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)v8, &v32);
  v9 = v32;
  if ( !*v32 )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v36);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_16;
    if ( _InterlockedCompareExchange64(v9, (signed __int64)v36, 0LL) )
      ExFreePoolWithTag(v36, 0x20666E57u);
  }
  v34 = *(_QWORD *)(a2 + 1704);
  v10 = v34;
  if ( !v34 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v34);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_16;
    v10 = v34;
  }
  if ( Sid || (v30 = 1, a3) )
    v30 = 0;
  v11 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 4 )
    {
      v12 = (volatile signed __int64 *)(v10 + 8 * ((unsigned int)(v5 - 1) + 4LL));
      goto LABEL_11;
    }
    v12 = (volatile signed __int64 *)(*v32 + 16);
  }
  else
  {
    v12 = (volatile signed __int64 *)(*v32 + 8);
  }
  v30 = 1;
LABEL_11:
  v13 = (struct _EX_RUNDOWN_REF *)*v12;
  *(_QWORD *)&NumberOfBytes[1] = *v12;
  if ( v30 && v13 )
    goto LABEL_13;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v11 = 4;
          goto LABEL_45;
        case 2:
          v11 = RtlLengthSid(Sid);
          goto LABEL_45;
        case 3:
LABEL_45:
          NumberOfBytes[0] = v11;
          v30 = 0;
          goto LABEL_28;
      }
    }
    v11 = 0;
    goto LABEL_45;
  }
  NumberOfBytes[0] = 8;
  v33 = v37;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           a2,
                           v40,
                           v5,
                           (unsigned int)v37,
                           (__int64)NumberOfBytes,
                           (__int64)&v30);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      CurrentScopeInstance = -1073741670;
      goto LABEL_16;
    }
    v33 = PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v40,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)NumberOfBytes,
                             (__int64)&v30);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_16;
  if ( NumberOfBytes[0] )
    Sid = v33;
LABEL_28:
  if ( v30 && v13 )
  {
LABEL_13:
    v14 = ExAcquireRundownProtection(v13 + 1) == 0;
    goto LABEL_14;
  }
  v18 = (unsigned __int64 *)(*v32 + 24 + 24 * v5);
  v19 = *v32 + 32 + 24 * v5;
  v33 = (_BYTE *)v19;
  v20 = KeAbPreAcquire((ULONG_PTR)v18, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v18, v20, (ULONG_PTR)v18);
  if ( v20 )
    *(_BYTE *)(v20 + 26) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v19, Sid, NumberOfBytes[0]);
  v13 = ScopeInstance;
  if ( ScopeInstance )
  {
    v22 = ExAcquireRundownProtection(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v18);
    KeAbPostRelease((ULONG_PTR)v18);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v18, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v18);
    KeAbPostRelease((ULONG_PTR)v18);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], (unsigned int)v5, Sid, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_16;
    v23 = KeAbPreAcquire((ULONG_PTR)v18, 0LL, 0LL);
    v24 = v23;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
      ExfAcquirePushLockExclusiveEx(v18, v23, (ULONG_PTR)v18);
    if ( v24 )
      *(_BYTE *)(v24 + 26) |= 1u;
    v25 = (__int64 *)v33;
    v26 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v33, Sid, NumberOfBytes[0]);
    v13 = v26;
    if ( !v26 )
    {
      v27 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v28 = *v25;
      v29 = (__int64 *)(v27 + 32);
      *v29 = *v25;
      v29[1] = (__int64)v25;
      if ( *(__int64 **)(v28 + 8) != v25 )
        __fastfail(3u);
      *(_QWORD *)(v28 + 8) = v29;
      *v25 = (__int64)v29;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v18);
      KeAbPostRelease((ULONG_PTR)v18);
      if ( v30 )
        _InterlockedCompareExchange64(v12, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v13 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_15;
    }
    v22 = ExAcquireRundownProtection(v26 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v18, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v18);
    KeAbPostRelease((ULONG_PTR)v18);
    ExpWnfFreeScopeInstance(*(_QWORD *)&NumberOfBytes[1], 0LL);
  }
  v14 = v22 == 0;
LABEL_14:
  if ( !v14 )
  {
LABEL_15:
    *a1 = v13;
    CurrentScopeInstance = 0;
    goto LABEL_16;
  }
  CurrentScopeInstance = -1073741772;
LABEL_16:
  PsDereferenceMonitorContextServerSilo((__int64)v32);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
