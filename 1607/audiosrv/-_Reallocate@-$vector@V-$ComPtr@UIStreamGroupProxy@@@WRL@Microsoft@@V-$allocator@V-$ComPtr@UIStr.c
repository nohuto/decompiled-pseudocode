/*
 * XREFs of ?_Reallocate@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x180077070
 * Callers:
 *     ?_Reserve@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x1800771BC (-_Reserve@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180028674 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Uninit_move@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@V123@@std@@YAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x1800764BC (--$_Uninit_move@PEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x180076E4C (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Reallocate(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 *result; // rax
  __int64 *v9; // [rsp+60h] [rbp+8h]

  v4 = std::_Allocate(a2, 8uLL);
  v5 = v4;
  v9 = v4;
  try
  {
    std::_Uninit_move<Microsoft::WRL::ComPtr<IStreamGroupProxy> *,Microsoft::WRL::ComPtr<IStreamGroupProxy> *,std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>,Microsoft::WRL::ComPtr<IStreamGroupProxy>>(
      *a1,
      a1[1],
      v4);
  }
  catch ( ... )
  {
    std::_Deallocate(v9, a2, 8uLL);
    throw;
  }
  v7 = a1[1] - *a1;
  if ( *a1 )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v6, *a1, a1[1]);
    std::_Deallocate(*a1, a1[2] - *a1, 8uLL);
  }
  a1[2] = &v5[a2];
  result = &v5[v7];
  a1[1] = result;
  *a1 = v5;
  return result;
}
