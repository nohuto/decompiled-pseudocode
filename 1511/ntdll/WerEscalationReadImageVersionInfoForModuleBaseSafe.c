/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x1800058A8
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x180005690 (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x180005924 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlImageNtHeaderEx @ 0x180034B30 (RtlImageNtHeaderEx.c)
 */

__int64 __fastcall WerEscalationReadImageVersionInfoForModuleBaseSafe(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  _QWORD v6[7]; // [rsp+40h] [rbp-38h] BYREF

  if ( a2 || (result = RtlImageNtHeaderEx(3LL, a1, 0LL, v6), (int)result >= 0) )
  {
    WerEscalationReadImageVersionInfoForModuleBase(a1, a3);
    return 0LL;
  }
  return result;
}
