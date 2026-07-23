/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF48
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x18000BD30 (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x1800D9288 (WerEscalationLazyInit.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlImageNtHeaderEx @ 0x1800348A0 (RtlImageNtHeaderEx.c)
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
