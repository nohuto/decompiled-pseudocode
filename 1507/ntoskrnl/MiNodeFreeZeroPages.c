/*
 * XREFs of MiNodeFreeZeroPages @ 0x140100E30
 * Callers:
 *     MiSignalLargePageRebuild @ 0x140012694 (MiSignalLargePageRebuild.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     MiReplenishPageSlist @ 0x1401009F0 (MiReplenishPageSlist.c)
 *     MiFreeZeroPagesNeeded @ 0x14022D920 (MiFreeZeroPagesNeeded.c)
 *     MiRebuildLargePages @ 0x14051CFF0 (MiRebuildLargePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFreeZeroPages(__int64 a1, unsigned int a2, __int16 a3)
{
  __int64 result; // rax
  __int64 i; // r10

  result = 0LL;
  for ( i = 0LL; ; i = 1LL )
  {
    result += (unsigned int)MmNumberOfChannels > 1
            ? *(_QWORD *)(a1 + 8 * (i + 2LL * a2) + 1232)
            : *(_QWORD *)(a1 + 8 * i + 1168);
    if ( (a3 & 0x400) != 0 )
      result += (*(_QWORD *)(a1 + 8 * (a2 + 4 * i) + 272) + *(_QWORD *)(a1 + 8 * (a2 + 4 * i) + 336)) << 9;
    if ( (a3 & 2) != 0 )
      break;
    a3 |= 2u;
  }
  return result;
}
