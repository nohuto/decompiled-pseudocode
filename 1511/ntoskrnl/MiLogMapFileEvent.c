/*
 * XREFs of MiLogMapFileEvent @ 0x140621288
 * Callers:
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x1401D2920 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x1406210BC (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, unsigned __int16 a2)
{
  char result; // al
  _BYTE v4[56]; // [rsp+30h] [rbp-38h] BYREF

  result = *(_DWORD *)(a1 + 48) & 7;
  if ( result != 1 )
  {
    MiFillMapFileInfo(a1, (__int64)v4);
    return MiLogPerfMemoryEvent(a2, 0x8000u, (__int64)v4, 44, 4200707);
  }
  return result;
}
