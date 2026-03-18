/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x1404371A0
 * Callers:
 *     NtCreateWnfStateName @ 0x140500CF0 (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404375D4 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFindScopeInstance @ 0x140504504 (ExpWnfFindScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1405458E0 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x14055A3BC (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x1405C0BB0 (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        PSID Sid,
        SIZE_T NumberOfBytes)
{
  int CurrentScopeInstance; // ebx
  __int64 v9; // r13
  int v10; // r14d
  volatile signed __int64 *v11; // rdi
  __int64 v12; // r9
  __int64 v13; // r8
  PSID v14; // r15
  ULONG v15; // edx
  volatile signed __int64 *v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rsi
  _BYTE *v18; // rdi
  PVOID PoolWithTag; // rax
  unsigned __int64 *v20; // rdi
  unsigned __int64 *v21; // r12
  __int64 v22; // rbx
  __int64 v23; // r9
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  signed __int64 v25; // rsi
  unsigned __int64 v26; // rtt
  unsigned __int64 v27; // rtt
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rbx
  struct _EX_RUNDOWN_REF *v33; // rax
  struct _EX_RUNDOWN_REF *v34; // rcx
  unsigned __int64 v35; // rtt
  unsigned __int64 v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rax
  unsigned __int64 v38; // rtt
  int v39; // [rsp+30h] [rbp-50h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+38h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int64 *v42; // [rsp+50h] [rbp-30h] BYREF
  PVOID v43; // [rsp+58h] [rbp-28h] BYREF
  volatile signed __int64 *v44; // [rsp+60h] [rbp-20h]
  PVOID P; // [rsp+68h] [rbp-18h]
  _BYTE v46[16]; // [rsp+70h] [rbp-10h] BYREF
  int v48; // [rsp+D0h] [rbp+50h]

  v48 = a3;
  CurrentScopeInstance = 0;
  v9 = (int)a4;
  P = 0LL;
  LOBYTE(v10) = 1;
  PsGetMonitorContextServerSilo(ExpWnfSiloMonitor, (_QWORD *)(((NumberOfBytes & 1) != 0) - 1LL), &v42, a4);
  v11 = v42;
  PsDereferenceMonitorContextServerSilo((__int64)v42);
  if ( !*v11 )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v43);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    CurrentScopeInstance = 0;
    if ( _InterlockedCompareExchange64(v11, (signed __int64)v43, 0LL) )
      ExFreePoolWithTag(v43, 0x20666E57u);
  }
  v41 = *(_QWORD *)(a2 + 1696);
  v13 = v41;
  if ( !v41 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v41);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v13 = v41;
    CurrentScopeInstance = 0;
  }
  v14 = Sid;
  if ( Sid || (v39 = 1, a3) )
    v39 = 0;
  v15 = 8;
  if ( (_DWORD)v9 )
  {
    v16 = (volatile signed __int64 *)(v13 + 8 * ((unsigned int)(v9 - 1) + 4LL));
  }
  else
  {
    v39 = 1;
    v16 = (volatile signed __int64 *)(*v42 + 8);
  }
  v17 = (struct _EX_RUNDOWN_REF *)*v16;
  v40 = (struct _EX_RUNDOWN_REF *)*v16;
  v44 = v16;
  if ( v39 && v17 )
    goto LABEL_31;
  if ( Sid )
  {
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        v15 = 4;
      }
      else if ( (_DWORD)v9 == 2 )
      {
        v15 = RtlLengthSid(Sid);
      }
    }
    else
    {
      v15 = 0;
    }
    LODWORD(NumberOfBytes) = v15;
    v39 = 0;
  }
  else
  {
    LODWORD(NumberOfBytes) = 8;
    v18 = v46;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v48,
                             v9,
                             (unsigned int)v46,
                             (__int64)&NumberOfBytes,
                             (__int64)&v39);
    if ( CurrentScopeInstance == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x20666E57u);
      P = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v18 = PoolWithTag;
      CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                               a2,
                               v48,
                               v9,
                               (_DWORD)PoolWithTag,
                               (__int64)&NumberOfBytes,
                               (__int64)&v39);
    }
    if ( CurrentScopeInstance < 0 )
      goto LABEL_34;
    CurrentScopeInstance = 0;
    if ( (_DWORD)NumberOfBytes )
      v14 = v18;
  }
  if ( v39 && v17 )
  {
LABEL_31:
    _m_prefetchw(&v17[1]);
    v27 = v17[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v27 != _InterlockedCompareExchange64((volatile signed __int64 *)&v17[1], v27 + 2, v27)
      && !ExfAcquireRundownProtection(v17 + 1) )
    {
      goto LABEL_68;
    }
LABEL_32:
    v25 = (signed __int64)v40;
    goto LABEL_33;
  }
  v20 = (unsigned __int64 *)(*v42 + 16 + 24 * v9);
  v21 = (unsigned __int64 *)(*v42 + 24 + 24 * v9);
  v22 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0LL, v12);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v20, v22, (ULONG_PTR)v20, v23);
  if ( v22 )
    *(_BYTE *)(v22 + 26) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v21, v14, (unsigned int)NumberOfBytes);
  CurrentScopeInstance = 0;
  v25 = (signed __int64)ScopeInstance;
  if ( ScopeInstance )
  {
    _m_prefetchw(&ScopeInstance[1]);
    v26 = ScopeInstance[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v26 != _InterlockedCompareExchange64((volatile signed __int64 *)&ScopeInstance[1], v26 + 2, v26) )
      LOBYTE(v10) = ExfAcquireRundownProtection(ScopeInstance + 1);
    v10 = (unsigned __int8)v10;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    goto LABEL_28;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v20, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v20);
  KeAbPostRelease((ULONG_PTR)v20);
  CurrentScopeInstance = ExpWnfAllocateScopeInstance(&v40, (unsigned int)v9, v14, (unsigned int)NumberOfBytes);
  if ( CurrentScopeInstance < 0 )
    goto LABEL_34;
  v30 = KeAbPreAcquire((ULONG_PTR)v20, 0LL, 0LL, v29);
  v32 = v30;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v20, 0LL) )
    ExfAcquirePushLockExclusiveEx(v20, v30, (ULONG_PTR)v20, v31);
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  v33 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v21, v14, (unsigned int)NumberOfBytes);
  CurrentScopeInstance = 0;
  v25 = (signed __int64)v33;
  if ( !v33 )
  {
    v34 = v40 + 1;
    _m_prefetchw(&v40[1]);
    v35 = v34->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v35 != _InterlockedCompareExchange64((volatile signed __int64 *)v34, v35 + 2, v35) )
      ExfAcquireRundownProtection(v34);
    v36 = *v21;
    v37 = v40 + 4;
    v40[4].Count = *v21;
    v37[1].Count = (unsigned __int64)v21;
    if ( *(unsigned __int64 **)(v36 + 8) != v21 )
      __fastfail(3u);
    *(_QWORD *)(v36 + 8) = v37;
    *v21 = (unsigned __int64)v37;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v20);
    KeAbPostRelease((ULONG_PTR)v20);
    if ( v39 )
    {
      _InterlockedCompareExchange64(v44, (signed __int64)v40, 0LL);
      v25 = (signed __int64)v40;
      goto LABEL_33;
    }
    goto LABEL_32;
  }
  _m_prefetchw(&v33[1]);
  v38 = v33[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)&v33[1], v38 + 2, v38) )
    LOBYTE(v10) = ExfAcquireRundownProtection(v33 + 1);
  v10 = (unsigned __int8)v10;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v20, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v20);
  KeAbPostRelease((ULONG_PTR)v20);
  ExpWnfFreeScopeInstance(v40, 0LL);
LABEL_28:
  if ( v10 )
  {
    v40 = (struct _EX_RUNDOWN_REF *)v25;
LABEL_33:
    *a1 = v25;
    goto LABEL_34;
  }
LABEL_68:
  CurrentScopeInstance = -1073741772;
LABEL_34:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
