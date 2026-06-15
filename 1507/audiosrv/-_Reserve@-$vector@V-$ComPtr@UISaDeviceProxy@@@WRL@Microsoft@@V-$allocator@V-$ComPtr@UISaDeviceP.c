/*
 * XREFs of ?_Reserve@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800912B4
 * Callers:
 *     ?push_back@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180091330 (-push_back@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevice.c)
 *     ?push_back@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800913AC (-push_back@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStrea.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180042EC8 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Reallocate@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800911D4 (-_Reallocate@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStr.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve(_QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  v1 = a1[1];
  result = (a1[2] - v1) >> 3;
  if ( !result )
  {
    v3 = (v1 - *a1) >> 3;
    if ( v3 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = v3 + 1;
    v5 = (__int64)(a1[2] - *a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = (v5 >> 1) + v5;
    else
      v6 = 0LL;
    if ( v6 < v4 )
      v6 = v4;
    return (__int64)std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Reallocate((__int64)a1, v6);
  }
  return result;
}
