/*
 * XREFs of PspWritePebAffinityInfo @ 0x1404645DC
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspSetupUserProcessAddressSpace @ 0x14046390C (PspSetupUserProcessAddressSpace.c)
 *     PspUpdateSingleProcessAffinity @ 0x14063F640 (PspUpdateSingleProcessAffinity.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeQueryGroupMaskProcess @ 0x14009B4A0 (KeQueryGroupMaskProcess.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

void __fastcall PspWritePebAffinityInfo(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // eax
  __int64 v11; // r8
  int v12; // r9d
  signed __int32 v13[8]; // [rsp+0h] [rbp-98h] BYREF
  int v14; // [rsp+20h] [rbp-78h]
  unsigned int GroupMaskProcess; // [rsp+24h] [rbp-74h]
  unsigned int v16; // [rsp+28h] [rbp-70h]
  __int64 v17; // [rsp+30h] [rbp-68h]
  __int64 v18; // [rsp+38h] [rbp-60h]
  __int64 v19; // [rsp+40h] [rbp-58h]
  __int64 v20; // [rsp+48h] [rbp-50h]
  $D4FCF91253F76F57393CBFE908971F67 v21; // [rsp+50h] [rbp-48h] BYREF

  v19 = a2;
  v3 = 0;
  v14 = 0;
  v4 = *(_QWORD *)(a2 + 1016);
  v17 = v4;
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
  if ( (v3 & 2) == 0 || ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a2 + 736)) )
  {
    if ( (v3 & 1) != 0 )
      KiStackAttachProcess((_KPROCESS *)a2, 0LL, (__int64)&v21);
LABEL_3:
    v5 = 0LL;
    v6 = *(__int64 **)(a2 + 1064);
    if ( v6 )
      v5 = *v6;
    v20 = v5;
    do
    {
      do
      {
        GroupMaskProcess = KeQueryGroupMaskProcess(a2);
        _BitScanForward((unsigned int *)&v8, GroupMaskProcess);
        v16 = v8;
        v9 = *(_QWORD *)(a2 + 8 * v8 + 88);
        v18 = v9;
      }
      while ( !v9 );
      *(_QWORD *)(v4 + 312) = v9;
      if ( v7 )
        *(_DWORD *)(v7 + 192) = v9 | HIDWORD(v9);
      _InterlockedOr(v13, 0);
      v10 = KeQueryGroupMaskProcess(a2);
    }
    while ( v12 != v10 || v11 != *(_QWORD *)(a2 + 8LL * v16 + 88) );
    if ( v3 )
    {
      if ( (v3 & 1) != 0 )
        KiUnstackDetachProcess(&v21, 0LL);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 736));
    }
  }
}
