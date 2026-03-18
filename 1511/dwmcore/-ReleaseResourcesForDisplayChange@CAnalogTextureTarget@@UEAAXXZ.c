/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CAnalogTextureTarget@@UEAAXXZ @ 0x18013C5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnalogTextureTarget::ReleaseResourcesForDisplayChange(CAnalogTextureTarget *this)
{
  CMILRefCountBase *v2; // rcx

  v2 = (CMILRefCountBase *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  CAnalogTextureTarget::ReleaseResources((CAnalogTextureTarget *)((char *)this - 40));
}
