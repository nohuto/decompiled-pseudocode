/*
 * XREFs of PspWritePebAffinityInfo @ 0x1404668C8
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046567C (PspSetupUserProcessAddressSpace.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406C085C (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KeQueryGroupMaskProcess @ 0x1400F08FC (KeQueryGroupMaskProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // r9d
  unsigned __int64 v11; // rtt
  unsigned __int64 v12; // rtt
  signed __int32 v13[8]; // [rsp+0h] [rbp-98h] BYREF
  int v14; // [rsp+20h] [rbp-78h]
  unsigned int v15; // [rsp+24h] [rbp-74h]
  unsigned int GroupMaskProcess; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  _BYTE v21[48]; // [rsp+50h] [rbp-48h] BYREF

  v17 = a2;
  v3 = 0;
  v14 = 0;
  v4 = *(_QWORD *)(a2 + 1016);
  v19 = v4;
  if ( !v4 )
    return;
  if ( !*(_QWORD *)(a2 + 744) )
    goto LABEL_3;
  if ( a2 == *(_QWORD *)(a1 + 184) )
  {
    if ( a2 != *(_QWORD *)(a1 + 544) )
      v3 = 2;
  }
  else
  {
    v3 = 3;
  }
  v14 = v3;
  if ( (v3 & 2) == 0
    || (_m_prefetchw((const void *)(a2 + 736)),
        v11 = *(_QWORD *)(a2 + 736) & 0xFFFFFFFFFFFFFFFEuLL,
        v11 == _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 736), v11 + 2, v11))
    || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 736)) )
  {
    if ( (v3 & 1) != 0 )
      KiStackAttachProcess((_KPROCESS *)a2, 0, (__int64)v21);
LABEL_3:
    v20 = *(_QWORD *)(a2 + 1064);
    do
    {
      do
      {
        GroupMaskProcess = KeQueryGroupMaskProcess(a2);
        _BitScanForward((unsigned int *)&v6, GroupMaskProcess);
        v15 = v6;
        v7 = *(_QWORD *)(a2 + 8 * v6 + 88);
        v18 = v7;
      }
      while ( !v7 );
      *(_QWORD *)(v4 + 312) = v7;
      if ( v5 )
        *(_DWORD *)(v5 + 192) = v7 | HIDWORD(v7);
      _InterlockedOr(v13, 0);
      v8 = KeQueryGroupMaskProcess(a2);
    }
    while ( v10 != v8 || v9 != *(_QWORD *)(a2 + 8LL * v15 + 88) );
    if ( v3 )
    {
      if ( (v3 & 1) != 0 )
        KiUnstackDetachProcess((struct _KTHREAD *)v21, 0);
      _m_prefetchw((const void *)(a2 + 736));
      v12 = *(_QWORD *)(a2 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v12 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 736), v12 - 2, v12) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 736));
    }
  }
}
