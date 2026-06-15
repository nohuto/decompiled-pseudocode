/*
 * XREFs of ?_Reserve@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18007713C
 * Callers:
 *     ?push_back@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAXAEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x18007723C (-push_back@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevice.c)
 * Callees:
 *     ?_Reallocate@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180076FA4 (-_Reallocate@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevi.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reserve(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 8);
  result = (*(_QWORD *)(a1 + 16) - v1) >> 3;
  if ( !result )
  {
    v3 = (v1 - *(_QWORD *)a1) >> 3;
    if ( v3 == 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector<T> too long");
    v4 = v3 + 1;
    v5 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
    if ( 0x1FFFFFFFFFFFFFFFLL - (v5 >> 1) >= v5 )
      v6 = (v5 >> 1) + v5;
    else
      v6 = 0LL;
    if ( v6 < v4 )
      v6 = v4;
    return (__int64)std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Reallocate((__int64 **)a1, v6);
  }
  return result;
}
