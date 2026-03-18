/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140074D2C
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14045DBFC (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
