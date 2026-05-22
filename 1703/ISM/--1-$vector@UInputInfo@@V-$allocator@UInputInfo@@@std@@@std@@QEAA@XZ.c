/*
 * XREFs of ??1?$vector@UInputInfo@@V?$allocator@UInputInfo@@@std@@@std@@QEAA@XZ @ 0x1800545B4
 * Callers:
 *     _MPCRawInputProvider::_MPCRawInputProvider_::_1_::dtor$6 @ 0x1800A1B94 (_MPCRawInputProvider--_MPCRawInputProvider_--_1_--dtor$6.c)
 *     _MPCRawInputProvider::OnInputReceived_::_1_::dtor$0 @ 0x1800A1BEB (_MPCRawInputProvider--OnInputReceived_--_1_--dtor$0.c)
 *     _BufferedInputTarget::BufferedInputTarget_::_1_::dtor$3 @ 0x1800A34C7 (_BufferedInputTarget--BufferedInputTarget_--_1_--dtor$3.c)
 *     _BufferedInputTarget::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800A3528 (_BufferedInputTarget--_scalar_deleting_destructor__--_1_--dtor$3.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<InputInfo>::~vector<InputInfo>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 1888LL, 0x760uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
