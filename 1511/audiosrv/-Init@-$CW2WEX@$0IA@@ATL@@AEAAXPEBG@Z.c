/*
 * XREFs of ?Init@?$CW2WEX@$0IA@@ATL@@AEAAXPEBG@Z @ 0x18007E16C
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x18007E214 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x18007DF18 (--$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z.c)
 */

void __fastcall ATL::CW2WEX<128>::Init(void **a1, _WORD *a2)
{
  __int64 v4; // rbx
  int v5; // ebx
  errno_t v6; // eax

  if ( a2 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a2[v4] );
    v5 = v4 + 1;
    ATL::AtlConvAllocMemory<unsigned short>(a1, v5, a1 + 1);
    v6 = memcpy_s(*a1, 2LL * v5, a2, 2LL * v5);
    if ( v6 )
    {
      if ( v6 == 12 )
        ATL::AtlThrowImpl(-2147024882);
      if ( v6 == 22 || v6 == 34 )
        ATL::AtlThrowImpl(-2147024809);
      if ( v6 != 80 )
        ATL::AtlThrowImpl(-2147467259);
    }
  }
  else
  {
    *a1 = 0LL;
  }
}
