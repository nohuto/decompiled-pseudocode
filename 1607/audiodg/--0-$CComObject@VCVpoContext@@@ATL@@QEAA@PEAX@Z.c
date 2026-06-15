/*
 * XREFs of ??0?$CComObject@VCVpoContext@@@ATL@@QEAA@PEAX@Z @ 0x140031AC8
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140031F04 (-CreateInstance@-$CComCreator@V-$CComObject@VCVpoContext@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     memset_0 @ 0x140018550 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComObject<CVpoContext>::CComObject<CVpoContext>(__int64 a1)
{
  *(_DWORD *)(a1 + 8) = 0;
  memset_0((void *)(a1 + 16), 0, 0x28uLL);
  *(_BYTE *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)a1 = &ATL::CComObject<CVpoContext>::`vftable';
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 8LL))(ATL::_pAtlModule);
  return a1;
}
