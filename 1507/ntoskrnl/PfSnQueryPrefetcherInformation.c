/*
 * XREFs of PfSnQueryPrefetcherInformation @ 0x140544AD4
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     PfSnGetCompletedTrace @ 0x140544D6C (PfSnGetCompletedTrace.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnQueryPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  __int64 v8; // r9
  unsigned int v9; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  __int64 v13; // r9
  _OWORD *v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rcx
  __int16 v19; // ax
  _BYTE *v20; // rcx
  _OWORD *v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // [rsp+20h] [rbp-1E8h]
  __int128 v24; // [rsp+30h] [rbp-1D8h]
  _BYTE v25[416]; // [rsp+50h] [rbp-1B8h] BYREF

  v9 = 0;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return (unsigned int)-1073741790;
  if ( a3 != 32 )
  {
    v9 = -1073741820;
    *a5 = 32;
    return v9;
  }
  v23 = *a2;
  v24 = a2[1];
  if ( *(_QWORD *)a2 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v23) == 1 )
    return (unsigned int)PfSnGetCompletedTrace(v24, DWORD2(v24), a5);
  if ( DWORD2(v23) != 2 )
    return (unsigned int)-1073741821;
  if ( DWORD2(v24) != 408 )
    return (unsigned int)-1073741811;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((ULONG_PTR)qword_1403534A8, 0LL, 0LL, v8);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(qword_1403534A8, v12, (ULONG_PTR)qword_1403534A8, v13);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  v14 = v25;
  v15 = &qword_140353310;
  v16 = 3LL;
  v17 = 3LL;
  do
  {
    *v14 = *(_OWORD *)v15;
    v14[1] = *((_OWORD *)v15 + 1);
    v14[2] = *((_OWORD *)v15 + 2);
    v14[3] = *((_OWORD *)v15 + 3);
    v14[4] = *((_OWORD *)v15 + 4);
    v14[5] = *((_OWORD *)v15 + 5);
    v14[6] = *((_OWORD *)v15 + 6);
    v14 += 8;
    *(v14 - 1) = *((_OWORD *)v15 + 7);
    v15 += 16;
    --v17;
  }
  while ( v17 );
  *v14 = *(_OWORD *)v15;
  *((_QWORD *)v14 + 2) = v15[2];
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_1403534A8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_1403534A8);
  KeAbPostRelease((ULONG_PTR)qword_1403534A8);
  v18 = KeGetCurrentThread();
  v19 = v18->KernelApcDisable + 1;
  v18->KernelApcDisable = v19;
  if ( !v19
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v18->ApcState.ApcListHead[0].Flink != &v18->152
    && !v18->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( a4 )
  {
    v20 = (_BYTE *)v24;
    if ( (v24 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)v24 >= MmUserProbeAddress )
      v20 = (_BYTE *)MmUserProbeAddress;
    *v20 = *v20;
    v20[407] = v20[407];
  }
  v21 = (_OWORD *)v24;
  v22 = v25;
  do
  {
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    v21[5] = v22[5];
    v21[6] = v22[6];
    v21 += 8;
    *(v21 - 1) = v22[7];
    v22 += 8;
    --v16;
  }
  while ( v16 );
  *v21 = *v22;
  *((_QWORD *)v21 + 2) = *((_QWORD *)v22 + 2);
  *a5 = 408;
  return v9;
}
