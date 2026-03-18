/*
 * XREFs of PspIumGetProcessorInfo @ 0x14064383C
 * Callers:
 *     PsDispatchIumService @ 0x1401F5B10 (PsDispatchIumService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIumGetProcessorInfo(__int64 a1)
{
  __int64 result; // rax

  result = KiProcessorBlock[*(unsigned int *)(a1 + 8)];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(result + 25192);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
