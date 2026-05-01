/*
 * XREFs of ?Release@WnfStateRegistration@ExecutionModel@@UEAAKXZ @ 0x180018A30
 * Callers:
 *     ?Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_ReleaseResourcesType@@@Z @ 0x180015190 (-Handle_ResSet_ReleaseResources@ResourcePolicyEngineServerProxy@ExecutionModel@@QEAAJPEAX_KW4_Re.c)
 *     ?Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ @ 0x180015C60 (-Release@ResourceSetServerProxy@ExecutionModel@@UEAAKXZ.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::WnfStateRegistration::Release(ExecutionModel::WnfStateRegistration *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 7);
  if ( !v1 && this )
    (*(void (__fastcall **)(ExecutionModel::WnfStateRegistration *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
