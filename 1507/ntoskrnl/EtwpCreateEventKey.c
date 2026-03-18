/*
 * XREFs of EtwpCreateEventKey @ 0x14011F864
 * Callers:
 *     EtwpWriteUserEvent @ 0x140437B50 (EtwpWriteUserEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall EtwpCreateEventKey(unsigned __int64 *a1)
{
  volatile signed __int64 *EtwSupport; // rdx
  unsigned __int64 result; // rax

  EtwSupport = (volatile signed __int64 *)KeGetCurrentPrcb()->EtwSupport;
  result = _InterlockedIncrement64(EtwSupport + 137) & 0xFFFFFFFFFFFFLL | ((unsigned __int64)*(unsigned int *)EtwSupport << 48);
  *a1 = result;
  return result;
}
