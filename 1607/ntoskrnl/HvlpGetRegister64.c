/*
 * XREFs of HvlpGetRegister64 @ 0x1401C13BC
 * Callers:
 *     HvlEnlightenProcessor @ 0x140139B58 (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1401BAB4C (HvlLogGuestCrashInformation.c)
 *     HvlGetReferenceTime @ 0x1401BCD24 (HvlGetReferenceTime.c)
 *     HvlGetReferenceTimeUsingTscPage @ 0x1401BCD58 (HvlGetReferenceTimeUsingTscPage.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401BFD1C (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1406203EC (HvlDeleteProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpGetRegister64(int a1, _QWORD *a2)
{
  unsigned int v2; // ecx

  if ( a1 > 589828 )
  {
    if ( a1 == 589831 )
    {
      v2 = 1073741828;
      goto LABEL_20;
    }
    if ( a1 == 589843 )
    {
      v2 = 1073741939;
      goto LABEL_20;
    }
    if ( (unsigned int)(a1 - 655360) <= 0xF )
    {
      v2 = a1 + 1073086608;
      goto LABEL_20;
    }
    goto LABEL_17;
  }
  if ( a1 == 589828 )
  {
    v2 = 1073741856;
    goto LABEL_20;
  }
  if ( a1 < 528 )
    goto LABEL_17;
  if ( a1 <= 532 )
  {
    v2 = a1 + 1073741552;
    goto LABEL_20;
  }
  if ( a1 == 533 )
  {
    v2 = 1073742085;
    goto LABEL_20;
  }
  if ( a1 == 589826 )
  {
    v2 = 0x40000000;
    goto LABEL_20;
  }
  if ( a1 != 589827 )
  {
LABEL_17:
    RtlRaiseException(&stru_1402F8DB0);
    return;
  }
  v2 = 1073741826;
LABEL_20:
  *a2 = __readmsr(v2);
}
