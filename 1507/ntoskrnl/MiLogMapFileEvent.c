/*
 * XREFs of MiLogMapFileEvent @ 0x1406A091C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x140213C50 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1406A0750 (MiFillMapFileInfo.c)
 */

unsigned __int8 __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  unsigned __int8 result; // al
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 7;
  if ( result != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return (unsigned __int8)MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
