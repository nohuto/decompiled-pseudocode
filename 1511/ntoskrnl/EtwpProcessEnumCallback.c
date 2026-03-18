/*
 * XREFs of EtwpProcessEnumCallback @ 0x1405008B4
 * Callers:
 *     EtwpProcessThreadImageRundown @ 0x14050074C (EtwpProcessThreadImageRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 *     EtwpIsProcessZombie @ 0x140500B78 (EtwpIsProcessZombie.c)
 *     EtwpTraceProcessRundown @ 0x140500BA4 (EtwpTraceProcessRundown.c)
 *     PsEnumProcessThreads @ 0x140500CC0 (PsEnumProcessThreads.c)
 *     EtwpThreadEnumCallback @ 0x140500D30 (EtwpThreadEnumCallback.c)
 *     EtwpSysModuleRunDown @ 0x140500D74 (EtwpSysModuleRunDown.c)
 *     EtwpEnumerateWorkingSet @ 0x140665400 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleRundown @ 0x14066599C (EtwpObjectHandleRundown.c)
 *     EtwpProcessPerfCtrsRundown @ 0x140665F58 (EtwpProcessPerfCtrsRundown.c)
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
  $D4FCF91253F76F57393CBFE908971F67 v17; // [rsp+20h] [rbp-78h] BYREF

  v2 = *(_DWORD *)(a2 + 28);
  v3 = 0;
  v4 = *(_BYTE *)(a2 + 56);
  v6 = *(_DWORD **)a2;
  *(_BYTE *)(a2 + 57) = 0;
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
          KiUnstackDetachProcess(&v17, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 736));
        }
        return 0LL;
      }
      if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(v10 + 736)) )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v17);
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
