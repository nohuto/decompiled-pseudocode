/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1400BBC00
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x140048E40 (MmUnmapViewInSystemCache.c)
 *     MiBuildForkPte @ 0x1400BAB30 (MiBuildForkPte.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FBC70 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiUpdateWorkingSetPrivateSize(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  *(_QWORD *)(a1 + 136) += a3;
  result = 0xFFFFF68000000000uLL;
  if ( a2 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, a2 > 0xFFFFF6FFFFFFFFFFuLL) )
    *(_QWORD *)(a1 + 120) += a3;
  return result;
}
