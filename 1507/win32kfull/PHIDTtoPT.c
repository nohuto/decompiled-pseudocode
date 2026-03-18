/*
 * XREFs of PHIDTtoPT @ 0x1C000F43C
 * Callers:
 *     _GetPointerDeviceInfoProperties @ 0x1C000F038 (_GetPointerDeviceInfoProperties.c)
 *     PostPointerEventMessage @ 0x1C0155090 (PostPointerEventMessage.c)
 *     _GetPointerDeviceType @ 0x1C01CD408 (_GetPointerDeviceType.c)
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
    if ( v1 > 5 )
    {
      if ( v1 != 6 )
      {
        if ( v1 == 7 )
        {
          return 2LL;
        }
        else if ( v1 == 8 )
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
