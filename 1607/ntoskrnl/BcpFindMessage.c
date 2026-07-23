/*
 * XREFs of BcpFindMessage @ 0x1407D4224
 * Callers:
 *     BcpGetProgressMessages @ 0x1401417C0 (BcpGetProgressMessages.c)
 *     BgpBcInitializeCriticalMode @ 0x1407D3ED8 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     ResFwFindMessage @ 0x140728410 (ResFwFindMessage.c)
 */

const wchar_t *__fastcall BcpFindMessage(ULONG a1)
{
  const wchar_t *result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rcx
  wchar_t v6; // dx
  unsigned __int64 v7; // rdx
  ULONG v8; // ebx
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ULONG v12; // ebx

  result = (const wchar_t *)ResFwFindMessage(a1);
  if ( !result )
  {
    if ( a1 > 0x41008016 )
    {
      switch ( a1 )
      {
        case 0xC1008001:
          return L"Your PC ran into a problem and needs to restart.";
        case 0xC1008003:
          return L"If you call a support person, give them this info:";
        case 0xC1008008:
          return L"We're just collecting some error info, and then we'll restart for you.";
        case 0xC1008012:
        case 0xC1008013:
          return L"%1% complete";
      }
    }
    else
    {
      if ( a1 == 1090551830 )
        return L"For more information about this issue and possible fixes, visit http://windows.com/stopcode";
      v8 = a1 - 1090551814;
      if ( !v8 )
        return L"1";
      v9 = v8 - 3;
      if ( !v9 )
        return L"We're just collecting some error info, and then you can restart.";
      v10 = v9 - 7;
      if ( !v10 )
        return L"We'll restart for you.";
      v11 = v10 - 1;
      if ( !v11 )
        return L"You can restart.";
      v12 = v11 - 3;
      if ( !v12 )
        return L"What failed:";
      if ( v12 == 1 )
        return L"Stop Code:";
    }
    return 0LL;
  }
  v3 = 0;
  v4 = -1LL;
  do
    ++v4;
  while ( result[v4] );
  if ( v4 )
  {
    v5 = 0LL;
    do
    {
      v6 = result[v5];
      if ( v6 == 13 || v6 == 10 )
        result[v5] = 0;
      ++v3;
      v7 = -1LL;
      v5 = v3;
      do
        ++v7;
      while ( result[v7] );
    }
    while ( v3 < v7 );
  }
  return result;
}
