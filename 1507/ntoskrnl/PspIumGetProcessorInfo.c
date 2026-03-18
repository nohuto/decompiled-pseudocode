/*
 * XREFs of PspIumGetProcessorInfo @ 0x1406C65D8
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
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
