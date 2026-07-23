/*
 * XREFs of MiDecreaseAvailablePages @ 0x14008A420
 * Callers:
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 *     MiUnlinkNodeLargePageHelper @ 0x14008A180 (MiUnlinkNodeLargePageHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140120F60 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 */

_BOOL8 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v12; // rax
  int v13; // ecx

  if ( a2 == 1 )
  {
    v9 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 6464));
    if ( v9 == *(_QWORD *)(a1 + 4456) || v9 == *(_QWORD *)(a1 + 4464) )
      MiUpdateAvailableEvents(a1);
    v7 = v9 + 1;
  }
  else
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6464), -a2);
    v8 = *(_QWORD *)(a1 + 4464);
    v9 = v7 - a2;
    if ( v7 - a2 <= v8 && v7 > v8 || (v10 = *(_QWORD *)(a1 + 4456), v9 <= v10) && v7 > v10 )
      MiUpdateAvailableEvents(a1);
  }
  if ( v9 <= 0x420 )
  {
    v12 = *(_QWORD *)(a1 + 6248);
    if ( !v12 || !*(_BYTE *)(v12 + 52) )
      MiObtainFreePages(a1);
    if ( v9 < 0xA0 && v7 >= 0xA0 && *(_DWORD *)(a1 + 1064) )
      KeSetEvent((PRKEVENT)(a1 + 920), 0, 0);
  }
  if ( a3 != -1LL )
    return v9 >= a3;
  if ( v9 >= 0x9F )
    return 1LL;
  if ( (a4 & 0x800) != 0 )
    return 1LL;
  v13 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
  if ( (v13 & 0xC) == 8 )
    return 1LL;
  if ( v9 < 0x20 && (int *)a1 == MiSystemPartition )
    return 0LL;
  if ( (a4 & 4) != 0 || (v13 & 2) != 0 && v9 >= 0x21 )
    return 1LL;
  return (*(unsigned __int8 *)(a1 + 4) >> 4) & 1;
}
