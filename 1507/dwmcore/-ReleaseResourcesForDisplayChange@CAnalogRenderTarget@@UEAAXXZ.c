/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogRenderTarget@@UEAAXXZ @ 0x180126ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnalogRenderTarget::ReleaseResourcesForDisplayChange(CAnalogRenderTarget *this)
{
  CMILRefCountBase *v2; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 7);
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    *((_QWORD *)this + 7) = 0LL;
  }
  CAnalogRenderTarget::ReleaseResources((CAnalogRenderTarget *)((char *)this - 40));
}
