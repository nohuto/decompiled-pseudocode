/*
 * XREFs of ?Release@CConnection@@UEAAKXZ @ 0x180036370
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180054ED0 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Release@CCoRenderVisualProxy@@W7EAAKXZ @ 0x1800BC960 (-Release@CCoRenderVisualProxy@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall CConnection::Release(CConnection *this)
{
  return CMILCOMBase::InternalRelease((CConnection *)((char *)this + 8));
}
