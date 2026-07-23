/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1406A7ECC
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1406A7E54 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045CA10 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14045CACC (EtwpQueryProcessOtherInfo.c)
 *     EtwpIsProcessZombie @ 0x140499714 (EtwpIsProcessZombie.c)
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  _BYTE *v5; // rdx
  struct _EX_RUNDOWN_REF *v6; // rcx
  bool v7; // zf
  PACCESS_TOKEN v8; // rbp
  unsigned int v10; // [rsp+30h] [rbp-208h] BYREF
  __int64 v11; // [rsp+38h] [rbp-200h] BYREF
  _BYTE v12[48]; // [rsp+40h] [rbp-1F8h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-1C8h] BYREF

  v4 = 0;
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( v5[9] )
    {
      if ( (*v5 & 1) != 0 && v6 != PsIdleProcess && v6 != (struct _EX_RUNDOWN_REF *)PsInitialSystemProcess )
        PsSetProcessTelemetryAppState(v6, 5);
    }
    else
    {
      v7 = v6 == PsIdleProcess;
      v5[8] = 0;
      if ( !v7
        && (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != v6
        && ExAcquireRundownProtection(v6 + 92) )
      {
        KiStackAttachProcess(Process, 0, (__int64)v12);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v8, (WCHAR *)PackageSize, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v11);
        else
          v11 = 0LL;
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v8);
        EtwpPsProvTraceProcess(Process, v10, PackageSize, (__int64)&v11, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
        ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
      }
    }
  }
  return 0LL;
}
