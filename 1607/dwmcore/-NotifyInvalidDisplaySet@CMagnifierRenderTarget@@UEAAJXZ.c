/*
 * XREFs of ?NotifyInvalidDisplaySet@CMagnifierRenderTarget@@UEAAJXZ @ 0x18011EE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CMagnifierRenderTarget::NotifyInvalidDisplaySet(CMagnifierRenderTarget *this)
{
  if ( *((_BYTE *)this + 580) )
    *((_DWORD *)this + 146) = -2003304442;
  return 0LL;
}
