/*
 * XREFs of MiDereferenceControlAreaProbe @ 0x140083900
 * Callers:
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 * Callees:
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 */

__int64 __fastcall MiDereferenceControlAreaProbe(__int64 a1)
{
  __int64 result; // rax

  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 104), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return MiDeleteControlArea();
  return result;
}
