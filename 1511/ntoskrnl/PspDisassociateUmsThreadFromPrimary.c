/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x140643914
 * Callers:
 *     PspUmsUnInitThread @ 0x140641318 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x140643C20 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x14002B348 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002B3FC (RtlInitializeExtendedContext.c)
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     ObReferenceObjectSafe @ 0x1400C8410 (ObReferenceObjectSafe.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     __chkstk @ 0x14015C1E0 (__chkstk.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1401CCD98 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1401CCDB0 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x1401CCDE0 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x14061B2C0 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x14061B43C (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x14061BB3C (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x14061C6EC (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14064116C (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x140643E1C (PspSetUmsThreadContext.c)
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
  ULONG v13; // r12d
  unsigned __int64 v14; // rax
  void *v15; // rsp
  CONTEXT *p_XState; // r12
  PCONTEXT_EX v17; // rbx
  __int64 v18; // rcx
  void *v19; // rcx
  int v20; // eax
  char v22; // [rsp+30h] [rbp+0h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
  ULONG ContextLength; // [rsp+40h] [rbp+10h] BYREF
  int v25; // [rsp+48h] [rbp+18h] BYREF
  int v26; // [rsp+4Ch] [rbp+1Ch]
  int v27; // [rsp+50h] [rbp+20h]
  int v28; // [rsp+54h] [rbp+24h]
  int v29; // [rsp+58h] [rbp+28h]
  int *v30; // [rsp+60h] [rbp+30h] BYREF
  int v31; // [rsp+68h] [rbp+38h]
  int v32; // [rsp+6Ch] [rbp+3Ch]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb((struct _KTHREAD *)a1);
  v22 = 0;
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
    v22 = 1;
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
      RtlGetExtendedContextLength(v13, &ContextLength);
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(&v22, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)&v22, v13, &ContextEx);
      p_XState = (CONTEXT *)&ContextEx[-39].XState;
      PspGetContextThreadInternal(a1, (__int64)&ContextEx[-39].XState, 0, 1, 1);
      ContextEx = **(PCONTEXT_EX **)(a2 + 496);
      v17 = ContextEx;
      KeFixUserSwitchContext(a2, (__int64)ContextEx, 0LL, (__int64)p_XState);
      updated = KeRemoveUmsThreadCidOwnership((__int64)v17, 1);
      if ( updated >= 0 )
      {
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(a2, p_XState, a3);
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
          updated = KeBuildPrimaryThreadContext(a1, 0LL, (__int64)p_XState, 1, 0LL, 0LL);
          if ( updated >= 0 )
          {
            PspSetContextThreadInternal(a1, p_XState, 0, 1, 1);
            *a3 |= 8u;
            if ( v8 )
              updated = KeUpdateUmsThreadState((__int64)ContextEx, 0, 1);
          }
        }
      }
    }
    goto LABEL_26;
  }
  KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1724), 0x10u) )
    goto LABEL_5;
LABEL_26:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v25 = *(_DWORD *)(a1 + 1576);
    v27 = *(_DWORD *)(a1 + 1584);
    if ( a2 )
      v26 = *(_DWORD *)(a2 + 1584);
    else
      v26 = 0;
    v20 = *a3;
    v32 = 0;
    v28 = v20;
    v29 = updated;
    v30 = &v25;
    v31 = 20;
    EtwTraceKernelEvent((int)&v30, 1, 0x40000080u, 0x1923u, 4200450);
  }
  if ( v8 )
  {
    if ( v22 )
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1696));
    ObfDereferenceObject((PVOID)a2);
  }
  return (unsigned int)updated;
}
