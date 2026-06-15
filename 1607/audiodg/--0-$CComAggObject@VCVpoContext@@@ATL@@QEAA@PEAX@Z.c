/*
 * XREFs of ??0?$CComAggObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140031A18
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140031DE4 (-CreateInstance@-$CComCreator@V-$CComAggObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPE.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ATL::CComAggObject<CVpoContext>::CComAggObject<CVpoContext>(__int64 a1, __int64 a2)
{
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &ATL::CComAggObject<CVpoContext>::`vftable';
  *(_DWORD *)(a1 + 32) = 0;
  memset_0((void *)(a1 + 40), 0, 0x28uLL);
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 24) = &ATL::CComContainedObject<CVpoContext>::`vftable';
  *(_QWORD *)(a1 + 32) = a2;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
