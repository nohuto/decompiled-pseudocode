/*
 * XREFs of ExpWnfCreateNameInstance @ 0x1405023B4
 * Callers:
 *     NtCreateWnfStateName @ 0x140500CF0 (NtCreateWnfStateName.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x140502CBC (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x1405BDB94 (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1405BF00C (ExpWnfGetPermanentDataStoreHandle.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  unsigned int v6; // eax
  __int64 v8; // rdi
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v10; // rsi
  struct _EX_RUNDOWN_REF *v11; // r12
  __int64 *v12; // r13
  __int64 v13; // r9
  volatile signed __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v19; // r15
  unsigned __int64 v20; // rtt
  bool v21; // r8
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // r9
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r14
  struct _EX_RUNDOWN_REF **v29; // r8
  struct _EX_RUNDOWN_REF *v30; // rdx
  __int64 v32; // r8
  unsigned int v33; // ebx
  unsigned __int64 v34; // rtt
  __int64 v35; // r8
  __int64 v36; // r9
  void *Ptr; // rcx

  v6 = 168;
  if ( *(_QWORD *)(a3 + 8) )
    v6 = 184;
  v8 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v8 != 3 )
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v6, 0x20666E57u);
  else
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6, 0x20666E57u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v10->Count) = 11012355;
  v11 = v10 + 1;
  v10[1].Count = 0LL;
  v10[6].Count = a1;
  v10[5].Count = a2;
  LODWORD(v10[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v10[8].Count = (unsigned __int64)&v10[21];
    *(_OWORD *)&v10[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v12 = (__int64 *)&v10[9];
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16), &v10[9].Count, 1u) < 0 )
  {
    ExFreePoolWithTag(v10, 0x20666E57u);
    return 3221225626LL;
  }
  v10[16].Count = (unsigned __int64)&v10[15];
  v10[15].Count = (unsigned __int64)&v10[15];
  v10[14].Count = 0LL;
  v10[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 )
  {
    if ( (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v8, 1LL, &v10[13]) < 0 )
    {
      v33 = -1073741670;
    }
    else
    {
      v33 = ExpWnfPopulateStateData(v10);
      if ( !v33 )
        goto LABEL_11;
    }
    ObDereferenceSecurityDescriptor(*v12, 1u, v32, v13);
    ExFreePoolWithTag(v10, 0x20666E57u);
    return v33;
  }
LABEL_11:
  v14 = (volatile signed __int64 *)(a1 + 48);
  v15 = KeAbPreAcquire(a1 + 48, 0LL, 0LL, v13);
  v17 = v15;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v15, a1 + 48, v16);
  if ( v17 )
    *(_BYTE *)(v17 + 26) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v19 = StateName;
  if ( StateName )
  {
    _m_prefetchw(&StateName[1]);
    v34 = StateName[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v34 != _InterlockedCompareExchange64((volatile signed __int64 *)&StateName[1], v34 + 2, v34) )
      ExfAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    ObDereferenceSecurityDescriptor(*v12, 1u, v35, v36);
    Ptr = v10[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v10, 0x20666E57u);
    *a5 = v19;
  }
  else
  {
    _m_prefetchw(v11);
    v20 = v11->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)v11, v20 + 2, v20) )
      ExfAcquireRundownProtection(v10 + 1);
    v21 = 0;
    v22 = *(_QWORD **)(a1 + 56);
    if ( v22 )
    {
      while ( 1 )
      {
        if ( v10[5].Count < v22[3] )
        {
          v23 = (_QWORD *)*v22;
          if ( !*v22 )
          {
            v21 = 0;
            break;
          }
        }
        else
        {
          v23 = (_QWORD *)v22[1];
          if ( !v23 )
          {
            v21 = 1;
            break;
          }
        }
        v22 = v23;
      }
    }
    RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v22, v21, (unsigned __int64)&v10[2]);
    if ( (_DWORD)v8 == 3 )
    {
      v10[19].Count = (unsigned __int64)a4;
      v25 = a4[2].Affinity.Bitmap[19];
      v26 = KeAbPreAcquire(v25 + 56, 0LL, 0LL, v24);
      v28 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 56), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 56), v26, v25 + 56, v27);
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v29 = *(struct _EX_RUNDOWN_REF ***)(v25 + 72);
      v30 = v10 + 17;
      v10[17].Count = v25 + 64;
      v10[18].Count = (unsigned __int64)v29;
      if ( *v29 != (struct _EX_RUNDOWN_REF *)(v25 + 64) )
        __fastfail(3u);
      *v29 = v30;
      *(_QWORD *)(v25 + 72) = v30;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 56));
      KeAbPostRelease(v25 + 56);
    }
    if ( (_InterlockedExchangeAdd64(v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v14);
    KeAbPostRelease((ULONG_PTR)v14);
    *a5 = v10;
  }
  return 0LL;
}
