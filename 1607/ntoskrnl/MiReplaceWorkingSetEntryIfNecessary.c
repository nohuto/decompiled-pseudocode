/*
 * XREFs of MiReplaceWorkingSetEntryIfNecessary @ 0x1401E9CCC
 * Callers:
 *     MiDoReplacement @ 0x1401E2658 (MiDoReplacement.c)
 * Callees:
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiReplaceWorkingSetEntryLarge @ 0x1400FEB54 (MiReplaceWorkingSetEntryLarge.c)
 *     MiReplaceWorkingSetEntrySmall @ 0x1401E9D18 (MiReplaceWorkingSetEntrySmall.c)
 */

void __fastcall MiReplaceWorkingSetEntryIfNecessary(__int64 a1)
{
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  SharedWorkingSetList = MiGetSharedWorkingSetList(a1);
  if ( (_DWORD)v3 == 1 || (*(_BYTE *)(v4 + 184) & 0x40) != 0 && *(_QWORD *)(v4 + 112) >= *(_QWORD *)(v4 + 144) )
  {
    if ( *((_DWORD *)SharedWorkingSetList + 8) == 16 )
    {
      MiReplaceWorkingSetEntryLarge(v4, v3);
      MiSimpleAging(a1);
    }
    else
    {
      MiReplaceWorkingSetEntrySmall(v4, v3);
    }
  }
}
