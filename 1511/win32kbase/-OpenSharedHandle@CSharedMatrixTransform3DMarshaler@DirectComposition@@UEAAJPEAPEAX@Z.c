/*
 * XREFs of ?OpenSharedHandle@CSharedMatrixTransform3DMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C00DF9B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CSharedMatrixTransform3DMarshaler::OpenSharedHandle(
        DirectComposition::CSharedMatrixTransform3DMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 13);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
