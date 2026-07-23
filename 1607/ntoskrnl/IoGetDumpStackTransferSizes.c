/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x140112EDC
 * Callers:
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 * Callees:
 *     <none>
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140328A50;
    if ( qword_140328A50 )
      return (__int64 (*)(void))qword_140328A50();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
