/*
 * XREFs of ?OpenSharedHandle@CSharedInteractionMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00DE570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedInteractionMarshaler::OpenSharedHandle(
        DirectComposition::CSharedInteractionMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 28);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
