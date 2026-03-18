/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14014CE0C
 * Callers:
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140353C00;
    if ( qword_140353C00 )
      return (__int64 (*)(void))qword_140353C00();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
