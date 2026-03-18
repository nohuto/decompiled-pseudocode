/*
 * XREFs of MapClientToServerPfn @ 0x1C011D63C
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 *     InternalRegisterClassEx @ 0x1C011C78C (InternalRegisterClassEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MapClientToServerPfn(__int64 a1)
{
  int v2; // eax
  _QWORD *i; // r8
  _QWORD *v4; // rcx

  v2 = 666;
  for ( i = (_QWORD *)(gpsi + 576LL); *i != a1; ++i )
  {
    if ( ++v2 > 672 )
    {
      v4 = (_QWORD *)(gpsi + 392LL);
      v2 = 666;
      while ( *v4 != a1 )
      {
        ++v2;
        ++v4;
        if ( v2 > 672 )
          return 0LL;
      }
      return *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF3FFF) - 666) + 272);
    }
  }
  return *(_QWORD *)(gpsi + 8LL * ((v2 & 0xFFFF3FFF) - 666) + 272);
}
