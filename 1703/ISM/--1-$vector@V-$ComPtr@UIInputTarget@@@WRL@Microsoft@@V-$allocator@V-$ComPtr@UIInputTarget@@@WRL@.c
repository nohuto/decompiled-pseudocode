/*
 * XREFs of ??1?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800181A8
 * Callers:
 *     ??1SpatialInputControllerCollection@@UEAA@XZ @ 0x1800781E4 (--1SpatialInputControllerCollection@@UEAA@XZ.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$3 @ 0x18009FA9F (_DWMInputRouter--HitTest_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$2 @ 0x1800A15C5 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$2.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$8 @ 0x1800A1637 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$8.c)
 *     _SpatialInputControllerCollection::SpatialInputControllerCollection_::_1_::dtor$15 @ 0x1800A30CC (_SpatialInputControllerCollection--SpatialInputControllerCollection_--_1_--dtor$15.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::~vector<Microsoft::WRL::ComPtr<IInputTarget>>(
        __int64 a1)
{
  char *v2; // rbx
  char *v3; // rsi
  __int64 v4; // rcx

  v2 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v2 != v3 )
    {
      v4 = *(_QWORD *)v2;
      if ( *(_QWORD *)v2 )
      {
        *(_QWORD *)v2 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      v2 += 8;
    }
    std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
