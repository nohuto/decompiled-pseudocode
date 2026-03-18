/*
 * XREFs of ?InitializeFromSharedResource@CSharedReadMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0023FCC
 * Callers:
 *     ?InitializeFromSharedResource@CSharedReadAnimationTriggerMarshaler@DirectComposition@@UEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C0013200 (-InitializeFromSharedResource@CSharedReadAnimationTriggerMarshaler@DirectComposition@@UEAAJPEBVC.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0021C80 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

NTSTATUS __fastcall DirectComposition::CSharedReadMarshaler::InitializeFromSharedResource(
        DirectComposition::CSharedReadMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  NTSTATUS result; // eax

  result = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a2 - 24));
  if ( result >= 0 )
  {
    *((_QWORD *)this + 5) = a2;
    *((_DWORD *)this + 12) = *((_DWORD *)a2 + 3);
  }
  return result;
}
