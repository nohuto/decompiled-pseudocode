/*
 * XREFs of PspIumGetProcessorInfo @ 0x1406823AC
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspIumGetProcessorInfo(__int64 a1)
{
  __int64 result; // rax

  result = KiProcessorBlock[*(unsigned int *)(a1 + 8)];
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(result + 25320);
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
