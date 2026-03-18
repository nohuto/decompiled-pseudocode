/*
 * XREFs of MiUpdateWorkingSetPrivateSize @ 0x1400BDD70
 * Callers:
 *     MmUnmapViewInSystemCache @ 0x1400492C0 (MmUnmapViewInSystemCache.c)
 *     MiBuildForkPte @ 0x1400BCCA0 (MiBuildForkPte.c)
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x1400FDEF0 (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 *     MiDemoteCombinedPte @ 0x1401F97B0 (MiDemoteCombinedPte.c)
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
