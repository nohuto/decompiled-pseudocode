/*
 * XREFs of EtwpProcessEnumCallback @ 0x14041C13C
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpIsProcessZombie @ 0x14041C450 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x14041C47C (EtwpTraceProcessRundown.c)
 *     EtwpThreadEnumCallback @ 0x14041CAF0 (EtwpThreadEnumCallback.c)
 *     PsEnumProcessThreads @ 0x14041CB34 (PsEnumProcessThreads.c)
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     EtwpSysModuleRunDown @ 0x14051CC04 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x1406E84F4 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1406E8B14 (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406E90E4 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned int v2; // r15d
  char v3; // r13
  char v4; // r12
  _DWORD *v6; // rdi
  char v8; // r14
  __int64 v9; // rdx
  _KPROCESS *v10; // rcx
  char v11; // bp
  struct _EX_RUNDOWN_REF *p_WaitListHead; // rcx
  unsigned __int64 v13; // rtt
  unsigned __int64 v14; // rtt
  __int64 j; // rbp
  __int64 v17; // rdx
  __int64 i; // rbp
  __int64 v19; // rdx
  _BYTE v20[48]; // [rsp+28h] [rbp-70h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = 0;
  v4 = *(_BYTE *)(a2 + 56);
  v6 = *(_DWORD **)a2;
  *(_BYTE *)(a2 + 57) = 0;
  v8 = 0;
  if ( (unsigned int)EtwpIsProcessZombie() )
  {
    if ( v6 && (*v6 & 1) != 0 && !v4 )
      EtwpTraceProcessRundown(v10, v2, 807LL, v9);
  }
  else
  {
    v11 = 1;
    if ( v10 == PsIdleProcess )
    {
      v11 = 0;
      v8 = 1;
    }
    else if ( KeGetCurrentThread()->ApcState.Process != v10 )
    {
      p_WaitListHead = (struct _EX_RUNDOWN_REF *)&v10[1].Header.WaitListHead;
      _m_prefetchw(p_WaitListHead);
      v13 = p_WaitListHead->Count & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v13 == _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitListHead, v13 + 2, v13)
        || ExfAcquireRundownProtection(p_WaitListHead) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v20);
        v3 = 1;
      }
      else
      {
        v11 = 0;
      }
    }
    *(_BYTE *)(a2 + 57) = v11;
    *(_BYTE *)(a2 + 59) = v8;
    if ( v4 )
    {
      if ( v6 )
      {
        if ( (*v6 & 1) != 0 )
          EtwpTraceProcessRundown(BugCheckParameter1, v2, 771LL, a2);
        if ( (*v6 & 2) != 0 )
        {
          if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
          {
            for ( i = 0LL; (unsigned int)i < (unsigned int)KeNumberProcessors_0; i = (unsigned int)(i + 1) )
            {
              if ( (unsigned int)i >= (unsigned int)KeNumberProcessors_0 )
                v19 = 0LL;
              else
                v19 = KiProcessorBlock[i];
              EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v19 + 24), a2);
            }
          }
          else
          {
            PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
          }
        }
        if ( (*v6 & 0xC004) != 0 )
          EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
        if ( (*v6 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        {
          LOBYTE(v9) = v4;
          EtwpSysModuleRunDown(v2, v9);
        }
        if ( (v6[1] & 0x8000000) != 0 )
          EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
      }
    }
    else if ( v6 )
    {
      if ( (v6[1] & 0x8000000) != 0 )
        EtwpEnumerateWorkingSet(BugCheckParameter1, a2);
      if ( (*v6 & 4) != 0 && (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
        EtwpSysModuleRunDown(v2, 0LL);
      if ( (*v6 & 0xC004) != 0 )
        EtwpEnumerateAddressSpace(BugCheckParameter1, a2, v6);
      if ( (v6[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
        EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
      if ( (*v6 & 2) != 0 )
      {
        if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
        {
          for ( j = 0LL; (unsigned int)j < (unsigned int)KeNumberProcessors_0; j = (unsigned int)(j + 1) )
          {
            if ( (unsigned int)j >= (unsigned int)KeNumberProcessors_0 )
              v17 = 0LL;
            else
              v17 = KiProcessorBlock[j];
            EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v17 + 24), a2);
          }
        }
        else
        {
          PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
        }
      }
      if ( (*v6 & 8) != 0 )
        EtwpProcessPerfCtrsRundown(BugCheckParameter1, v2);
      if ( (*v6 & 1) != 0 )
        EtwpTraceProcessRundown(BugCheckParameter1, v2, 772LL, a2);
    }
    if ( v3 )
    {
      KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
      _m_prefetchw((const void *)(BugCheckParameter1 + 736));
      v14 = *(_QWORD *)(BugCheckParameter1 + 736) & 0xFFFFFFFFFFFFFFFEuLL;
      if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(BugCheckParameter1 + 736), v14 - 2, v14) )
        ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
    }
  }
  return 0LL;
}
