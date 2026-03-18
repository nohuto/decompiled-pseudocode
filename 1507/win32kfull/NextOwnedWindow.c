/*
 * XREFs of NextOwnedWindow @ 0x1C0084DD0
 * Callers:
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0083CBC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     ?AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z @ 0x1C0084C20 (-AddSelfAndOwnees@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@11HI@Z.c)
 *     ?SetTopmost@@YAXPEAUtagWND@@HH@Z @ 0x1C00F8D94 (-SetTopmost@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall NextOwnedWindow(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v7; // rdx

  if ( a1 )
    goto LABEL_6;
  a1 = *(_QWORD **)(a3 + 96);
  if ( !a1 )
    return 0LL;
  do
  {
    v4 = (_QWORD *)a1[13];
    v5 = a1;
    if ( a1 != v4 )
    {
      v5 = (_QWORD *)a1[13];
      if ( v4 )
      {
        do
        {
          v7 = v5[11];
          if ( v7 == a1[11] )
            break;
          v5 = (_QWORD *)v5[11];
        }
        while ( v7 );
      }
    }
    if ( a2 == v5 )
      break;
LABEL_6:
    a1 = (_QWORD *)a1[9];
  }
  while ( a1 );
  return a1;
}
