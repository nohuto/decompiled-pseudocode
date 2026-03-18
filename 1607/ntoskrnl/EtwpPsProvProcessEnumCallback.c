/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x1406A7D94
 * Callers:
 *     EtwpPsProvCaptureState @ 0x1406A7D1C (EtwpPsProvCaptureState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F690 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045DB40 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14045DBFC (EtwpQueryProcessOtherInfo.c)
 *     EtwpIsProcessZombie @ 0x140498C84 (EtwpIsProcessZombie.c)
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
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
  unsigned int v13[104]; // [rsp+70h] [rbp-1C8h] BYREF

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
        EtwpQueryTokenPackageInfo((__int64)v8, (__int64)v13, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v11);
        else
          v11 = 0LL;
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], (unsigned __int64)v8);
        EtwpPsProvTraceProcess(Process, v10, v13, (__int64)&v11, 771);
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
