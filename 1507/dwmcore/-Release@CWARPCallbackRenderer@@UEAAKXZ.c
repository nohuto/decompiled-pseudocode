/*
 * XREFs of ?Release@CWARPCallbackRenderer@@UEAAKXZ @ 0x18005AA70
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x18009AE40 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWARPCallbackRenderer::Release(CWARPCallbackRenderer *this)
{
  return CMILRefCountBase::Release((CWARPCallbackRenderer *)((char *)this + 8));
}
