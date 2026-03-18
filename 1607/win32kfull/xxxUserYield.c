/*
 * XREFs of xxxUserYield @ 0x1C01E09AC
 * Callers:
 *     NtUserYieldTask @ 0x1C021C130 (NtUserYieldTask.c)
 * Callees:
 *     xxxReceiveMessage @ 0x1C007F630 (xxxReceiveMessage.c)
 */

__int64 __fastcall xxxUserYield(__int64 a1)
{
  __int64 i; // rax

  for ( i = *(_QWORD *)(a1 + 400); (*(_BYTE *)(i + 6) & 0x40) != 0; i = *(_QWORD *)(a1 + 400) )
    xxxReceiveMessage(a1);
  return 1LL;
}
