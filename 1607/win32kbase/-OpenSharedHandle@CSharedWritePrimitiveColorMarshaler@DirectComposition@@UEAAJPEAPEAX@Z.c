/*
 * XREFs of ?OpenSharedHandle@CSharedWritePrimitiveColorMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00F1E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DirectComposition::CSharedWritePrimitiveColorMarshaler::OpenSharedHandle(
        DirectComposition::CSharedWritePrimitiveColorMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 7);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
