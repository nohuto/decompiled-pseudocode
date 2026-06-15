/*
 * XREFs of ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140026720
 * Callers:
 *     ?Release@?$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ @ 0x1400197B0 (-Release@-$CComContainedObject@VCStreamGroup@@@ATL@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CStreamGroup>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
