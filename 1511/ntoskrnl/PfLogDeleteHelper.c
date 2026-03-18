/*
 * XREFs of PfLogDeleteHelper @ 0x14001BAB4
 * Callers:
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x14001BC98 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14001BD60 (PfFbLogEntryComplete.c)
 */

__int64 __fastcall PfLogDeleteHelper(char a1, __int64 a2, int a3, int a4)
{
  int v8; // ebx

  v8 = PfFbLogEntryReserve(&stru_140302560);
  if ( v8 >= 0 )
  {
    MEMORY[0x10] = (4 * a4) | a1 & 3;
    MEMORY[0x18] = a2;
    MEMORY[0] = MEMORY[0] & 0x80000000 | 0x103;
    MEMORY[4] = dword_14030575C
              + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10);
    MEMORY[8] = a3;
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v8;
}
