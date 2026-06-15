/*
 * XREFs of ?_Reallocate@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18008EA94
 * Callers:
 *     ?_Reserve@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@IEAAX_K@Z @ 0x18008EB74 (-_Reserve@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDeviceP.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180046DB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??$_Uninit_move@PEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@V123@@std@@YAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@00AEAU?$_Wrap_alloc@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@0@0U_Nonscalar_ptr_iterator_tag@0@@Z @ 0x18008DF00 (--$_Uninit_move@PEAV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEAV123@V-$allocator@V-$ComPtr@.c)
 *     ?_Destroy@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@IEAAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0@Z @ 0x18008E940 (-_Destroy@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIStream.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Reallocate(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 *result; // rax
  __int64 *v8; // [rsp+58h] [rbp+10h]

  v4 = 0LL;
  v8 = 0LL;
  if ( a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL || (v4 = (__int64 *)operator new(8 * a2), (v8 = v4) == 0LL) )
      std::_Xbad_alloc();
  }
  try
  {
    std::_Uninit_move<Microsoft::WRL::ComPtr<IStreamGroupProxy> *,Microsoft::WRL::ComPtr<IStreamGroupProxy> *,std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>,Microsoft::WRL::ComPtr<IStreamGroupProxy>>(
      *(__int64 **)a1,
      *(__int64 **)(a1 + 8),
      v4);
  }
  catch ( ... )
  {
    operator delete(v8);
    throw;
  }
  v6 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3;
  if ( *(_QWORD *)a1 )
  {
    std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Destroy(v5, *(__int64 **)a1, *(__int64 **)(a1 + 8));
    operator delete(*(void **)a1);
  }
  *(_QWORD *)(a1 + 16) = &v4[a2];
  result = &v4[v6];
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v4;
  return result;
}
