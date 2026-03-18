/*
 * XREFs of ?IsSPIActionAllowedForFilteredProcess@@YAHI@Z @ 0x1C000A010
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsSPIActionAllowedForFilteredProcess(unsigned int a1)
{
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  bool v4; // zf
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  bool v8; // zf
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx

  if ( a1 <= 0x84 )
  {
    if ( a1 != 132 )
    {
      switch ( a1 )
      {
        case 1u:
        case 3u:
        case 5u:
        case 0xAu:
        case 0xEu:
        case 0x10u:
        case 0x16u:
        case 0x19u:
        case 0x1Bu:
        case 0x1Fu:
        case 0x26u:
        case 0x29u:
        case 0x2Bu:
        case 0x2Du:
        case 0x30u:
        case 0x32u:
        case 0x34u:
        case 0x36u:
        case 0x38u:
        case 0x3Au:
        case 0x3Cu:
        case 0x3Eu:
        case 0x40u:
        case 0x42u:
        case 0x44u:
        case 0x46u:
        case 0x48u:
        case 0x4Au:
        case 0x4Fu:
        case 0x50u:
        case 0x53u:
        case 0x54u:
        case 0x59u:
        case 0x5Eu:
        case 0x5Fu:
        case 0x62u:
        case 0x64u:
        case 0x66u:
        case 0x68u:
        case 0x6Au:
        case 0x6Cu:
        case 0x6Eu:
        case 0x70u:
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x76u:
        case 0x78u:
        case 0x7Au:
        case 0x7Cu:
        case 0x7Eu:
        case 0x80u:
        case 0x82u:
          return 1LL;
        default:
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( a1 <= 0x1022 )
  {
    if ( a1 == 4130 )
      return 1LL;
    if ( a1 > 0x1008 )
    {
      switch ( a1 )
      {
        case 0x100Au:
        case 0x100Cu:
        case 0x100Eu:
        case 0x1012u:
        case 0x1014u:
        case 0x1016u:
        case 0x1018u:
        case 0x101Au:
        case 0x101Cu:
        case 0x101Eu:
        case 0x1020u:
          return 1LL;
        default:
          return 0LL;
      }
    }
    if ( a1 == 4104 )
      return 1LL;
    if ( a1 <= 0x90 )
    {
      if ( a1 == 144 )
        return 1LL;
      v11 = a1 - 134;
      if ( !v11 )
        return 1LL;
      v9 = v11 - 2;
      v8 = v9 == 0;
    }
    else
    {
      v7 = a1 - 158;
      if ( !v7 )
        return 1LL;
      v9 = v7 - 3938;
      v8 = v9 == 0;
    }
    if ( !v8 )
    {
      v5 = v9 - 2;
      v4 = v5 == 0;
      goto LABEL_14;
    }
    return 1LL;
  }
  if ( a1 > 0x2006 )
  {
    switch ( a1 )
    {
      case 0x2008u:
      case 0x200Au:
      case 0x200Cu:
      case 0x200Eu:
      case 0x2010u:
      case 0x2012u:
      case 0x2016u:
      case 0x2018u:
      case 0x201Au:
      case 0x201Cu:
      case 0x201Eu:
        return 1LL;
      default:
        return 0LL;
    }
  }
  if ( a1 == 8198 )
    return 1LL;
  if ( a1 > 0x1048 )
  {
    v10 = a1 - 4174;
    if ( !v10 )
      return 1LL;
    v12 = v10 - 2;
    if ( !v12 )
      return 1LL;
    v5 = v12 - 4016;
    v4 = v5 == 0;
  }
  else
  {
    if ( a1 == 4168 )
      return 1LL;
    v2 = a1 - 4132;
    if ( !v2 )
      return 1LL;
    v3 = v2 - 2;
    if ( !v3 )
      return 1LL;
    v5 = v3 - 24;
    v4 = v5 == 0;
  }
LABEL_14:
  if ( v4 )
    return 1LL;
  v6 = v5 - 2;
  return !v6 || v6 == 2;
}
