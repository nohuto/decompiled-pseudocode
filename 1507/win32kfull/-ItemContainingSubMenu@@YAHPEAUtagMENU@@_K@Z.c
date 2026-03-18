/*
 * XREFs of ?ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z @ 0x1C024460C
 * Callers:
 *     ?UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z @ 0x1C0122228 (-UT_FindTopLevelMenuIndex@@YAHPEAUtagMENU@@I@Z.c)
 *     ?ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z @ 0x1C024460C (-ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z.c)
 * Callees:
 *     ?ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z @ 0x1C024460C (-ItemContainingSubMenu@@YAHPEAUtagMENU@@_K@Z.c)
 */

__int64 __fastcall ItemContainingSubMenu(struct tagMENU *a1, unsigned __int64 a2)
{
  unsigned int v2; // eax
  int v4; // ebx
  struct tagMENU **v6; // rdi
  struct tagMENU *v7; // rcx

  v4 = *((_DWORD *)a1 + 13) - 1;
  if ( !*((_DWORD *)a1 + 13) )
    return v4 | v2;
  if ( v4 >= 0 )
  {
    v6 = (struct tagMENU **)(*((_QWORD *)a1 + 10) + 152LL * v4 + 16);
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        if ( v7 == (struct tagMENU *)a2 || (unsigned int)ItemContainingSubMenu(v7, a2) != -1 )
          return (unsigned int)v4;
      }
      else if ( *((_DWORD *)v6 - 2) == a2 )
      {
        return (unsigned int)v4;
      }
      v6 -= 19;
      --v4;
    }
    while ( v4 >= 0 );
  }
  return (unsigned int)v4;
}
