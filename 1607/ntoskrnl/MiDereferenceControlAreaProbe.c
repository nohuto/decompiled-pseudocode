/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140026304
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
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
