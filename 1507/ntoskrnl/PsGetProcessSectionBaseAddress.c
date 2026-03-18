/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x1400F0014
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14050CB2C (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
