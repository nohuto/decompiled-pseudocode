/*
 * XREFs of IsHelpParent @ 0x1C024CFDC
 * Callers:
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 *     EnumPwndDlgChildProc @ 0x1C024CF30 (EnumPwndDlgChildProc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHelpParent(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( !a1 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 50) & 1) != 0
    || (*(_BYTE *)(a1 + 42) & 1) != 0
    || (*(_BYTE *)(a1 + 52) & 0xF) == 7 && *(_WORD *)(gpsi + 852LL) == *(_WORD *)(*(_QWORD *)(a1 + 152) + 10LL) )
  {
    return 1;
  }
  return v1;
}
