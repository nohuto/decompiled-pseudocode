/*
 * XREFs of ??1CUtcWrapperBase@Diagnostics@Microsoft@@UEAA@XZ @ 0x1800678E8
 * Callers:
 *     ??_GCUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z @ 0x180017290 (--_GCUtcWrapperBase@Diagnostics@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::Diagnostics::CUtcWrapperBase::~CUtcWrapperBase(
        Microsoft::Diagnostics::CUtcWrapperBase *this)
{
  RPC_BINDING_HANDLE *v1; // rcx

  *(_QWORD *)this = &Microsoft::Diagnostics::CUtcWrapperBase::`vftable';
  v1 = (RPC_BINDING_HANDLE *)((char *)this + 8);
  if ( *v1 )
    RpcBindingFree(v1);
}
