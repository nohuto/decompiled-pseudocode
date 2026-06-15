/*
 * XREFs of ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x180036E70
 * Callers:
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x18003644C (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(
        unsigned __int16 *a1)
{
  unsigned __int16 *v1; // rdx
  unsigned __int16 v2; // cx
  __int64 result; // rax

  v1 = a1;
  if ( !a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *a1;
  result = 0LL;
  if ( v2 )
  {
    do
    {
      ++v1;
      result = (unsigned int)v2 + 33 * (_DWORD)result;
      v2 = *v1;
    }
    while ( *v1 );
  }
  return result;
}
