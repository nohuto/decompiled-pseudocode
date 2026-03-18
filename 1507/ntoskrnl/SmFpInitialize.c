/*
 * XREFs of SmFpInitialize @ 0x1402575B8
 * Callers:
 *     SmFirstTimeInit @ 0x1404F9AFC (SmFirstTimeInit.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall SmFpInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x68uLL);
  *(_DWORD *)(a1 + 12) = 0;
  result = a1 + 16;
  *(_WORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return result;
}
