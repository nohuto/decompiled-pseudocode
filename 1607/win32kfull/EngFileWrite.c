/*
 * XREFs of EngFileWrite @ 0x1C027B5B0
 * Callers:
 *     <none>
 * Callees:
 *     _CtxDoFileIo @ 0x1C02CCCA4 (_CtxDoFileIo.c)
 */

__int64 __fastcall EngFileWrite(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v5; // ebx
  __int64 result; // rax

  v5 = a3;
  result = CtxDoFileIo(a1, a1, a2, a3);
  if ( (int)result < 0 )
    v5 = 0;
  *a4 = v5;
  return result;
}
