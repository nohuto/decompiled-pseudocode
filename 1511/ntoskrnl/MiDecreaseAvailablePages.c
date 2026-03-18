/*
 * XREFs of MiDecreaseAvailablePages @ 0x1400197DC
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1400196EC (MiUnlinkNodeLargePageHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140112420 (MiRemoveLowestPriorityStandbyPage.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 */

__int64 __fastcall MiDecreaseAvailablePages(__int64 a1, __int64 a2, unsigned __int64 a3, __int16 a4)
{
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned int v9; // ebx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  int Queue; // ecx

  if ( a2 == 1 )
  {
    v7 = _InterlockedDecrement64((volatile signed __int64 *)(a1 + 5888));
    if ( v7 == *(_QWORD *)(a1 + 4328) || v7 == *(_QWORD *)(a1 + 4336) )
      MiUpdateAvailableEvents(a1, 1LL, a3);
    v8 = v7 + 1;
  }
  else
  {
    v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5888), -a2);
    v11 = *(_QWORD *)(a1 + 4336);
    v7 = v8 - a2;
    if ( v8 - a2 <= v11 && v8 > v11 || (v12 = *(_QWORD *)(a1 + 4328), v7 <= v12) && v8 > v12 )
      MiUpdateAvailableEvents(a1, a2, a3);
  }
  v9 = 0;
  if ( v7 <= 0x420 )
  {
    v13 = *(_QWORD *)(a1 + 5616);
    if ( !v13 || !*(_BYTE *)(v13 + 52) )
      MiObtainFreePages(a1);
    if ( v7 < 0xA0 && v8 >= 0xA0 && *(_DWORD *)(a1 + 1080) )
      KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
  }
  if ( a3 == -1LL )
  {
    if ( v7 >= 0x9F )
      return 1;
    if ( (a4 & 0x800) != 0 )
      return 1;
    Queue = (int)KeGetCurrentThread()[1].Queue;
    if ( (Queue & 6) == 6 )
      return 1;
    if ( (v7 >= 0x20 || (int *)a1 != &MiSystemPartition)
      && ((a4 & 4) != 0 || (Queue & 2) != 0 && v7 >= 0x21 || (int *)a1 != &MiSystemPartition && v7) )
    {
      return 1;
    }
  }
  else
  {
    LOBYTE(v9) = v7 >= a3;
  }
  return v9;
}
