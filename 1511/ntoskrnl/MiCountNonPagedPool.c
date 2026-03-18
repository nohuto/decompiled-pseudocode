/*
 * XREFs of MiCountNonPagedPool @ 0x1400B46D4
 * Callers:
 *     MiIncreaseNonPagedPoolUsage @ 0x1400B3F88 (MiIncreaseNonPagedPoolUsage.c)
 *     MiReturnNonPagedPoolVa @ 0x1400B4000 (MiReturnNonPagedPoolVa.c)
 * Callees:
 *     MiSignalNonPagedPoolWatchers @ 0x140133234 (MiSignalNonPagedPoolWatchers.c)
 */

unsigned __int64 __fastcall MiCountNonPagedPool(unsigned __int64 a1, int a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 result; // rax

  if ( a2 == 1 )
    v3 = a1 + _InterlockedExchangeAdd64(&qword_1402FE198, a1);
  else
    v3 = _InterlockedExchangeAdd64(&qword_1402FE198, -(__int64)a1);
  v4 = MiState[0];
  if ( v3 >= MiState[0] - 5120 && v3 - a1 < MiState[0] - 5120 || v3 >= MiState[0] - 2048 && v3 - a1 < MiState[0] - 2048 )
    MiSignalNonPagedPoolWatchers();
  result = 0LL;
  if ( a2 == 1 && v3 < v4 )
    return v4 - v3;
  return result;
}
