/*
 * XREFs of ndisMCheckPacketAndPad @ 0x1C004EEA8
 * Callers:
 *     ndisMSendPacketsSGToMiniport @ 0x1C0051040 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0051220 (ndisMSendPacketsToMiniport.c)
 *     ndisMSendPacketsXToMiniport @ 0x1C0051630 (ndisMSendPacketsXToMiniport.c)
 * Callees:
 *     ndisPadShortPacket @ 0x1C0051D58 (ndisPadShortPacket.c)
 */

__int64 __fastcall ndisMCheckPacketAndPad(__int64 a1, __int64 a2)
{
  struct _MDL *v4; // rdx
  unsigned int v5; // edi
  struct _MDL *i; // rbx
  PVOID MappedSystemVa; // rax

  v4 = 0LL;
  v5 = 0;
  for ( i = *(struct _MDL **)(a2 + 8); i; i = i->Next )
  {
    if ( (i->MdlFlags & 5) != 0 )
      MappedSystemVa = i->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(i, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag | 0x20);
    if ( !MappedSystemVa )
      return 3221225626LL;
    v5 += i->ByteCount;
    v4 = i;
  }
  if ( (*(_BYTE *)(a1 + 928) & 8) != 0 && v4 && v5 < 0x3C )
    return ndisPadShortPacket(a2, v4, v5);
  else
    return 0LL;
}
