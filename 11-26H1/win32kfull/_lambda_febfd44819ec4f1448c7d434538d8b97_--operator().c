/*
 * XREFs of _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x140179668
 * Callers:
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1401790C4 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     CoreWindowProp::ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6___ @ 0x1401796D0 (CoreWindowProp--ForEachDescendantInComponentHierarchy__lambda_bb5024e92f2af5f128f82535936e29d6__.c)
 * Callees:
 *     ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x140179780 (-_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z.c)
 */

_QWORD *__fastcall lambda_febfd44819ec4f1448c7d434538d8b97_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v4; // rbx

  result = *(_QWORD **)a1;
  if ( **(_QWORD **)a1 )
  {
    v4 = *(_QWORD **)a1;
    result = (_QWORD *)_DeferWindowPosAndBand(
                         **(_QWORD **)a1,
                         a2,
                         a3,
                         0LL,
                         0,
                         0,
                         0,
                         **(_DWORD **)(a1 + 8),
                         **(_DWORD **)(a1 + 16),
                         **(_DWORD **)(a1 + 24));
    *v4 = result;
  }
  return result;
}
