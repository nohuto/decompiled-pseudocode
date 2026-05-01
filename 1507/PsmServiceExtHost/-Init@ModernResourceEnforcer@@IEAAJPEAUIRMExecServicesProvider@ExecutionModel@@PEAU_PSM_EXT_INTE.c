/*
 * XREFs of ?Init@ModernResourceEnforcer@@IEAAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE3@@@Z @ 0x180020768
 * Callers:
 *     ?CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTERNAL_FUNCTION_TABLE3@@PEAPEAVModernResourceEnforcer@@@Z @ 0x18002069C (-CreateModernResourceEnforcer@@YAJPEAUIRMExecServicesProvider@ExecutionModel@@PEAU_PSM_EXT_INTER.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800172A0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall ModernResourceEnforcer::Init(
        ModernResourceEnforcer *this,
        struct IUnknown *a2,
        struct _PSM_EXT_INTERNAL_FUNCTION_TABLE3 *a3)
{
  unsigned int v6; // edi

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v6 = 0;
  if ( !a2 )
    goto LABEL_7;
  if ( *((struct IUnknown **)this + 31) != a2 )
    ATL::AtlComPtrAssign((struct IUnknown **)this + 31, a2);
  if ( a3 )
  {
    *((_OWORD *)this + 5) = *(_OWORD *)a3;
    *((_OWORD *)this + 6) = *((_OWORD *)a3 + 1);
    *((_OWORD *)this + 7) = *((_OWORD *)a3 + 2);
    *((_OWORD *)this + 8) = *((_OWORD *)a3 + 3);
    *((_OWORD *)this + 9) = *((_OWORD *)a3 + 4);
    *((_OWORD *)this + 10) = *((_OWORD *)a3 + 5);
    *((_OWORD *)this + 11) = *((_OWORD *)a3 + 6);
    *((_OWORD *)this + 12) = *((_OWORD *)a3 + 7);
  }
  else
  {
LABEL_7:
    v6 = -2147024809;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  return v6;
}
