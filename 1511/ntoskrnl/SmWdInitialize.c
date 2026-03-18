/*
 * XREFs of SmWdInitialize @ 0x14013ECA4
 * Callers:
 *     SmKmInitialize @ 0x140541808 (SmKmInitialize.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SmWdInitialize(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax

  memset(a1, 0, 0x98uLL);
  *a1 = 0LL;
  *(_BYTE *)a1 = 8;
  a1[2] = a1 + 1;
  a1[1] = a1 + 1;
  a1[3] = 0LL;
  a1[7] = 0LL;
  a1[11] = SmWdDPC;
  a1[12] = a2;
  *((_DWORD *)a1 + 16) = 275;
  a1[15] = 0LL;
  a1[10] = 0LL;
  a1[18] = 0LL;
  a1[17] = a1 + 16;
  a1[16] = 0LL;
  result = 10000000LL;
  WatchdogReadsQueueTimeout.QuadPart = 10000000LL;
  WatchdogWritesQueueTimeout.QuadPart = 10000000LL;
  return result;
}
