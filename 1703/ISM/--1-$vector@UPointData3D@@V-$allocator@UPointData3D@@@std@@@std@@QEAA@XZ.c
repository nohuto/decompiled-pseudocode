/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x18002EDA4
 * Callers:
 *     _MPCClickerProcessor::GetPoints_::_1_::dtor$0 @ 0x1800A0D15 (_MPCClickerProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCProcessor::GetPoints_::_1_::dtor$0 @ 0x1800A147A (_MPCProcessor--GetPoints_--_1_--dtor$0.c)
 *     _MPCHolographicInputManager::Process3DInput_::_1_::dtor$2 @ 0x1800A170F (_MPCHolographicInputManager--Process3DInput_--_1_--dtor$2.c)
 *     __lambda_a88adf0547c7b0cb38e523d07adee41d_::operator()_::_1_::dtor$0 @ 0x1800A171B (__lambda_a88adf0547c7b0cb38e523d07adee41d_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<PointData3D>::~vector<PointData3D>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 80LL, 0x50uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
