/*
 * XREFs of ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x1400262E4
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012CF0 (-CreateInstance@-$CComCreator@V-$CComObject@VCStreamGroup@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX.c)
 * Callees:
 *     <none>
 */

void __fastcall CStreamGroup::InternalFinalConstructRelease(CStreamGroup *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 16);
}
