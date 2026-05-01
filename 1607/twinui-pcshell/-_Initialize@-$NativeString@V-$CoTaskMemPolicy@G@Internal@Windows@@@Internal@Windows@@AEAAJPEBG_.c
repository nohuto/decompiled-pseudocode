/*
 * XREFs of ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800084B0
 * Callers:
 *     ?GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x180006700 (-GetOEMLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ @ 0x180007480 (-EnsureEnterpriseLayoutFilePath@TaskbarLayoutPolicyManager@@AEAAJXZ.c)
 *     ?SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@Z @ 0x18000A970 (-SetCurrentRegion@TaskbarLayoutParser@@UEAAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Win.c)
 *     ?SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18000CA10 (-SetAppModelUserId@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z @ 0x18000CA80 (-SetDesktopLinkPath@TaskbarLayoutItem@@UEAAJPEBG@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x18001A288 (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 * Callees:
 *     ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x180008740 (-_EnsureCapacity@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // rdi
  int v6; // ebp
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rax
  _WORD *v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // r14
  __int16 v13; // ax
  _WORD *v14; // rcx

  v3 = a3;
  v6 = 0;
  if ( a2 )
  {
    v7 = -1LL;
    if ( a3 == -1LL )
    {
      v3 = -1LL;
      do
        ++v3;
      while ( *(_WORD *)(a2 + 2 * v3) );
      v7 = v3;
    }
    else
    {
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(a2 + 2 * v8) );
      if ( a3 >= v8 )
      {
        do
          ++v7;
        while ( *(_WORD *)(a2 + 2 * v7) );
      }
      else
      {
        v7 = a3;
      }
    }
    v6 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(a1, v3);
    if ( v6 >= 0 )
    {
      v9 = *(_WORD **)a1;
      v10 = v3 + 1;
      if ( (unsigned __int64)(v10 - 1) > 0x7FFFFFFE )
      {
        if ( !v10 )
        {
LABEL_22:
          *(_QWORD *)(a1 + 8) = v7;
          return (unsigned int)v6;
        }
      }
      else if ( v7 <= 0x7FFFFFFE )
      {
        v11 = v7 - v10;
        v12 = a2 - (_QWORD)v9;
        do
        {
          if ( !(v11 + v10) )
            break;
          v13 = *(_WORD *)((char *)v9 + v12);
          if ( !v13 )
            break;
          *v9++ = v13;
          --v10;
        }
        while ( v10 );
        if ( !v10 )
          --v9;
      }
      *v9 = 0;
      goto LABEL_22;
    }
  }
  else
  {
    v14 = *(_WORD **)a1;
    if ( v14 )
    {
      CoTaskMemFree(v14);
      *(_QWORD *)a1 = 0LL;
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return (unsigned int)v6;
}
