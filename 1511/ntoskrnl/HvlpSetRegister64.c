/*
 * XREFs of HvlpSetRegister64 @ 0x1401B52D0
 * Callers:
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HvlLogGuestCrashInformation @ 0x1401AE3B0 (HvlLogGuestCrashInformation.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1401B4248 (HvlpTryToLockCpuManagementVersion.c)
 *     HvlDeleteProcessor @ 0x1405F683C (HvlDeleteProcessor.c)
 * Callees:
 *     <none>
 */

void __fastcall HvlpSetRegister64(int a1, unsigned __int64 a2)
{
  unsigned int v2; // ecx

  if ( a1 >= 528 )
  {
    if ( a1 <= 532 )
    {
      v2 = a1 + 1073741552;
      goto LABEL_14;
    }
    switch ( a1 )
    {
      case 533:
        v2 = 1073742085;
        goto LABEL_14;
      case 589826:
        v2 = 0x40000000;
        goto LABEL_14;
      case 589831:
        v2 = 1073741828;
        goto LABEL_14;
      case 589843:
        v2 = 1073741939;
        goto LABEL_14;
    }
    if ( (unsigned int)(a1 - 655360) <= 0xF )
    {
      v2 = a1 + 1073086608;
LABEL_14:
      __writemsr(v2, a2);
      return;
    }
  }
  RtlRaiseException(&stru_1402D3350);
}
