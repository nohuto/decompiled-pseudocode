/*
 * XREFs of ExpWnfResolveScopeInstance @ 0x140461888
 * Callers:
 *     NtCreateWnfStateName @ 0x1403F5A04 (NtCreateWnfStateName.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140460484 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1404ADFA4 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14057CF64 (NtDeleteWnfStateData.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExpWnfGetHostSiloContext @ 0x140462BB8 (ExpWnfGetHostSiloContext.c)
 *     ExpWnfFindScopeInstance @ 0x1404638C0 (ExpWnfFindScopeInstance.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x140463930 (ExpWnfGetCurrentScopeInstance.c)
 *     ExpWnfFreeScopeInstance @ 0x1404ADED0 (ExpWnfFreeScopeInstance.c)
 *     ExpWnfCreateProcessContext @ 0x1404BB634 (ExpWnfCreateProcessContext.c)
 *     ExpWnfAllocateScopeInstance @ 0x1404CF2F0 (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfAllocateScopeMap @ 0x14057DEE4 (ExpWnfAllocateScopeMap.c)
 */

__int64 __fastcall ExpWnfResolveScopeInstance(struct _EX_RUNDOWN_REF **a1, __int64 a2, __int64 a3, int a4, PSID Sid)
{
  __int64 v5; // r13
  volatile signed __int64 *HostSiloContext; // rdi
  __int64 v9; // r8
  ULONG v10; // edx
  volatile signed __int64 *v11; // r15
  struct _EX_RUNDOWN_REF *v12; // rsi
  bool v13; // zf
  int CurrentScopeInstance; // ebx
  __int64 v16; // r12
  unsigned __int64 *v17; // rdi
  __int64 v18; // rbx
  struct _EX_RUNDOWN_REF *ScopeInstance; // rax
  int v20; // r14d
  PVOID PoolWithTag; // rax
  _BYTE *v22; // rax
  _BYTE *v23; // rbx
  struct _EX_RUNDOWN_REF *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  _QWORD *v27; // rbx
  int v28; // [rsp+30h] [rbp-40h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v30; // [rsp+40h] [rbp-30h] BYREF
  PVOID v31; // [rsp+48h] [rbp-28h] BYREF
  _BYTE *v32; // [rsp+50h] [rbp-20h]
  PVOID P; // [rsp+58h] [rbp-18h]
  _BYTE v34[16]; // [rsp+60h] [rbp-10h] BYREF
  int v36; // [rsp+C0h] [rbp+50h]

  v36 = a3;
  v5 = a4;
  P = 0LL;
  if ( !KeGetCurrentThread()->PreviousMode || a4 == 4 )
    HostSiloContext = (volatile signed __int64 *)ExpWnfGetHostSiloContext();
  else
    HostSiloContext = (volatile signed __int64 *)((char *)PsGetCurrentServerSiloGlobals() + 888);
  if ( !*HostSiloContext )
  {
    CurrentScopeInstance = ExpWnfAllocateScopeMap(&v31);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    if ( _InterlockedCompareExchange64(HostSiloContext, (signed __int64)v31, 0LL) )
      ExFreePoolWithTag(v31, 0x20666E57u);
  }
  v30 = *(_QWORD *)(a2 + 1720);
  v9 = v30;
  if ( !v30 )
  {
    CurrentScopeInstance = ExpWnfCreateProcessContext(a2, &v30);
    if ( CurrentScopeInstance < 0 )
      return (unsigned int)CurrentScopeInstance;
    v9 = v30;
  }
  if ( Sid || (v28 = 1, a3) )
    v28 = 0;
  v10 = 8;
  if ( (_DWORD)v5 )
  {
    if ( (_DWORD)v5 != 4 )
    {
      v11 = (volatile signed __int64 *)(v9 + 8 * ((unsigned int)(v5 - 1) + 4LL));
      goto LABEL_12;
    }
    v11 = (volatile signed __int64 *)(*HostSiloContext + 16);
  }
  else
  {
    v11 = (volatile signed __int64 *)(*HostSiloContext + 8);
  }
  v28 = 1;
LABEL_12:
  v12 = (struct _EX_RUNDOWN_REF *)*v11;
  *(_QWORD *)&NumberOfBytes[1] = *v11;
  if ( v28 && v12 )
    goto LABEL_14;
  if ( Sid )
  {
    if ( (_DWORD)v5 )
    {
      switch ( (_DWORD)v5 )
      {
        case 1:
          v10 = 4;
          goto LABEL_44;
        case 2:
          v10 = RtlLengthSid(Sid);
          goto LABEL_44;
        case 3:
LABEL_44:
          NumberOfBytes[0] = v10;
          v28 = 0;
          goto LABEL_28;
      }
    }
    v10 = 0;
    goto LABEL_44;
  }
  NumberOfBytes[0] = 8;
  v32 = v34;
  CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                           a2,
                           v36,
                           v5,
                           (unsigned int)v34,
                           (__int64)NumberOfBytes,
                           (__int64)&v28);
  if ( CurrentScopeInstance == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20666E57u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v32 = PoolWithTag;
    CurrentScopeInstance = ExpWnfGetCurrentScopeInstance(
                             a2,
                             v36,
                             v5,
                             (_DWORD)PoolWithTag,
                             (__int64)NumberOfBytes,
                             (__int64)&v28);
  }
  if ( CurrentScopeInstance < 0 )
    goto LABEL_17;
  if ( NumberOfBytes[0] )
    Sid = v32;
LABEL_28:
  if ( v28 && v12 )
  {
LABEL_14:
    v13 = ExAcquireRundownProtection(v12 + 1) == 0;
    goto LABEL_15;
  }
  v16 = *HostSiloContext + 8 * (2 * v5 + v5 + 4);
  v17 = (unsigned __int64 *)(*HostSiloContext + 8 * (v5 + 2 * v5 + 3));
  v18 = KeAbPreAcquire((ULONG_PTR)v17, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v17, v18, (ULONG_PTR)v17);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  ScopeInstance = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v16, Sid, NumberOfBytes[0]);
  v12 = ScopeInstance;
  if ( ScopeInstance )
  {
    v20 = ExAcquireRundownProtection(ScopeInstance + 1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17);
    KeAbPostRelease((ULONG_PTR)v17);
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v17, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v17);
    KeAbPostRelease((ULONG_PTR)v17);
    CurrentScopeInstance = ExpWnfAllocateScopeInstance(&NumberOfBytes[1], (unsigned int)v5, Sid, NumberOfBytes[0]);
    if ( CurrentScopeInstance < 0 )
      goto LABEL_17;
    v22 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v17, 0LL, 0);
    v23 = v22;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v17, 0LL) )
      ExfAcquirePushLockExclusiveEx(v17, v22, (ULONG_PTR)v17);
    if ( v23 )
      v23[26] |= 1u;
    v24 = (struct _EX_RUNDOWN_REF *)ExpWnfFindScopeInstance(v16, Sid, NumberOfBytes[0]);
    v12 = v24;
    if ( !v24 )
    {
      v25 = *(_QWORD *)&NumberOfBytes[1];
      ExAcquireRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)&NumberOfBytes[1] + 8LL));
      v26 = *(_QWORD *)v16;
      v27 = (_QWORD *)(v25 + 32);
      if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
        __fastfail(3u);
      *v27 = v26;
      v27[1] = v16;
      *(_QWORD *)(v26 + 8) = v27;
      *(_QWORD *)v16 = v27;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v17);
      KeAbPostRelease((ULONG_PTR)v17);
      if ( v28 )
        _InterlockedCompareExchange64(v11, *(signed __int64 *)&NumberOfBytes[1], 0LL);
      v12 = *(struct _EX_RUNDOWN_REF **)&NumberOfBytes[1];
      goto LABEL_16;
    }
    v20 = ExAcquireRundownProtection(v24 + 1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v17, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v17);
    KeAbPostRelease((ULONG_PTR)v17);
    ExpWnfFreeScopeInstance(*(_QWORD *)&NumberOfBytes[1], 0LL);
  }
  v13 = v20 == 0;
LABEL_15:
  if ( !v13 )
  {
LABEL_16:
    CurrentScopeInstance = 0;
    *a1 = v12;
    goto LABEL_17;
  }
  CurrentScopeInstance = -1073741772;
LABEL_17:
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  return (unsigned int)CurrentScopeInstance;
}
