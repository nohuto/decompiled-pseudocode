/*
 * XREFs of MiLogMapFileEvent @ 0x140657130
 * Callers:
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiUnmapVad @ 0x14042EEF0 (MiUnmapVad.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 * Callees:
 *     MiLogPerfMemoryEvent @ 0x1401E2978 (MiLogPerfMemoryEvent.c)
 *     MiFillMapFileInfo @ 0x140656F64 (MiFillMapFileInfo.c)
 */

char __fastcall MiLogMapFileEvent(__int64 a1, __int16 a2)
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
