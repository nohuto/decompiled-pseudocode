/*
 * XREFs of ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x18000C318
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800049E0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 *     ?GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z @ 0x1800106D8 (-GetRPCBindingHandle@Internal@ExecutionModel@@YAJPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DevPlat::Shared::SimpleLock::~SimpleLock(LPCRITICAL_SECTION *this)
{
  if ( !*((_BYTE *)this + 8) )
    LeaveCriticalSection(*this);
}
