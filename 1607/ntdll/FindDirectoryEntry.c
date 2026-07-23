/*
 * XREFs of FindDirectoryEntry @ 0x18000C2D0
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18000C004 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     ValidatePointer @ 0x18000C294 (ValidatePointer.c)
 */

__int64 __fastcall FindDirectoryEntry(unsigned __int64 *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  __int64 v6; // r8
  int v8; // r10d
  unsigned int v9; // r11d

  if ( !a3 )
    return 0LL;
  v6 = 8LL;
  while ( *(int *)a2 < 0 || *(unsigned __int16 *)a2 != a4 )
  {
    if ( !ValidatePointer(a1, v6 + a2, v6) || v8 + 1 >= v9 )
      return 0LL;
  }
  return a2 & -(__int64)(*(int *)(a2 + 4) < 0);
}
