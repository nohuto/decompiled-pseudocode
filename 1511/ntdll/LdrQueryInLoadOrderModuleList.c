/*
 * XREFs of LdrQueryInLoadOrderModuleList @ 0x18006CD90
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x18006C728 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800C93F4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *a2 = &qword_180145210;
  if ( a3 )
    *a3 = &qword_180145230;
  return 0LL;
}
