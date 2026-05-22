/*
 * XREFs of ??1?$vector@VHString@Wrappers@WRL@Microsoft@@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007A960
 * Callers:
 *     _EnumerateDevices_::_1_::dtor$0 @ 0x1800A2F23 (_EnumerateDevices_--_1_--dtor$0.c)
 *     _SpatialInputControllerCollection::OnDisplayChanged_::_1_::dtor$7 @ 0x1800A323E (_SpatialInputControllerCollection--OnDisplayChanged_--_1_--dtor$7.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<Microsoft::WRL::Wrappers::HString>::~vector<Microsoft::WRL::Wrappers::HString>(__int64 a1)
{
  char *v1; // rbx
  char *v3; // rsi

  v1 = *(char **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(char **)(a1 + 8);
    while ( v1 != v3 )
    {
      WindowsDeleteString(*(HSTRING *)v1);
      *(_QWORD *)v1 = 0LL;
      v1 += 8;
    }
    std::_Deallocate(*(char **)a1, (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
