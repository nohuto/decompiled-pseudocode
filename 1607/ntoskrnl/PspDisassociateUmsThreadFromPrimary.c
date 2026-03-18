/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x140682394
 * Callers:
 *     PspUmsUnInitThread @ 0x14067F6FC (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x14068269C (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140014190 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14008C540 (ObReferenceObjectSafe.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F490C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     __chkstk @ 0x140167650 (__chkstk.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1401DCA0C (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1401DCA24 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x1401DCA64 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1406505D0 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x14065074C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x140650E58 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x1406519E4 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14067F550 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x140682898 (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(__int64 a1, __int64 a2, int *a3)
{
  int updated; // ebx
  unsigned __int64 CurrentUmsTeb; // rax
  char v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r8
  PETHREAD ThreadForTeb; // rax
  __int64 v12; // r15
  unsigned int v13; // r12d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  __int64 v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rcx
  void *v19; // rcx
  int v20; // eax
  _BYTE v22[4]; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v23; // [rsp+34h] [rbp+4h]
  __int64 v24; // [rsp+38h] [rbp+8h] BYREF
  int v25; // [rsp+40h] [rbp+10h] BYREF
  int v26; // [rsp+44h] [rbp+14h]
  int v27; // [rsp+48h] [rbp+18h]
  int v28; // [rsp+4Ch] [rbp+1Ch]
  int v29; // [rsp+50h] [rbp+20h]
  int *v30; // [rsp+58h] [rbp+28h] BYREF
  int v31; // [rsp+60h] [rbp+30h]
  int v32; // [rsp+64h] [rbp+34h]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb((struct _KTHREAD *)a1);
  v22[0] = 0;
  v8 = 0;
  if ( KeDoesTebMatchThread(a1, CurrentUmsTeb) )
    goto LABEL_2;
  if ( a2 )
  {
    if ( v9 != *(_QWORD *)(a2 + 240) )
    {
LABEL_2:
      *v10 |= 2u;
      goto LABEL_26;
    }
    goto LABEL_11;
  }
  ThreadForTeb = PspFindThreadForTeb(v9);
  a2 = (__int64)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_26;
  }
  v8 = 1;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&ThreadForTeb[1].WaitStatus) )
  {
    v22[0] = 1;
LABEL_11:
    v12 = *(_QWORD *)(a1 + 496);
    if ( (*(_DWORD *)(a1 + 116) & 0x100) != 0 )
    {
      *a3 |= 1u;
    }
    else
    {
      KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
      v13 = 1048603;
      if ( MEMORY[0xFFFFF780000003D8] )
        v13 = 1048667;
      RtlGetExtendedContextLength(v13);
      v14 = v23 + 15LL;
      if ( v14 <= v23 )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(v22, 0, v23);
      RtlInitializeExtendedContext((__int64)v22, v13, &v24);
      v16 = v24 - 1232;
      PspGetContextThreadInternal(a1, v24 - 1232, 0, 1, 1);
      v24 = **(_QWORD **)(a2 + 496);
      v17 = v24;
      KeFixUserSwitchContext(a2, v24, 0LL, v16);
      updated = KeRemoveUmsThreadCidOwnership(v17, 1);
      if ( updated >= 0 )
      {
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(a2, v16, a3);
        if ( updated >= 0 )
        {
          v18 = *(_QWORD *)(v12 + 16);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 496) + 16LL) != v18 )
          {
            ObReferenceObjectSafe(v18);
            v19 = *(void **)(*(_QWORD *)(a2 + 496) + 16LL);
            if ( v19 )
              ObfDereferenceObject(v19);
            *(_QWORD *)(*(_QWORD *)(a2 + 496) + 8LL) = *(_QWORD *)(v12 + 8);
            *(_QWORD *)(*(_QWORD *)(a2 + 496) + 16LL) = *(_QWORD *)(v12 + 16);
          }
          updated = KeBuildPrimaryThreadContext(a1, 0LL, v16, 1, 0LL, 0LL);
          if ( updated >= 0 )
          {
            PspSetContextThreadInternal(a1, v16, 0, 1, 1);
            *a3 |= 8u;
            if ( v8 )
              updated = KeUpdateUmsThreadState(v24, 0, 1);
          }
        }
      }
    }
    goto LABEL_26;
  }
  KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1728), 0x10u) )
    goto LABEL_5;
LABEL_26:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v25 = *(_DWORD *)(a1 + 1584);
    v27 = *(_DWORD *)(a1 + 1592);
    if ( a2 )
      v26 = *(_DWORD *)(a2 + 1592);
    else
      v26 = 0;
    v20 = *a3;
    v32 = 0;
    v28 = v20;
    v29 = updated;
    v30 = &v25;
    v31 = 20;
    EtwTraceKernelEvent((int)&v30, 1, 0x40000080u, 6435, 4200450);
  }
  if ( v8 )
  {
    if ( v22[0] )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1704));
    ObfDereferenceObject((PVOID)a2);
  }
  return (unsigned int)updated;
}
