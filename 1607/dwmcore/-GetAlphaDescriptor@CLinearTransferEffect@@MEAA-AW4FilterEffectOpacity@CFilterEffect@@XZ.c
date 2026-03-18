/*
 * XREFs of ?GetAlphaDescriptor@CLinearTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x1801569D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 316) != 0) + 1;
}
