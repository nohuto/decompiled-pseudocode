/*
 * XREFs of ??$AtlConvAllocMemory@G@ATL@@YAXPEAPEAGHPEAGH@Z @ 0x180065828
 * Callers:
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEBG@Z @ 0x180065B18 (-Initialize@CAppAudioSessionId@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::AtlConvAllocMemory<unsigned short>(void **a1, int a2, void *a3)
{
  void *v5; // rcx
  void *v6; // rax

  if ( !a1 )
    ATL::AtlThrowImpl(-2147024809);
  if ( a2 < 0 )
    ATL::AtlThrowImpl(-2147024809);
  if ( !a3 )
    ATL::AtlThrowImpl(-2147024809);
  if ( *a1 != a3 )
  {
    v5 = *a1;
    if ( a2 <= 128 )
    {
      free(v5);
      *a1 = a3;
      goto LABEL_16;
    }
    v6 = (void *)_o__recalloc(v5, a2, 2LL);
    if ( !v6 )
      ATL::AtlThrowImpl(-2147024882);
    goto LABEL_14;
  }
  if ( a2 > 128 )
  {
    v6 = calloc(a2, 2uLL);
LABEL_14:
    *a1 = v6;
    goto LABEL_16;
  }
  *a1 = a3;
LABEL_16:
  if ( !*a1 )
    ATL::AtlThrowImpl(-2147024882);
}
