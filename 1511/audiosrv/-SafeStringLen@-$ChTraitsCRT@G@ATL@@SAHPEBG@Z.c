/*
 * XREFs of ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x18003A530
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180012000 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180014360 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Replace@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z @ 0x180018CB0 (-Replace@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEBG0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::ChTraitsCRT<unsigned short>::SafeStringLen(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
