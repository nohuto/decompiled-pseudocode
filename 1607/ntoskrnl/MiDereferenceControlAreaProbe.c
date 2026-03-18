/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140026784
 * Callers:
 *     MiWaitForInPageComplete @ 0x1400251B0 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1401F6F38 (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDereferenceControlAreaProbe(__int64 a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea();
  }
  return result;
}
