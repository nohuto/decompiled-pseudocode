/*
 * XREFs of ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x180022728
 * Callers:
 *     InitializeGameConfigRpcServer @ 0x18002269C (InitializeGameConfigRpcServer.c)
 *     ShutdownGameConfigRpcServer @ 0x1800438BC (ShutdownGameConfigRpcServer.c)
 * Callees:
 *     <none>
 */

void __fastcall DevPlat::Shared::SimpleLock::~SimpleLock(LPCRITICAL_SECTION *this)
{
  if ( !*((_BYTE *)this + 8) )
    LeaveCriticalSection(*this);
}
