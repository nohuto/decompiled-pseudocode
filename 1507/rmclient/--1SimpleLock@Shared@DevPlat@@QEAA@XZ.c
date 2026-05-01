/*
 * XREFs of ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x18000B8EC
 * Callers:
 *     ?GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z @ 0x1800050C0 (-GetResourceSetInfo@ResourceSetProxy@ExecutionModel@@UEBAJPEAPEAU_ResourceSetInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DevPlat::Shared::SimpleLock::~SimpleLock(LPCRITICAL_SECTION *this)
{
  if ( !*((_BYTE *)this + 8) )
    LeaveCriticalSection(*this);
}
