/*
 * XREFs of ?OpenSharedHandle@CSharedMatrixTransformMarshaler@DirectComposition@@UEAAJPEAPEAX@Z @ 0x1C0005690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DirectComposition::CSharedMatrixTransformMarshaler::OpenSharedHandle(
        DirectComposition::CSharedMatrixTransformMarshaler *this,
        void **a2)
{
  DirectComposition::CSharedSystemResource *v2; // rcx

  v2 = (DirectComposition::CSharedSystemResource *)*((_QWORD *)this + 10);
  if ( v2 )
    return DirectComposition::CSharedSystemResource::OpenSharedHandle(v2, a2);
  else
    return -1073741790;
}
