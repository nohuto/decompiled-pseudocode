/*
 * XREFs of ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000898C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC (-ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@.c)
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180002E04 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x180008490 (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordUsage@?$UsageIndex@W4ServiceReportingKind@details@wil@@I$01@details_abi@wil@@QEAA_NW4ServiceReportingKind@details@3@II@Z @ 0x18000BFBC (-RecordUsage@-$UsageIndex@W4ServiceReportingKind@details@wil@@I$01@details_abi@wil@@QEAA_NW4Serv.c)
 *     ?RecordUsage@?$UsageIndex@W4ServiceReportingKind@details@wil@@I$0A@@details_abi@wil@@QEAA_NW4ServiceReportingKind@details@3@II@Z @ 0x18000BFF4 (-RecordUsage@-$UsageIndex@W4ServiceReportingKind@details@wil@@I$0A@@details_abi@wil@@QEAA_NW4Ser.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000CC6C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::FeatureStateManager::RecordFeatureUsage(
        _BYTE *a1,
        unsigned int a2,
        unsigned __int8 a3,
        unsigned int a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rdx
  char v12; // bl
  int v13; // eax
  PTP_TIMER ThreadpoolTimer; // rax
  struct _TP_TIMER *v15; // rbp
  PTP_TIMER v16; // rsi
  DWORD LastError; // ebx
  struct _TP_TIMER *v18; // rcx
  PSRWLOCK v19; // [rsp+20h] [rbp-28h] BYREF
  PSRWLOCK SRWLock; // [rsp+50h] [rbp+8h] BYREF

  if ( *a1 )
  {
    if ( !*((_QWORD *)a1 + 3) )
    {
      if ( !*((_QWORD *)a1 + 2) )
      {
        v8 = *((_QWORD *)a1 + 1);
        SRWLock = 0LL;
        if ( (int)wil::details_abi::ProcessLocalStorageData<wil::details_abi::FeatureStateData>::Acquire(v8, &SRWLock) >= 0
          && !*((_QWORD *)a1 + 2) )
        {
          *((_QWORD *)a1 + 2) = SRWLock;
        }
      }
      v9 = *((_QWORD *)a1 + 2);
      if ( v9 )
        v9 += 32LL;
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1 + 4, &SRWLock);
      if ( !*((_QWORD *)a1 + 3) )
        *((_QWORD *)a1 + 3) = v9;
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    v10 = *((_QWORD *)a1 + 3);
    if ( v10 )
    {
      if ( a3 == 0xFE )
      {
        wil::details_abi::FeatureStateData::RecordUsage(*((RTL_SRWLOCK **)a1 + 3));
        v12 = 1;
      }
      else
      {
        if ( a3 >= 0xC8u )
          return;
        wil::srwlock::lock_exclusive(*((RTL_SRWLOCK **)a1 + 3), &SRWLock);
        LOBYTE(v11) = a3;
        if ( ((a3 - 2) & 0xFA) != 0 )
        {
          v12 = wil::details_abi::UsageIndex<enum wil::details::ServiceReportingKind,unsigned int,2>::RecordUsage(
                  v10 + 72,
                  v11,
                  a2,
                  a4);
        }
        else
        {
          wil::details_abi::UsageIndex<enum wil::details::ServiceReportingKind,unsigned int,0>::RecordUsage(
            v10 + 8,
            v11,
            a2);
          v12 = *(_BYTE *)(v10 + 64);
        }
        if ( SRWLock )
          ReleaseSRWLockExclusive(SRWLock);
      }
      if ( v12 && !wil::details::g_processShutdownInProgress )
      {
        v13 = (int)wil::details::g_pfnRtlDllShutdownInProgress;
        if ( wil::details::g_pfnRtlDllShutdownInProgress )
          v13 = wil::details::g_pfnRtlDllShutdownInProgress();
        if ( !v13 )
        {
          wil::srwlock::lock_exclusive((RTL_SRWLOCK *)a1 + 4, &v19);
          if ( !a1[88] )
          {
            if ( *((_QWORD *)a1 + 10) )
              goto LABEL_32;
            ThreadpoolTimer = CreateThreadpoolTimer(
                                lambda_4acbc82402014b2d4c356edc25e0df58_::_lambda_invoker_cdecl_,
                                a1,
                                0LL);
            v15 = (struct _TP_TIMER *)*((_QWORD *)a1 + 10);
            v16 = ThreadpoolTimer;
            if ( v15 )
            {
              LastError = GetLastError();
              SetThreadpoolTimer(v15, 0LL, 0, 0);
              WaitForThreadpoolTimerCallbacks(v15, 1);
              CloseThreadpoolTimer(v15);
              SetLastError(LastError);
            }
            *((_QWORD *)a1 + 10) = v16;
            if ( v16 )
            {
LABEL_32:
              v18 = (struct _TP_TIMER *)*((_QWORD *)a1 + 10);
              SRWLock = (PSRWLOCK)-3000000000LL;
              SetThreadpoolTimer(v18, (PFILETIME)&SRWLock, 0, 0x124F8u);
              a1[88] = 1;
            }
          }
          if ( v19 )
            ReleaseSRWLockExclusive(v19);
        }
      }
    }
  }
}
