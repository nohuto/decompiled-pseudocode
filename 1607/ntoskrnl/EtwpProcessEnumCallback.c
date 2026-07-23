/*
 * XREFs of EtwpProcessEnumCallback @ 0x140499444
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     EtwpThreadEnumCallback @ 0x140459730 (EtwpThreadEnumCallback.c)
 *     PsEnumProcessThreads @ 0x140459774 (PsEnumProcessThreads.c)
 *     EtwpIsProcessZombie @ 0x140499714 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x140499740 (EtwpTraceProcessRundown.c)
 *     EtwpSysModuleRunDown @ 0x140499864 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6F28 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x1406A74DC (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x1406A7AD0 (EtwpProcessPerfCtrsRundown.c)
 */

__int64 __fastcall EtwpProcessEnumCallback(__int64 BugCheckParameter1, __int64 a2)
{
  unsigned int v2; // r14d
  char v3; // r13
  char v4; // r12
  _DWORD *v6; // rdi
  char v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  char v11; // bp
  ULONG j; // ebp
  __int64 v14; // rax
  ULONG i; // ebp
  __int64 Prcb; // rax
  _BYTE v17[48]; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = 0;
  v4 = *(_BYTE *)(a2 + 96);
  v6 = *(_DWORD **)a2;
  *(_BYTE *)(a2 + 97) = 0;
  v8 = 0;
  if ( !(unsigned int)EtwpIsProcessZombie() )
  {
    v11 = 1;
    if ( (PVOID)v10 == PsIdleProcess )
    {
      v8 = 1;
    }
    else
    {
      if ( KeGetCurrentThread()->ApcState.Process == (_KPROCESS *)v10 )
      {
LABEL_6:
        *(_BYTE *)(a2 + 97) = v11;
        *(_BYTE *)(a2 + 99) = v8;
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
                for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
                {
                  Prcb = KeGetPrcb(i);
                  EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(Prcb + 24), a2);
                }
              }
              else
              {
                PsEnumProcessThreads(BugCheckParameter1, EtwpThreadEnumCallback, a2);
              }
            }
            if ( (*v6 & 0xC004) != 0 )
              EtwpEnumerateAddressSpace(BugCheckParameter1, a2, (__int64)v6);
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
            EtwpEnumerateAddressSpace(BugCheckParameter1, a2, (__int64)v6);
          if ( (v6[4] & 0x40) != 0 && (PVOID)BugCheckParameter1 != PsIdleProcess )
            EtwpObjectHandleRundown((PEPROCESS)BugCheckParameter1);
          if ( (*v6 & 2) != 0 )
          {
            if ( (PVOID)BugCheckParameter1 == PsIdleProcess )
            {
              for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
              {
                v14 = KeGetPrcb(j);
                EtwpThreadEnumCallback(BugCheckParameter1, *(_QWORD *)(v14 + 24), a2);
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
          KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
          ExReleaseRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v10 + 736)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v17);
        v3 = 1;
        goto LABEL_6;
      }
    }
    v11 = 0;
    goto LABEL_6;
  }
  if ( v6 && (*v6 & 1) != 0 && !v4 )
    EtwpTraceProcessRundown(v10, v2, 807LL, v9);
  return 0LL;
}
