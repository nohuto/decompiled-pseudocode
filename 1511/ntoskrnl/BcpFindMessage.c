/*
 * XREFs of BcpFindMessage @ 0x140788038
 * Callers:
 *     BcpGetProgressMessages @ 0x140137CB8 (BcpGetProgressMessages.c)
 *     BgpBcInitializeCriticalMode @ 0x140787D38 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     ResFwFindMessage @ 0x1406DC348 (ResFwFindMessage.c)
 */

const wchar_t *__fastcall BcpFindMessage(ULONG a1)
{
  const wchar_t *result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rcx
  wchar_t v6; // dx
  unsigned __int64 v7; // rdx

  result = (const wchar_t *)ResFwFindMessage(a1);
  if ( result )
  {
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
  }
  else
  {
    switch ( a1 )
    {
      case 0x41008006u:
        return L"1";
      case 0x41008009u:
        return L"We're just collecting some error info, and then you can restart.";
      case 0x41008010u:
        return L"We'll restart for you.";
      case 0x41008011u:
        return L"You can restart.";
      case 0xC1008001:
        return L"Your PC ran into a problem and needs to restart.";
      case 0xC1008003:
        return L"If you'd like to know more, you can search online later for this error:";
      case 0xC1008008:
        return L"We're just collecting some error info, and then we'll restart for you.";
      default:
        result = L"(%1% complete)";
        if ( a1 != -1056931822 && a1 != -1056931821 )
          return 0LL;
        break;
    }
  }
  return result;
}
