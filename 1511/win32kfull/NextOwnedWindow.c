/*
 * XREFs of NextOwnedWindow @ 0x1C0074CA0
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0074AD4 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C007694C (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C0100EB8 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v5; // rdx
  bool i; // zf
  _QWORD *v7; // rax

  if ( a1 )
    goto LABEL_8;
  a1 = *(_QWORD **)(a3 + 96);
  if ( !a1 )
    return 0LL;
  do
  {
    v5 = (_QWORD *)a1[13];
    v7 = a1;
    for ( i = a1 == v5; !i; i = v5 == (_QWORD *)a1[11] )
    {
      v7 = v5;
      if ( !v5 )
        break;
      v5 = (_QWORD *)v5[11];
    }
    if ( a2 == v7 )
      break;
LABEL_8:
    a1 = (_QWORD *)a1[9];
  }
  while ( a1 );
  return a1;
}
