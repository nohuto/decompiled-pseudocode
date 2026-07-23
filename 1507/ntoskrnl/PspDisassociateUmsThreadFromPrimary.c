/*
 * XREFs of PspDisassociateUmsThreadFromPrimary @ 0x1406C6604
 * Callers:
 *     PspUmsUnInitThread @ 0x1406C3888 (PspUmsUnInitThread.c)
 *     PspRelinquishUmsThreadSpecialApc @ 0x1406C6938 (PspRelinquishUmsThreadSpecialApc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400103E0 (EtwTraceKernelEvent.c)
 *     RtlGetExtendedContextLength @ 0x140020688 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14002073C (RtlInitializeExtendedContext.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObReferenceObjectSafe @ 0x140075130 (ObReferenceObjectSafe.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     __chkstk @ 0x14018BCC0 (__chkstk.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeDoesTebMatchThread @ 0x14020C0F0 (KeDoesTebMatchThread.c)
 *     KeGetCurrentUmsTeb @ 0x14020C108 (KeGetCurrentUmsTeb.c)
 *     KeSetCurrentUmsTeb @ 0x14020C144 (KeSetCurrentUmsTeb.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     KeRemoveUmsThreadCidOwnership @ 0x140699DD0 (KeRemoveUmsThreadCidOwnership.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     KeBuildPrimaryThreadContext @ 0x14069A6C0 (KeBuildPrimaryThreadContext.c)
 *     KeFixUserSwitchContext @ 0x14069B270 (KeFixUserSwitchContext.c)
 *     PspFindThreadForTeb @ 0x1406C36DC (PspFindThreadForTeb.c)
 *     PspSetUmsThreadContext @ 0x1406C6B54 (PspSetUmsThreadContext.c)
 */

__int64 __fastcall PspDisassociateUmsThreadFromPrimary(__int64 a1, __int64 a2, int *a3)
{
  int updated; // ebx
  ULONG64 CurrentUmsTeb; // rax
  char v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r8
  struct _EX_RUNDOWN_REF *ThreadForTeb; // rax
  unsigned __int64 v12; // rtt
  __int64 v13; // r15
  ULONG v14; // r12d
  unsigned __int64 v15; // rax
  void *v16; // rsp
  CONTEXT *p_XState; // r12
  __int64 v18; // rbx
  __int64 v19; // rcx
  void *v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rtt
  _BYTE v24[4]; // [rsp+30h] [rbp+0h] BYREF
  ULONG ContextLength; // [rsp+34h] [rbp+4h] BYREF
  __int64 v26; // [rsp+38h] [rbp+8h]
  PCONTEXT_EX ContextEx; // [rsp+40h] [rbp+10h] BYREF
  int v28; // [rsp+48h] [rbp+18h] BYREF
  int v29; // [rsp+4Ch] [rbp+1Ch]
  int v30; // [rsp+50h] [rbp+20h]
  int v31; // [rsp+54h] [rbp+24h]
  int v32; // [rsp+58h] [rbp+28h]
  int *v33; // [rsp+60h] [rbp+30h] BYREF
  int v34; // [rsp+68h] [rbp+38h]
  int v35; // [rsp+6Ch] [rbp+3Ch]

  updated = 0;
  CurrentUmsTeb = KeGetCurrentUmsTeb((struct _KTHREAD *)a1);
  v24[0] = 0;
  v8 = 0;
  if ( KeDoesTebMatchThread(a1, CurrentUmsTeb) )
    goto LABEL_2;
  if ( a2 )
  {
    if ( v9 != *(_QWORD *)(a2 + 240) )
    {
LABEL_2:
      *v10 |= 2u;
      goto LABEL_27;
    }
    goto LABEL_12;
  }
  ThreadForTeb = (struct _EX_RUNDOWN_REF *)PspFindThreadForTeb(v9);
  a2 = (__int64)ThreadForTeb;
  if ( !ThreadForTeb )
  {
LABEL_5:
    updated = -1073740004;
    goto LABEL_27;
  }
  v8 = 1;
  _m_prefetchw(&ThreadForTeb[212]);
  v12 = ThreadForTeb[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 == _InterlockedCompareExchange64((volatile signed __int64 *)&ThreadForTeb[212], v12 + 2, v12)
    || ExfAcquireRundownProtection(ThreadForTeb + 212) )
  {
    v24[0] = 1;
LABEL_12:
    v13 = *(_QWORD *)(a1 + 496);
    if ( (*(_DWORD *)(a1 + 116) & 0x100) != 0 )
    {
      *a3 |= 1u;
    }
    else
    {
      KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
      v14 = 1048603;
      if ( MEMORY[0xFFFFF780000003D8] )
        v14 = 1048667;
      RtlGetExtendedContextLength(v14, &ContextLength);
      v15 = ContextLength + 15LL;
      if ( v15 <= ContextLength )
        v15 = 0xFFFFFFFFFFFFFF0LL;
      v16 = alloca(v15 & 0xFFFFFFFFFFFFFFF0uLL);
      memset(v24, 0, ContextLength);
      RtlInitializeExtendedContext((PCONTEXT)v24, v14, &ContextEx);
      p_XState = (CONTEXT *)&ContextEx[-39].XState;
      PspGetContextThreadInternal(a1, (__int64)&ContextEx[-39].XState, 0, 1, 1);
      v26 = **(_QWORD **)(a2 + 496);
      v18 = v26;
      KeFixUserSwitchContext(a2, v26, 0LL, (__int64)p_XState);
      updated = KeRemoveUmsThreadCidOwnership(v18, 1);
      if ( updated >= 0 )
      {
        *a3 |= 2u;
        updated = PspSetUmsThreadContext(a2, p_XState, a3);
        if ( updated >= 0 )
        {
          v19 = *(_QWORD *)(v13 + 16);
          if ( *(_QWORD *)(*(_QWORD *)(a2 + 496) + 16LL) != v19 )
          {
            ObReferenceObjectSafe(v19);
            v20 = *(void **)(*(_QWORD *)(a2 + 496) + 16LL);
            if ( v20 )
              ObfDereferenceObject(v20);
            *(_QWORD *)(*(_QWORD *)(a2 + 496) + 8LL) = *(_QWORD *)(v13 + 8);
            *(_QWORD *)(*(_QWORD *)(a2 + 496) + 16LL) = *(_QWORD *)(v13 + 16);
          }
          updated = KeBuildPrimaryThreadContext(a1, 0LL, (__int64)p_XState, 1, 0LL, 0LL);
          if ( updated >= 0 )
          {
            PspSetContextThreadInternal(a1, p_XState, 0, 1, 1);
            *a3 |= 8u;
            if ( v8 )
              updated = KeUpdateUmsThreadState(v26, 0, 1);
          }
        }
      }
    }
    goto LABEL_27;
  }
  KeSetCurrentUmsTeb((struct _KTHREAD *)a1, *(_QWORD *)(a1 + 240));
  if ( _interlockedbittestandset((volatile signed __int32 *)(a2 + 1724), 0x10u) )
    goto LABEL_5;
LABEL_27:
  if ( SBYTE8(PerfGlobalGroupMask) < 0 )
  {
    v28 = *(_DWORD *)(a1 + 1576);
    v30 = *(_DWORD *)(a1 + 1584);
    if ( a2 )
      v29 = *(_DWORD *)(a2 + 1584);
    else
      v29 = 0;
    v21 = *a3;
    v35 = 0;
    v31 = v21;
    v32 = updated;
    v33 = &v28;
    v34 = 20;
    EtwTraceKernelEvent((int)&v33, 1, 0x40000080u, 0x1923u, 4200450);
  }
  if ( v8 )
  {
    if ( v24[0] )
    {
      _m_prefetchw((const void *)(a2 + 1696));
      v22 = *(_QWORD *)(a2 + 1696) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 1696), v22 - 2, v22) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(a2 + 1696));
    }
    ObfDereferenceObject((PVOID)a2);
  }
  return (unsigned int)updated;
}
