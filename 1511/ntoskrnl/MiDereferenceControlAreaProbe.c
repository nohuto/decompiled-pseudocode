/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x14000BADC
 * Callers:
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x1403C7FD8 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x14000BB08 (MiDeleteControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(__int64 a1, int a2)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
  {
    if ( a2 == 1 )
      return MiQueueControlAreaDelete();
    else
      return MiDeleteControlArea();
  }
  return result;
}
