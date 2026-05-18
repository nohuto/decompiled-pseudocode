/*
 * XREFs of sub_180004520 @ 0x180004520
 * Callers:
 *     sub_180001200 @ 0x180001200 (sub_180001200.c)
 * Callees:
 *     <none>
 */

int *sub_180004520()
{
  int *result; // rax

  dword_18000C710 = 0;
  BaseAddress = 0LL;
  *(_OWORD *)&hObject = 0LL;
  InitializeCriticalSection(&CriticalSection);
  result = &dword_18000C710;
  byte_18000C758 = 0;
  return result;
}
