/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800058A8
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x180005690 (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180005924 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

NTSTATUS __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(PVOID BaseOfImage, int a2)
{
  NTSTATUS result; // eax
  PIMAGE_NT_HEADERS v4; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3u, BaseOfImage, 0LL, &v4), result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(BaseOfImage);
    return 0;
  }
  return result;
}
