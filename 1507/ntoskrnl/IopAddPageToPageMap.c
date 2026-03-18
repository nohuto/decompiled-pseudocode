/*
 * XREFs of IopAddPageToPageMap @ 0x1401F4364
 * Callers:
 *     IoSetDumpRange @ 0x1401F3904 (IoSetDumpRange.c)
 * Callees:
 *     RtlFindNextForwardRunClearCappedEx @ 0x140063DF0 (RtlFindNextForwardRunClearCappedEx.c)
 *     RtlSetBitsEx @ 0x1400653BC (RtlSetBitsEx.c)
 */

__int64 __fastcall IopAddPageToPageMap(
        unsigned __int64 *a1,
        unsigned __int64 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 NextForwardRunClearCapped; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rbx
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v5 = a3;
  if ( a4 )
  {
    v7 = *a1;
    if ( a3 < *a1 )
    {
      if ( a3 + a4 - 1 >= v7 )
      {
        if ( !a5 )
          return 3221225793LL;
        a4 = v7 - a3;
      }
      if ( a4 )
      {
        if ( a2 )
        {
          v9 = a3 + a4;
          v13[1] = a1[1];
          v13[0] = a3 + a4;
          v14 = a3;
          do
          {
            NextForwardRunClearCapped = RtlFindNextForwardRunClearCappedEx((__int64)v13, v5, a3, &v14);
            v11 = NextForwardRunClearCapped;
            if ( !NextForwardRunClearCapped )
              break;
            if ( NextForwardRunClearCapped > *a2 )
            {
              RtlSetBitsEx((__int64)v13, v14, *a2);
              *a2 = 0LL;
              return 3221225507LL;
            }
            v12 = v14;
            RtlSetBitsEx((__int64)v13, v14, NextForwardRunClearCapped);
            *a2 -= v11;
            v5 = v11 + v12;
            v14 = v5;
          }
          while ( v5 < v9 );
        }
        else
        {
          RtlSetBitsEx((__int64)a1, a3, a4);
        }
      }
    }
    else if ( !a5 )
    {
      return 3221225793LL;
    }
  }
  return 0LL;
}
