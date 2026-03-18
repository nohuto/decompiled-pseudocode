/*
 * XREFs of ?ReleaseResources@CCommonRenderingEffect@@UEAAXXZ @ 0x18003F780
 * Callers:
 *     ??_ECHWDrawListEntry@@UEAAPEAXI@Z @ 0x180073F10 (--_ECHWDrawListEntry@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCommonRenderingEffect::ReleaseResources(CCommonRenderingEffect *this)
{
  CMILCOMBase **v1; // rbx
  __int64 v2; // rdi

  v1 = (CMILCOMBase **)((char *)this + 8);
  v2 = 2LL;
  do
  {
    if ( *v1 )
    {
      CMILCOMBase::InternalRelease(*v1);
      *v1 = 0LL;
    }
    ++v1;
    --v2;
  }
  while ( v2 );
}
