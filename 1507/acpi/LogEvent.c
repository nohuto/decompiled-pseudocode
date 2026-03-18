/*
 * XREFs of LogEvent @ 0x1C001F2E8
 * Callers:
 *     LogSchedEvent @ 0x1C001F290 (LogSchedEvent.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall LogEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7, __int64 a8)
{
  __int64 v9; // rdx
  PVOID result; // rax

  if ( (gDebugger & 0x8000) != 0 )
  {
    if ( P )
    {
      v9 = 9LL * (_InterlockedExchangeAdd((_DWORD *)&qword_1C005A1E8 + 1, 1u) % (unsigned int)qword_1C005A1E8);
      *((_QWORD *)P + v9 + 1) = MEMORY[0xFFFFF78000000008];
      *((_DWORD *)P + 2 * v9) = a1;
      *((_QWORD *)P + v9 + 2) = a2;
      *((_QWORD *)P + v9 + 3) = a3;
      *((_QWORD *)P + v9 + 4) = a4;
      *((_QWORD *)P + v9 + 5) = a5;
      *((_QWORD *)P + v9 + 6) = a6;
      *((_QWORD *)P + v9 + 7) = a7;
      result = P;
      *((_QWORD *)P + v9 + 8) = a8;
    }
  }
  return result;
}
