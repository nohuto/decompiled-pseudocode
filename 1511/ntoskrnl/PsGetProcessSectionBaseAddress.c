/*
 * XREFs of PsGetProcessSectionBaseAddress @ 0x140092440
 * Callers:
 *     EtwpQueryProcessOtherInfo @ 0x14044A2DC (EtwpQueryProcessOtherInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSectionBaseAddress(__int64 a1)
{
  return *(_QWORD *)(a1 + 960);
}
