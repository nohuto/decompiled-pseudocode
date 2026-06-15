/*
 * XREFs of ??$_Uninit_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@V123@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x180076434
 * Callers:
 *     ?_Reallocate@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180076FA4 (-_Reallocate@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDevi.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Uninit_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>,Microsoft::WRL::ComPtr<ISaDeviceProxy>>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v5; // [rsp+50h] [rbp+18h]
  __int64 *v6; // [rsp+58h] [rbp+20h]

  v5 = a3;
  v6 = a3;
  try
  {
    while ( a1 != a2 )
    {
      if ( a3 )
      {
        *a3 = 0LL;
        if ( a3 != a1 )
        {
          *a3 = *a1;
          *a1 = 0LL;
        }
      }
      v5 = ++a3;
      ++a1;
    }
  }
  catch ( ... )
  {
    for ( i = v6; i != v5; ++i )
      Microsoft::WRL::ComPtr<ISaDeviceProxy>::InternalRelease(i);
    throw;
  }
  return a3;
}
