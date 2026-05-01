/*
 * XREFs of ??1SimpleLock@Shared@DevPlat@@QEAA@XZ @ 0x180022DD4
 * Callers:
 *     InitializeGameConfigRpcServer @ 0x180022B2C (InitializeGameConfigRpcServer.c)
 *     ShutdownGameConfigRpcServer @ 0x18004885C (ShutdownGameConfigRpcServer.c)
 * Callees:
 *     <none>
 */

void __fastcall DevPlat::Shared::SimpleLock::~SimpleLock(LPCRITICAL_SECTION *this)
{
  if ( !*((_BYTE *)this + 8) )
    LeaveCriticalSection(*this);
}
