/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140074DAC
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14045CACC (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
