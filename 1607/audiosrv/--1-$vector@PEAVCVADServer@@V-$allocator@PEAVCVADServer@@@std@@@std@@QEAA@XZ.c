/*
 * XREFs of ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x180079760
 * Callers:
 *     _CPdcActivationClient::CPdcActivationClient_::_1_::dtor$0 @ 0x18003BB71 (_CPdcActivationClient--CPdcActivationClient_--_1_--dtor$0.c)
 *     _CPdcActivationClient::_CPdcActivationClient_::_1_::dtor$0 @ 0x180079825 (_CPdcActivationClient--_CPdcActivationClient_--_1_--dtor$0.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800291CC (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 */

void __fastcall std::vector<CVADServer *>::~vector<CVADServer *>(__int64 a1)
{
  _QWORD *v2; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
  {
    std::_Deallocate(v2, (__int64)(*(_QWORD *)(a1 + 16) - (_QWORD)v2) >> 3, 8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
