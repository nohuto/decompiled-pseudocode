/*
 * XREFs of IopRemovePageFromPageMap @ 0x1401C7778
 * Callers:
 *     IoFreeDumpRange @ 0x1401C5DF0 (IoFreeDumpRange.c)
 * Callees:
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 */

__int64 __fastcall IopRemovePageFromPageMap(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char a5)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  _QWORD *v15; // rbx
  __int64 i; // rax
  unsigned __int64 v17; // r8

  v5 = a3;
  if ( a4 )
  {
    v8 = *a1;
    v9 = a3 + a4 - 1;
    if ( a3 < *a1 )
    {
      if ( v9 >= v8 )
      {
        if ( !a5 )
          return 3221225793LL;
        v9 = v8 - 1;
        a4 = v8 - a3;
      }
      if ( a4 )
      {
        if ( a2 )
        {
          do
          {
            v11 = a1[1];
            v12 = v5 & -(__int64)(v5 < *a1);
            v13 = *a1 - 1;
            while ( 1 )
            {
              if ( v13 - v12 == -1LL )
                goto LABEL_13;
              v15 = (_QWORD *)(v11 + 8 * (v12 >> 6));
              for ( i = ((1LL << (v12 & 0x3F)) - 1) | ~*v15; i == -1; i = ~*v15 )
              {
                if ( (unsigned __int64)++v15 > v11 + 8 * (v13 >> 6) )
                  goto LABEL_13;
              }
              _BitScanForward64((unsigned __int64 *)&i, ~i);
              v14 = i + ((__int64)((__int64)v15 - v11) >> 3 << 6);
              if ( v14 > v13 )
              {
LABEL_13:
                v14 = -1LL;
              }
              else if ( v14 != -1LL )
              {
                break;
              }
              if ( !v12 )
                break;
              v17 = v5 + 1;
              if ( v5 + 1 > *a1 )
                v17 = *a1;
              v13 = v17 - 1;
              v12 = 0LL;
            }
            if ( v14 < v5 )
              break;
            if ( v14 == -1LL )
              break;
            RtlClearBitsEx((__int64)a1, v14, 1uLL);
            ++*a2;
            v5 = v14 + 1;
          }
          while ( v14 + 1 <= v9 );
        }
        else
        {
          RtlClearBitsEx((__int64)a1, a3, a4);
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
