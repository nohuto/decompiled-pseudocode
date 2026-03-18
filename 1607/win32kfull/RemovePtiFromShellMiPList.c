/*
 * XREFs of RemovePtiFromShellMiPList @ 0x1C009B130
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C0099B20 (xxxSetThreadDesktop.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RemovePtiFromShellMiPList(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *i; // rdx

  v1 = 0LL;
  for ( i = gaptiShellMiP; *i != a1; ++i )
  {
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 5 )
      return 0LL;
  }
  gaptiShellMiP[v1] = 0LL;
  return 1LL;
}
