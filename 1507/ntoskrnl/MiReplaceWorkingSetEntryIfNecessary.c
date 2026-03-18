/*
 * XREFs of MiReplaceWorkingSetEntryIfNecessary @ 0x14021AEB8
 * Callers:
 *     MiDoReplacement @ 0x1402135E8 (MiDoReplacement.c)
 * Callees:
 *     MiReplaceWorkingSetEntryLarge @ 0x140080B2C (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x14021AF0C (MiReplaceWorkingSetEntrySmall.c)
 */

void __fastcall MiReplaceWorkingSetEntryIfNecessary(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  if ( (_DWORD)a2 == 1 || (*(_BYTE *)(a1 + 216) & 0x40) != 0 && *(_QWORD *)(a1 + 104) >= *(_QWORD *)(a1 + 136) )
  {
    if ( *(_DWORD *)(v3 + 64) == 16 )
    {
      MiReplaceWorkingSetEntryLarge(a1, a2);
      MiSimpleAging(a1);
    }
    else
    {
      MiReplaceWorkingSetEntrySmall(a1, a2);
    }
  }
}
