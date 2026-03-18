/*
 * XREFs of ?Release@CWARPCallbackRenderer@@UEAAKXZ @ 0x180003690
 * Callers:
 *     ?Release@CInteractionContextWrapper@@W7EAAKXZ @ 0x1800BF610 (-Release@CInteractionContextWrapper@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWARPCallbackRenderer::Release(CWARPCallbackRenderer *this)
{
  return CMILRefCountBase::Release((CWARPCallbackRenderer *)((char *)this + 8));
}
