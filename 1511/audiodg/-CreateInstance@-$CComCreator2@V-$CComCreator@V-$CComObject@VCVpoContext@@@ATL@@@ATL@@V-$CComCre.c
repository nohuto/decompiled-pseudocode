/*
 * XREFs of ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCVpoContext@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCVpoContext@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400018A0
 * Callers:
 *     ?CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x140002610 (-CreateInstance@CComClassFactory@ATL@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComCreator2<ATL::CComCreator<ATL::CComObject<CVpoContext>>,ATL::CComCreator<ATL::CComAggObject<CVpoContext>>>::CreateInstance(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  if ( a1 )
    return ATL::CComCreator<ATL::CComAggObject<CVpoContext>>::CreateInstance();
  else
    return ATL::CComCreator<ATL::CComObject<CVpoContext>>::CreateInstance(0LL, a2, a3);
}
