/*
 * XREFs of ?OpenSharedHandle@CHostVisualMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00042B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CHostVisualMarshaler::OpenSharedHandle(
        DirectComposition::CHostVisualMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 30);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
