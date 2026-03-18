/*
 * XREFs of CategoryMaskFromEvent @ 0x140189F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CategoryMaskFromEvent(unsigned int a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  if ( a1 == 32779 )
    return 64LL;
  if ( a1 <= 0x800A )
  {
    if ( a1 == 32778 )
      return 32LL;
    if ( a1 > 0x4001 )
    {
      if ( a1 != 32773 )
      {
        if ( a1 <= 0x8005 )
        {
          switch ( a1 )
          {
            case 0x4002u:
            case 0x4003u:
            case 0x4004u:
            case 0x4005u:
            case 0x4006u:
            case 0x4007u:
              return 2LL;
            default:
              return 0x8000LL;
          }
        }
        return 0x8000LL;
      }
      return 4LL;
    }
    else if ( a1 == 16385 )
    {
      return 2LL;
    }
    else
    {
      v2 = a1 - 4;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( v3 )
        {
          if ( v3 - 1 >= 2 )
            return 0x8000LL;
        }
      }
      return 1LL;
    }
  }
  if ( a1 > 0x7FFFFF10 )
  {
    if ( a1 <= 0x80000002 )
    {
      if ( a1 != -2147483646 )
      {
        if ( a1 > 0x7FFFFF30 )
        {
          if ( a1 != 0x80000000 && a1 != -2147483647 )
            return 0x8000LL;
        }
        else if ( a1 != 2147483440 )
        {
          v6 = a1 - 2147483409;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 != 14 )
                return 0x8000LL;
            }
          }
        }
      }
    }
    else if ( a1 != -2147483645 )
    {
      if ( a1 == -2147483643 || a1 == -2147483644 )
        return 512LL;
      if ( a1 != -2147483642 )
      {
        v4 = 256;
        if ( a1 != -2147483641 )
          return 0x8000;
        return v4;
      }
    }
    return 256LL;
  }
  if ( a1 == 2147483408 )
    return 256LL;
  v5 = a1 - 32780;
  if ( !v5 )
    return 8LL;
  if ( v5 != 2 )
    return 0x8000LL;
  return 16LL;
}
