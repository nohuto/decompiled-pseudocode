/*
 * XREFs of ?Initialize@CCompositionPointLightMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00ED1F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionPointLightMarshaler::Initialize(
        DirectComposition::CCompositionPointLightMarshaler *this)
{
  __int64 result; // rax

  *((_QWORD *)this + 7) = 1065353216LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 26) = 1120403456;
  result = 0LL;
  *(_OWORD *)((char *)this + 68) = xmmword_1C0106208;
  return result;
}
