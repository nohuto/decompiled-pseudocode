/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1406E94E0
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1406E9468 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObFastDereferenceObject @ 0x14004E3E0 (ObFastDereferenceObject.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     EtwpIsProcessZombie @ 0x14041C450 (EtwpIsProcessZombie.c)
 *     PsSetProcessTelemetryAppState @ 0x140507404 (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwpQueryProcessOtherInfo @ 0x14050CB2C (EtwpQueryProcessOtherInfo.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14050D82C (EtwpQueryTokenPackageInfo.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  _BYTE *v5; // rdx
  _KPROCESS *v6; // rcx
  bool v7; // zf
  struct _EX_RUNDOWN_REF *p_WaitListHead; // rcx
  unsigned __int64 v9; // rtt
  PACCESS_TOKEN v10; // rbp
  unsigned __int64 v11; // rtt
  unsigned int v13; // [rsp+30h] [rbp-218h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-210h] BYREF
  _BYTE v15[56]; // [rsp+48h] [rbp-200h] BYREF
  unsigned int PackageSize[104]; // [rsp+80h] [rbp-1C8h] BYREF

  v4 = 0;
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( v5[9] )
    {
      if ( (*v5 & 1) != 0 && v6 != PsIdleProcess && v6 != PsInitialSystemProcess )
        PsSetProcessTelemetryAppState(v6, 5);
    }
    else
    {
      v7 = v6 == PsIdleProcess;
      v5[8] = 0;
      if ( !v7 && KeGetCurrentThread()->ApcState.Process != v6 )
      {
        p_WaitListHead = (struct _EX_RUNDOWN_REF *)&v6[1].Header.WaitListHead;
        _m_prefetchw(p_WaitListHead);
        v9 = p_WaitListHead->Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)p_WaitListHead, v9 + 2, v9)
          || ExfAcquireRundownProtection(p_WaitListHead) )
        {
          KiStackAttachProcess(Process, 0, (__int64)v15);
          v4 = 1;
          a2[8] = 1;
        }
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v13 = 0;
        v10 = PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v10, (WCHAR *)PackageSize, &v13);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)v14);
        else
          v14[0] = 0LL;
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v10);
        EtwpPsProvTraceProcess(Process, v13, PackageSize, (__int64)v14, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
        _m_prefetchw(&Process[1].Header.WaitListHead);
        v11 = (unsigned __int64)Process[1].Header.WaitListHead.Flink & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v11 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&Process[1].Header.WaitListHead,
                      v11 - 2,
                      v11) )
          ExfReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
      }
    }
  }
  return 0LL;
}
