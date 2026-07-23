/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x140682478
 * Callers:
 *     PspUmsUnInitThread @ 0x14067F7E0 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x140682780 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x14008BCA0 (ObReferenceObjectSafe.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlGetExtendedContextLength @ 0x1400F26A8 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1400F275C (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     __chkstk @ 0x140167BC0 (__chkstk.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeDoesTebMatchThread @ 0x1401DC838 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x1401DC850 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x1401DC890 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x1406506B4 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x140650F3C (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x140651AC8 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x14067F634 (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x14068297C (PspSetUmsThreadContext.c)
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
  _BYTE v22[4]; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  PCONTEXT_EX ContextEx; // [rsp+38h] [rbp+8h] BYREF
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
      RtlGetExtendedContextLength(v13, &ContextLength);
      v14 = ContextLength + 15LL;
      if ( v14 <= ContextLength )
        v14 = 0xFFFFFFFFFFFFFF0LL;
      v15 = alloca(v14 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(v22, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)v22, v13, &ContextEx);
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
