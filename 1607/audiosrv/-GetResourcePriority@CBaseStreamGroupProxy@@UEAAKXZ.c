/*
 * XREFs of ?GetResourcePriority@CBaseStreamGroupProxy@@UEAAKXZ @ 0x180023370
 * Callers:
 *     ?DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180022D10 (-DisconnectFromSaDevice@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ @ 0x180022E44 (-ConnectToSaDevice_Base@CBaseStreamGroupProxy@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBaseStreamGroupProxy::GetResourcePriority(CBaseStreamGroupProxy *this)
{
  return *(unsigned int *)(*((_QWORD *)this + 7) + 56LL);
}
