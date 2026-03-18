/*
 * XREFs of ?OverwriteSamplerAndBlendModes@CCommonRenderingEffect@@UEAAXQEBW4Enum@SamplerMode@@W42BlendMode@@@Z @ 0x18003F740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::OverwriteSamplerAndBlendModes(_DWORD *a1, _DWORD *a2, int a3)
{
  __int64 result; // rax

  a1[6] = *a2;
  a1[7] = a2[1];
  result = (unsigned int)a1[8];
  if ( a3 != 22 )
  {
    if ( (int)result < 6 )
      return result;
    result = (unsigned int)(result - 6);
LABEL_7:
    a1[8] = result;
    return result;
  }
  if ( (int)result < 6 )
  {
    result = (unsigned int)(result + 6);
    goto LABEL_7;
  }
  return result;
}
