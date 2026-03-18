/*
 * XREFs of ?Initialize@CLinearTransferEffectMarshaler@DirectComposition@@UEAAJXZ @ 0x1C00F0AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ @ 0x1C0003C40 (-Initialize@CFilterEffectMarshaler@DirectComposition@@MEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CLinearTransferEffectMarshaler::Initialize(
        DirectComposition::CLinearTransferEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_BYTE *)this + 128) &= 0xE0u;
    *(_QWORD *)((char *)this + 100) = 1065353216LL;
    result = 0LL;
    *(_QWORD *)((char *)this + 108) = 1065353216LL;
    *(_QWORD *)((char *)this + 116) = 1065353216LL;
    *((_DWORD *)this + 31) = 1065353216;
    *((_DWORD *)this + 24) = 0;
  }
  return result;
}
