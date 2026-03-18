/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14011296C
 * Callers:
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140328A10;
    if ( qword_140328A10 )
      return (__int64 (*)(void))qword_140328A10();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
