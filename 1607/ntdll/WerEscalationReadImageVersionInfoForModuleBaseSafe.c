/*
 * XREFs of WerEscalationReadImageVersionInfoForModuleBaseSafe @ 0x18000BF58
 * Callers:
 *     LdrpRecordUnloadEvent @ 0x18000BD40 (LdrpRecordUnloadEvent.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 * Callees:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C014 (WerEscalationReadImageVersionInfoForModuleBase.c)
 *     RtlImageNtHeaderEx @ 0x1800348B0 (RtlImageNtHeaderEx.c)
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
