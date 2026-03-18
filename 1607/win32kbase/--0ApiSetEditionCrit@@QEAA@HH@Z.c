/*
 * XREFs of ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0010E90
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C000BFC0 (RIMDeviceClassNotify.c)
 *     rimInputApc @ 0x1C0010CF0 (rimInputApc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     RIMReadInput @ 0x1C00117E0 (RIMReadInput.c)
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C0081BBC (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
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
