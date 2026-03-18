/*
 * XREFs of FindFunc @ 0x1C02A57D8
 * Callers:
 *     InitializeDriver @ 0x1C02A5804 (InitializeDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindFunc(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  _DWORD *i; // r8

  v1 = 0LL;
  v2 = 0LL;
  for ( i = (_DWORD *)qword_1C0334818; *i != a1; i += 4 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= 0x13 )
      return v1;
  }
  return *(_QWORD *)(qword_1C0334818 + 16 * v2 + 8);
}
