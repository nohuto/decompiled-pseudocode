/*
 * XREFs of ?Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG@Z @ 0x1800229A4
 * Callers:
 *     ?Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z @ 0x1800221D4 (-Parse@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@QEAAJPEBG@Z.c)
 *     ?SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z @ 0x1800228E8 (-SetUriParam@CreativeEventUriParser@LaunchCreativeHelpers@CreativeFramework@@AEAAJPEBG0@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180019228 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::Initialize(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // ebp
  unsigned __int64 v5; // rdi
  _WORD *v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rsi
  __int16 v9; // ax
  _WORD *v10; // rcx

  v4 = 0;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
    v4 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
           (__int64)a1,
           v5);
    if ( v4 >= 0 )
    {
      v6 = (_WORD *)*a1;
      v7 = v5 + 1;
      if ( v5 > 0x7FFFFFFE )
      {
        if ( v5 == -1LL )
        {
LABEL_14:
          a1[1] = v5;
          return (unsigned int)v4;
        }
      }
      else
      {
        v8 = a2 - (_QWORD)v6;
        do
        {
          if ( v7 == 1 )
            break;
          v9 = *(_WORD *)((char *)v6 + v8);
          if ( !v9 )
            break;
          *v6++ = v9;
          --v7;
        }
        while ( v7 );
        if ( !v7 )
          --v6;
      }
      *v6 = 0;
      goto LABEL_14;
    }
  }
  else
  {
    v10 = (_WORD *)*a1;
    if ( v10 )
    {
      CoTaskMemFree(v10);
      *a1 = 0LL;
    }
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return (unsigned int)v4;
}
