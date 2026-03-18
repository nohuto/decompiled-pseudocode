/*
 * XREFs of EngFileWrite @ 0x140349320
 * Callers:
 *     <none>
 * Callees:
 *     _CtxDoFileIo @ 0x14034DE9C (_CtxDoFileIo.c)
 */

__int64 __fastcall EngFileWrite(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v7; // ecx

  result = CtxDoFileIo(a1, a1, a2, a3);
  v7 = 0;
  if ( (int)result >= 0 )
    v7 = a3;
  *a4 = v7;
  return result;
}
