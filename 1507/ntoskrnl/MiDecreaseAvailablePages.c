/*
 * XREFs of MiDecreaseAvailablePages @ 0x1401026DC
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1401025F8 (MiUnlinkNodeLargePageHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140145090 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 */

void __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r8
  __int64 v7; // rax

  if ( a2 == 1 )
  {
    v3 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 5504));
    if ( v3 == *(_QWORD *)(a1 + 4104) || v3 == *(_QWORD *)(a1 + 4112) )
      MiUpdateAvailableEvents(a1);
    if ( v3 <= 0x400 )
    {
      v7 = *(_QWORD *)(a1 + 5256);
      if ( !v7 || !*(_BYTE *)(v7 + 52) )
        MiObtainFreePages(a1);
    }
  }
  else
  {
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5504), -a2);
    v5 = *(_QWORD *)(a1 + 4112);
    if ( v4 > v5 && v4 - a2 <= v5 || (v6 = *(_QWORD *)(a1 + 4104), v4 - a2 <= v6) && v4 > v6 )
      MiUpdateAvailableEvents(a1);
  }
}
