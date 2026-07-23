/*
 * XREFs of _GetBaseTypeSize @ 0x14010B0C8
 * Callers:
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseTypeSize(__int16 a1)
{
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx

  v1 = a1 & 0xFFF;
  if ( v1 <= 0xF )
  {
    if ( v1 == 15 )
      return 8LL;
    if ( v1 > 0xA )
    {
      v6 = v1 - 11;
      if ( !v6 )
        return 8LL;
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 != 1 )
            return 0LL;
          return 8LL;
        }
      }
      return 16LL;
    }
    if ( v1 != 10 )
    {
      if ( v1 <= 5 )
      {
        if ( v1 >= 4 )
          return 2LL;
        return v1 > 1;
      }
      if ( v1 > 7 )
        return 8LL;
    }
    return 4LL;
  }
  if ( v1 > 0x15 )
  {
    v10 = v1 - 22;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v9 = v11 - 1;
        if ( v9 )
        {
LABEL_28:
          if ( v9 == 1 )
            return 2LL;
          return 0LL;
        }
      }
    }
    return 4LL;
  }
  if ( v1 != 21 )
  {
    v2 = v1 - 16;
    if ( v2 )
    {
      v3 = v2 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( !v4 )
          return 2LL;
        v9 = v4 - 1;
        if ( v9 )
          goto LABEL_28;
      }
      return 1LL;
    }
    return 8LL;
  }
  return 20LL;
}
