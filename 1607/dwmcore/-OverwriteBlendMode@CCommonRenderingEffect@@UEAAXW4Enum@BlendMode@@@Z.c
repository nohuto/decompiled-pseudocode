/*
 * XREFs of ?OverwriteBlendMode@CCommonRenderingEffect@@UEAAXW4Enum@BlendMode@@@Z @ 0x1800564E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::OverwriteBlendMode(__int64 a1, int a2)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 32);
  if ( a2 != 22 )
  {
    if ( (int)result < 6 )
      return result;
    result = (unsigned int)(result - 6);
LABEL_7:
    *(_DWORD *)(a1 + 32) = result;
    return result;
  }
  if ( (int)result < 6 )
  {
    result = (unsigned int)(result + 6);
    goto LABEL_7;
  }
  return result;
}
