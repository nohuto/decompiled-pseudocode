/*
 * XREFs of LocalGetAceCount @ 0x14068584C
 * Callers:
 *     LocalGetAclForString @ 0x1406859BC (LocalGetAclForString.c)
 * Callees:
 *     FContainCallBackAce @ 0x140683FDC (FContainCallBackAce.c)
 */

__int64 __fastcall LocalGetAceCount(wchar_t *a1, wchar_t *a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  int v5; // ebp
  unsigned int v6; // esi
  BOOL v7; // r12d
  wchar_t *v9; // rdi
  int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  wchar_t v15; // ax

  v3 = 0;
  v5 = 0;
  *a3 = 0;
  v6 = 0;
  v7 = 0;
  v9 = a1;
  if ( !(unsigned int)FContainCallBackAce(a1) )
  {
    v10 = 0;
    v11 = 0LL;
    v12 = (unsigned __int64)((char *)a2 - (char *)v9 + 1) >> 1;
    if ( v9 > a2 )
      v12 = 0LL;
    if ( v12 )
    {
      do
      {
        if ( *v9 == 59 )
        {
          ++v6;
        }
        else if ( *v9 != 40 )
        {
          v10 = 1;
        }
        ++v9;
        ++v11;
      }
      while ( v11 < v12 );
    }
    if ( v6 == 5 * (v6 / 5) && (v6 || !v10) )
    {
      *a3 = v6 / 5;
      return v3;
    }
    return 87;
  }
  while ( v9 < a2 && *v9 == 32 )
    ++v9;
  if ( v9 == a2 || (v13 = 0, *v9 != 40) )
    v13 = 1;
  if ( v9 < a2 )
  {
    v14 = v13;
    while ( 1 )
    {
      v15 = *v9;
      if ( *v9 != 32 )
      {
        if ( v14 )
          break;
      }
      if ( v15 != 40 || v7 )
      {
        if ( v15 != 41 || v7 )
        {
          if ( v15 == 59 )
          {
            ++v6;
          }
          else if ( v15 == 34 )
          {
            v7 = !v7;
          }
        }
        else
        {
          if ( !v5 )
            return 1336;
          if ( v5 == 1 )
          {
            if ( v6 < 5 )
              return 1336;
            ++*a3;
            v6 = 0;
          }
          --v5;
        }
      }
      else
      {
        ++v5;
      }
      if ( ++v9 >= a2 )
      {
        if ( !v5 )
          return v3;
        *a3 = 0;
        return 1336;
      }
    }
    return 87;
  }
  return v3;
}
