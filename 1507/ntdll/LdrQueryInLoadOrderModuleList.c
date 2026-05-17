/*
 * XREFs of LdrQueryInLoadOrderModuleList @ 0x1800694D0
 * Callers:
 *     LdrQueryProcessModuleInformationEx @ 0x180068EE8 (LdrQueryProcessModuleInformationEx.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800BC6D4 (LdrQueryProcessModuleInformationEx2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LdrQueryInLoadOrderModuleList(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  *a2 = &qword_1801461D0;
  if ( a3 )
    *a3 = &qword_1801461F0;
  return 0LL;
}
