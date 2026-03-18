/*
 * XREFs of ?OpenSharedHandle@CSharedWriteDesktopTargetMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C007A180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CSharedWriteDesktopTargetMarshaler::OpenSharedHandle(
        DirectComposition::CSharedWriteDesktopTargetMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 9);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
