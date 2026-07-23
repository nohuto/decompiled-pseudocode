/*
 * XREFs of GetResourceDirectoryEntry @ 0x18000BFC0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18000C294 (ValidatePointer.c)
 */

__int64 __fastcall GetResourceDirectoryEntry(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  __int64 v4; // rdx

  if ( a3 >= *(unsigned __int16 *)(a2 + 12) + (unsigned int)*(unsigned __int16 *)(a2 + 14) )
    return 0LL;
  v3 = ValidatePointer(a1, a2 + 8LL * a3 + 16, 8LL);
  return v4 & -(__int64)(v3 != 0);
}
