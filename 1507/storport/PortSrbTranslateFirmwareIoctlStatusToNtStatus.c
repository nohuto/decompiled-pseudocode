/*
 * XREFs of PortSrbTranslateFirmwareIoctlStatusToNtStatus @ 0x1C0020B30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PortSrbTranslateFirmwareIoctlStatusToNtStatus(unsigned int a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  unsigned int v8; // ecx

  if ( a1 > 5 )
  {
    v5 = a1 - 6;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 9;
        if ( v7 )
        {
          v8 = v7 - 16;
          if ( v8 )
          {
            if ( v8 != 32 )
              return 3221225473LL;
            return 3221226627LL;
          }
          else
          {
            return 2147483697LL;
          }
        }
        else
        {
          return 3221225666LL;
        }
      }
      else
      {
        return 3221226629LL;
      }
    }
    else
    {
      return 3221226628LL;
    }
  }
  else
  {
    if ( a1 != 5 )
    {
      result = 0LL;
      if ( !a1 )
        return result;
      v2 = a1 - 1;
      if ( v2 )
      {
        v3 = v2 - 1;
        if ( !v3 )
          return 3221225501LL;
        v4 = v3 - 1;
        if ( !v4 )
          return 3221225485LL;
        if ( v4 == 1 )
          return 3221225990LL;
      }
      return 3221225473LL;
    }
    return 2147483653LL;
  }
}
