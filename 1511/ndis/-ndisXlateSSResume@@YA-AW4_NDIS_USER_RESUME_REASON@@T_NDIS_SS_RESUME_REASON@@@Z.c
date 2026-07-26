/*
 * XREFs of ?ndisXlateSSResume@@YA?AW4_NDIS_USER_RESUME_REASON@@T_NDIS_SS_RESUME_REASON@@@Z @ 0x1C00570BC
 * Callers:
 *     ndisGetPowerInfo @ 0x1C0057550 (ndisGetPowerInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisXlateSSResume(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a1 < 15 )
  {
    result = 5LL;
    if ( a1 > 5 )
    {
      result = 6LL;
      switch ( a1 )
      {
        case 6:
          return result;
        case 7:
          return 17LL;
        case 8:
          return 18LL;
        case 9:
          return 19LL;
      }
    }
    else
    {
      switch ( a1 )
      {
        case 5:
          return result;
        case 0:
          return 0LL;
        case 1:
          return 1LL;
        case 2:
          return 2LL;
        case 3:
          return 3LL;
        case 4:
          return 4LL;
      }
    }
  }
  if ( a1 > 49 )
  {
    switch ( a1 )
    {
      case '2':
        return 13LL;
      case '4':
        return 14LL;
      case '6':
        return 15LL;
      case 'A':
        return 16LL;
      default:
        return 0LL;
    }
  }
  else if ( a1 == 49 )
  {
    return 12LL;
  }
  else
  {
    v2 = a1 - 33;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            if ( v5 == 1 )
              return 11LL;
            return 0LL;
          }
          return 10LL;
        }
        else
        {
          return 9LL;
        }
      }
      else
      {
        return 8LL;
      }
    }
    else
    {
      return 7LL;
    }
  }
}
