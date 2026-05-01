/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18001DC50
 * Callers:
 *     ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x18001BCA0 (-GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z.c)
 * Callees:
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(
        unsigned __int16 *a1,
        unsigned __int64 a2,
        const unsigned __int16 *a3,
        unsigned __int64 a4)
{
  unsigned __int16 *v4; // r10
  int v5; // ebx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int64 v8; // rdx
  unsigned __int16 v10; // ax

  v4 = a1;
  v5 = 0;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF )
    v5 = -2147024809;
  if ( v5 >= 0 )
  {
    if ( a4 < 0x7FFFFFFF )
    {
      v5 = 0;
      if ( a2 )
      {
        v6 = a2;
        v7 = 0LL;
        do
        {
          if ( v6 == a2 )
            break;
          v10 = *(unsigned __int16 *)((char *)a1 + &unk_1800574EC - (_UNKNOWN *)v4);
          if ( !v10 )
            break;
          *a1 = v10;
          ++v7;
          ++a1;
          --v6;
        }
        while ( v6 );
        if ( !v6 )
        {
          --a1;
          v5 = -2147024774;
          --v7;
        }
        v8 = a2 - v7;
        *a1 = 0;
        if ( v5 >= 0 && v8 > 1 && 2 * v8 > 2 )
          memset_0(&v4[v7 + 1], 0, 2 * v8 - 2);
      }
      return (unsigned int)v5;
    }
    v5 = -2147024809;
  }
  if ( a2 )
    *a1 = 0;
  return (unsigned int)v5;
}
