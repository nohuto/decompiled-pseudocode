/*
 * XREFs of ?InitializeFromSharedResource@CHostVisualMarshaler@DirectComposition@@QEAAJPEBVCSharedSystemResource@2@@Z @ 0x1C00033C0
 * Callers:
 *     ?Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z @ 0x1C0003234 (-Create@CHostVisualMarshaler@DirectComposition@@SAJPEBVCSharedSystemResource@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C0021C80 (-AddRef@CompositionObject@@QEBAJXZ.c)
 */

__int64 __fastcall DirectComposition::CHostVisualMarshaler::InitializeFromSharedResource(
        DirectComposition::CHostVisualMarshaler *this,
        const struct DirectComposition::CSharedSystemResource *a2)
{
  __int64 result; // rax

  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 47) = -1;
  *((_DWORD *)this + 48) = -1;
  *((_DWORD *)this + 49) = -1;
  *((_DWORD *)this + 50) = -1;
  *((_DWORD *)this + 51) = -1;
  *((_DWORD *)this + 23) = 1065353216;
  result = CompositionObject::AddRef((const struct DirectComposition::CSharedSystemResource *)((char *)a2 - 24));
  if ( (int)result >= 0 )
    *((_QWORD *)this + 29) = a2;
  return result;
}
