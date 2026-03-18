/*
 * XREFs of MiUseLowIoPriorityForModifiedPages @ 0x14011529C
 * Callers:
 *     MiAdjustModifiedPageLoad @ 0x14001373C (MiAdjustModifiedPageLoad.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 * Callees:
 *     MiGetStandbyRepurposed @ 0x14001516C (MiGetStandbyRepurposed.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14007CA30 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiUseLowIoPriorityForModifiedPages(__int64 a1)
{
  _BOOL8 result; // rax
  unsigned __int64 v3; // rdi
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v5; // rdi
  unsigned int StandbyRepurposed; // eax
  unsigned __int64 v7; // r10
  unsigned int v8; // r11d
  unsigned int v9; // eax

  result = 0;
  if ( !*(_DWORD *)(a1 + 704) && !*(_DWORD *)(a1 + 1072) )
  {
    v3 = *(_QWORD *)(a1 + 5712);
    AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority((_QWORD *)a1, 6u);
    v5 = v3 >> 2;
    if ( *(_QWORD *)(a1 + 6128) < 3 * v5 && (AvailablePagesBelowPriority > 0x40000 || AvailablePagesBelowPriority > v5) )
    {
      StandbyRepurposed = MiGetStandbyRepurposed(a1, 1u);
      v9 = StandbyRepurposed > v8 ? StandbyRepurposed - v8 : 0;
      if ( v9 < v7 >> 2 )
        return 1;
    }
  }
  return result;
}
