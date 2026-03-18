/*
 * XREFs of PiDqGetPnpObjectType @ 0x14043FA70
 * Callers:
 *     PiDqPropertyCallback @ 0x14043F850 (PiDqPropertyCallback.c)
 *     PiDqQueryAppendActionEntry @ 0x1404407A4 (PiDqQueryAppendActionEntry.c)
 *     PiDqActionDataCreate @ 0x1404424C4 (PiDqActionDataCreate.c)
 *     PiDqQueryValidateQueryData @ 0x1404D8E28 (PiDqQueryValidateQueryData.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDqGetPnpObjectType(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  v1 = 0;
  v2 = a1 - 1;
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 == 3 )
            return 2;
        }
        else
        {
          return 4;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 5;
    }
  }
  else
  {
    return 3;
  }
  return v1;
}
