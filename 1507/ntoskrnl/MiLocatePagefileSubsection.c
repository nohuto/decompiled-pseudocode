/*
 * XREFs of MiLocatePagefileSubsection @ 0x140089C20
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140036ED0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiQueryAddressState @ 0x14003B1A0 (MiQueryAddressState.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiGetProtoPteAddress @ 0x1400BF2B0 (MiGetProtoPteAddress.c)
 *     MiAdvanceVadView @ 0x1400F1AD4 (MiAdvanceVadView.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1404B8D20 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MmCommitSessionMappedView @ 0x14051BB40 (MmCommitSessionMappedView.c)
 * Callees:
 *     <none>
 */

unsigned int *__fastcall MiLocatePagefileSubsection(unsigned int *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  unsigned __int64 v4; // r11
  unsigned int v5; // r8d

  v2 = *a2;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 56LL) & 0x1000) != 0 )
  {
    v3 = v2 >> 17;
    v4 = (unsigned int)(v2 >> 17);
    v5 = v2 & 0x1FFFF;
    if ( v5 )
      ++v4;
    if ( v4 <= *(unsigned int *)(*(_QWORD *)a1 + 96LL) )
    {
      a1 += 20 * v3;
      if ( v5 < (unsigned __int64)a1[11] )
      {
        *a2 = v5;
        return a1;
      }
    }
  }
  else if ( v2 < a1[11] )
  {
    return a1;
  }
  return 0LL;
}
