/*
 * XREFs of ??$emplace_back@AEBUPointData3D@@@?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAAXAEBUPointData3D@@@Z @ 0x18002F094
 * Callers:
 *     ?GetPoints@MPCGamepadProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18002E9B0 (-GetPoints@MPCGamepadProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 *     ?GetPoints@MPCMouseProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180042960 (-GetPoints@MPCMouseProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@st.c)
 *     ?GetPoints@MPCProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x180047FC0 (-GetPoints@MPCProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@std@@PE.c)
 *     ?GetPoints@MPCClickerProcessor@@UEAA?AV?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@PEAUMPCHolographicInputContext@@@Z @ 0x18004A420 (-GetPoints@MPCClickerProcessor@@UEAA-AV-$vector@UPointData3D@@V-$allocator@UPointData3D@@@std@@@.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Xlength@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@CAXXZ @ 0x1800089E0 (-_Xlength@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputTarget.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

void __fastcall std::vector<PointData3D>::emplace_back<PointData3D const &>(__int64 a1, _OWORD *a2)
{
  _OWORD *v4; // r8
  _OWORD *v5; // rcx
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  _QWORD *v11; // rsi
  size_t v12; // rcx
  void *v13; // rax
  _OWORD *v14; // rcx
  __int64 v15; // rcx

  v4 = *(_OWORD **)(a1 + 16);
  v5 = *(_OWORD **)(a1 + 8);
  if ( v4 == v5 )
  {
    v6 = ((__int64)v5 - *(_QWORD *)a1) / 80;
    if ( v6 == 0x333333333333333LL )
      std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Xlength();
    v7 = v6 + 1;
    v8 = ((__int64)v4 - *(_QWORD *)a1) / 80;
    v9 = v8 >> 1;
    if ( v8 <= 0x333333333333333LL - (v8 >> 1) )
    {
      v10 = v9 + v8;
      if ( v9 + v8 < v7 )
        v10 = v6 + 1;
    }
    else
    {
      v10 = v6 + 1;
    }
    if ( v10 )
    {
      if ( v10 > 0x333333333333333LL )
      {
        std::_Xbad_alloc();
        __debugbreak();
      }
      v12 = 80 * v10;
      if ( 80 * v10 < 0x1000 )
      {
        v11 = operator new(v12);
      }
      else
      {
        if ( v12 + 39 < v12 )
        {
          std::_Xbad_alloc();
          __debugbreak();
        }
        v13 = operator new(v12 + 39);
        v11 = (_QWORD *)(((unsigned __int64)v13 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
        *(v11 - 1) = v13;
      }
    }
    else
    {
      v11 = 0LL;
    }
    try
    {
      v14 = &v11[10 * v6];
      if ( v14 )
      {
        *v14 = *a2;
        v14[1] = a2[1];
        v14[2] = a2[2];
        v14[3] = a2[3];
        v14[4] = a2[4];
      }
      memmove(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    }
    catch ( ... )
    {
      std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(v15, (char *)v11, v10);
      throw;
    }
    if ( *(_QWORD *)a1 )
      std::_Deallocate(*(char **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) / 80LL, 0x50uLL);
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = &v11[10 * v7];
    *(_QWORD *)(a1 + 16) = &v11[10 * v10];
  }
  else
  {
    if ( v5 )
    {
      *v5 = *a2;
      v5[1] = a2[1];
      v5[2] = a2[2];
      v5[3] = a2[3];
      v5[4] = a2[4];
    }
    *(_QWORD *)(a1 + 8) += 80LL;
  }
}
