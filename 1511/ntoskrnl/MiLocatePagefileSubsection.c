/*
 * XREFs of MiLocatePagefileSubsection @ 0x1400D5B70
 * Callers:
 *     MiGetProtoPteAddress @ 0x14004B0A0 (MiGetProtoPteAddress.c)
 *     MiQueryAddressState @ 0x14005EA30 (MiQueryAddressState.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiOffsetToProtos @ 0x1400A36A0 (MiOffsetToProtos.c)
 *     MiAdvanceVadView @ 0x1400D6688 (MiAdvanceVadView.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140416800 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MmCommitSessionMappedView @ 0x14049C330 (MmCommitSessionMappedView.c)
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
