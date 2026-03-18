/*
 * XREFs of ?GetAlphaDescriptor@CTableTransferEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x180113D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTableTransferEffect::GetAlphaDescriptor(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 188) )
    return 2LL;
  result = 1LL;
  if ( !*(_DWORD *)(a1 + 344) )
    return 2LL;
  return result;
}
