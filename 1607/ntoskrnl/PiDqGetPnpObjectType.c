/*
 * XREFs of PiDqGetPnpObjectType @ 0x1405025EC
 * Callers:
 *     PiDqActionDataCreate @ 0x14048BD40 (PiDqActionDataCreate.c)
 *     PiDqQueryValidateQueryData @ 0x14048C734 (PiDqQueryValidateQueryData.c)
 *     PiDqQueryAppendActionEntry @ 0x14048C88C (PiDqQueryAppendActionEntry.c)
 *     PiDqPropertyCallback @ 0x1405023CC (PiDqPropertyCallback.c)
 *     PiDqIrpPropertySet @ 0x1406318E0 (PiDqIrpPropertySet.c)
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
