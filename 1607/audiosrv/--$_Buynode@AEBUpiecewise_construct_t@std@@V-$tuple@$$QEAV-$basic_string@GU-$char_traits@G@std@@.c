/*
 * XREFs of ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180029040
 * Callers:
 *     ?GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z @ 0x1800213E0 (-GetDeviceGraphStoreForEndpoint@CDeviceGraphStore@@UEAAJPEBGPEAPEAUIDeviceGraphObjectsStore@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_Tree_comp_alloc@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x180028FE0 (-_Buynode0@-$_Tree_comp_alloc@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocato.c)
 */

_QWORD *__fastcall std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<std::wstring &&>,std::tuple<>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD **a3)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _WORD *v8; // rax
  void *v10; // [rsp+58h] [rbp+20h]

  v4 = std::_Tree_comp_alloc<std::_Tmap_traits<std::wstring,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,Microsoft::WRL::ComPtr<IDeviceGraphObjectsStore>>>,0>>::_Buynode0(a1);
  v5 = v4;
  v10 = v4;
  *((_WORD *)v4 + 12) = 0;
  try
  {
    v6 = v4 + 4;
    if ( v4 != (_QWORD *)-32LL )
    {
      v7 = *a3;
      v4[7] = 7LL;
      v4[6] = 0LL;
      if ( v4[7] >= 8uLL )
        v8 = (_WORD *)*v6;
      else
        v8 = v4 + 4;
      *v8 = 0;
      if ( v7[3] < 8uLL )
      {
        if ( v7[2] != -1LL )
          memmove(v6, v7, 2 * (v7[2] + 1LL));
      }
      else
      {
        *v6 = *v7;
        *v7 = 0LL;
      }
      v6[2] = v7[2];
      v6[3] = v7[3];
      v7[3] = 7LL;
      v7[2] = 0LL;
      if ( v7[3] >= 8uLL )
        v7 = (_QWORD *)*v7;
      *(_WORD *)v7 = 0;
      v6[4] = 0LL;
    }
  }
  catch ( ... )
  {
    std::_Deallocate(v10, 1uLL, 0x48uLL);
    throw;
  }
  return v5;
}
