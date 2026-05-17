/*
 * XREFs of PssNtFreeRemoteSnapshot @ 0x1800F65A0
 * Callers:
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x180093CF0 (ZwReadVirtualMemory.c)
 */

__int64 PssNtFreeRemoteSnapshot()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp-C0h]
  int v2; // [rsp+50h] [rbp-B0h]
  char v3; // [rsp+54h] [rbp-ACh]
  __int64 v4; // [rsp+380h] [rbp+280h]
  __int64 v5; // [rsp+398h] [rbp+298h]
  __int64 v6; // [rsp+3B0h] [rbp+2B0h]
  __int64 v7; // [rsp+3C8h] [rbp+2C8h]
  __int64 v8; // [rsp+3E8h] [rbp+2E8h]
  __int64 v9; // [rsp+408h] [rbp+308h]

  result = ZwReadVirtualMemory();
  if ( (int)result >= 0 )
  {
    if ( v1 == 1072 )
    {
      if ( v2 == 1146311504 )
      {
        if ( (v3 & 1) == 0 || (v3 & 2) != 0 )
        {
          return 3221225659LL;
        }
        else
        {
          if ( (v3 & 4) != 0 )
            ZwFreeVirtualMemory();
          if ( v9 )
            ZwDuplicateObject();
          if ( v8 )
            ZwDuplicateObject();
          if ( v6 )
            ZwDuplicateObject();
          if ( v7 )
            ZwDuplicateObject();
          if ( v5 )
            ZwDuplicateObject();
          if ( v4 )
            ZwDuplicateObject();
          ZwFreeVirtualMemory();
          return 0LL;
        }
      }
      else
      {
        return 3221225480LL;
      }
    }
    else
    {
      return 2147483661LL;
    }
  }
  return result;
}
