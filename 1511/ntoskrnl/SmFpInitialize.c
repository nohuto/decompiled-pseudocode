/*
 * XREFs of SmFpInitialize @ 0x140208324
 * Callers:
 *     SmFirstTimeInit @ 0x1404D1E70 (SmFirstTimeInit.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall SmFpInitialize(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x70uLL);
  *(_DWORD *)(a1 + 12) = 0;
  result = a1 + 16;
  *(_WORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 10) = 6;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return result;
}
