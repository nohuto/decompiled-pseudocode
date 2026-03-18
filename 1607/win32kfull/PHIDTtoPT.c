/*
 * XREFs of PHIDTtoPT @ 0x1C00E4374
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C00E4274 (_GetPointerDeviceInfoProperties.c)
 *     PostPointerEventMessage @ 0x1C00E4A50 (PostPointerEventMessage.c)
 *     _GetPointerDeviceType @ 0x1C01C89BC (_GetPointerDeviceType.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PHIDTtoPT(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 24);
  result = 1LL;
  if ( v1 > 0 )
  {
    if ( v1 > 4 )
    {
      if ( v1 != 5 )
      {
        if ( v1 == 6 )
        {
          return 2LL;
        }
        else if ( v1 == 7 )
        {
          return 4LL;
        }
      }
    }
    else
    {
      return 3LL;
    }
  }
  return result;
}
