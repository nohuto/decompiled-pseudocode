/*
 * XREFs of _GetBaseTypeSize @ 0x140099AFC
 * Callers:
 *     _PnpValidatePropertyData @ 0x14045C944 (_PnpValidatePropertyData.c)
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
      v9 = v1 - 11;
      if ( !v9 )
        return 8LL;
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 != 1 )
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
    v6 = v1 - 22;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
LABEL_22:
          if ( v8 == 1 )
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
        v8 = v4 - 1;
        if ( v8 )
          goto LABEL_22;
      }
      return 1LL;
    }
    return 8LL;
  }
  return 20LL;
}
