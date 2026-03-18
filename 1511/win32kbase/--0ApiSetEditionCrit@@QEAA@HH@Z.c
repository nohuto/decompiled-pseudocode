/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00CE68C
 * Callers:
 *     RIMReadInput @ 0x1C0006150 (RIMReadInput.c)
 *     RIMDeviceClassNotify @ 0x1C000FE30 (RIMDeviceClassNotify.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C007F27C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     IsEnterEditionCritSupported_0 @ 0x1C0002CD0 (IsEnterEditionCritSupported_0.c)
 *     EnterEditionCrit_0 @ 0x1C0002CD8 (EnterEditionCrit_0.c)
 */

ApiSetEditionCrit *__fastcall ApiSetEditionCrit::ApiSetEditionCrit(ApiSetEditionCrit *this, int a2)
{
  int v2; // ebx

  v2 = 0;
  *(_DWORD *)this = a2;
  if ( a2 )
  {
    if ( (int)IsEnterEditionCritSupported_0() >= 0 )
      v2 = EnterEditionCrit_0();
    *((_DWORD *)this + 1) = v2;
  }
  return this;
}
