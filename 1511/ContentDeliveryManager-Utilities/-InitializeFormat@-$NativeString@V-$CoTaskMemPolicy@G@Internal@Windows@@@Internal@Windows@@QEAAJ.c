/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180013BBC
 * Callers:
 *     ?GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x18000D0E8 (-GetPlacementEventStoreRegKey@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x18000D174 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z @ 0x1800105CC (-GetCreativeEventString@ContentManagement@@YAJW4CreativeEventType@1@PEAPEAG@Z.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180019228 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const wchar_t *a2,
        ...)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rsi
  wchar_t *v7; // r14
  size_t v8; // rsi
  int v9; // eax
  bool v10; // zf
  unsigned __int64 v11; // rax
  int Value[18]; // [rsp+20h] [rbp-48h] BYREF
  va_list Args; // [rsp+80h] [rbp+18h] BYREF

  va_start(Args, a2);
  v4 = 32LL;
  while ( 1 )
  {
    v5 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v4);
    if ( v5 < 0 )
      break;
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(wchar_t **)a1;
    _set_errno(0);
    v5 = 0;
    if ( (unsigned __int64)(v6 - 1) > 0x7FFFFFFE )
      v5 = -2147024809;
    if ( v5 < 0 )
    {
      if ( v6 )
        *v7 = 0;
    }
    else
    {
      v8 = v6 - 1;
      v5 = 0;
      v9 = _vsnwprintf(v7, v8, a2, Args);
      if ( v9 < 0 || v9 > v8 )
      {
        v7[v8] = 0;
        v5 = -2147024774;
      }
      else if ( v9 == v8 )
      {
        v7[v8] = 0;
      }
    }
    v10 = v5 == -2147024774;
    if ( v5 == -2147024774 )
    {
      _get_errno(Value);
      v5 = -2147024809;
      if ( Value[0] != 22 )
        v5 = -2147024774;
      v10 = v5 == -2147024774;
    }
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 16);
      v4 = v11 + 32;
      if ( v11 + 32 < v11 )
      {
        v4 = -1LL;
        v5 = -2147024362;
      }
      else
      {
        v5 = 0;
      }
      if ( v5 >= 0 )
        continue;
    }
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = -1LL;
      return (unsigned int)v5;
    }
    break;
  }
  if ( *(_QWORD *)a1 )
  {
    CoTaskMemFree(*(LPVOID *)a1);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return (unsigned int)v5;
}
