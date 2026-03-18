/*
 * XREFs of ?NotifyInvalidDisplaySet@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::NotifyInvalidDisplaySet(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 604) )
    *((_DWORD *)this + 152) = -2003304442;
  return 0LL;
}
