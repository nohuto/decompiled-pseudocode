/*
 * XREFs of ?OverwriteSamplerAndBlendModes@CCommonRenderingEffect@@UEAAXQEBVSamplerMode@@_NW4Enum@BlendMode@@@Z @ 0x18007ADB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCommonRenderingEffect::OverwriteSamplerAndBlendModes(__int64 a1, __int64 a2, char a3, int a4)
{
  __int64 result; // rax
  char v6; // r8
  char v7; // cl
  __int16 v8; // [rsp+18h] [rbp+18h]

  if ( a3 )
  {
    v6 = *(_BYTE *)(a2 + 2);
    HIBYTE(v8) = *(_BYTE *)(a2 + 1);
    LOBYTE(v8) = 0;
    *(_WORD *)(a1 + 24) = v8;
    *(_BYTE *)(a1 + 26) = v6;
    v7 = *(_BYTE *)(a2 + 5);
    HIBYTE(v8) = *(_BYTE *)(a2 + 4);
    LOBYTE(v8) = 0;
    *(_WORD *)(a1 + 27) = v8;
    *(_BYTE *)(a1 + 29) = v7;
  }
  else
  {
    *(_WORD *)(a1 + 24) = *(_WORD *)a2;
    *(_BYTE *)(a1 + 26) = *(_BYTE *)(a2 + 2);
    *(_WORD *)(a1 + 27) = *(_WORD *)(a2 + 3);
    *(_BYTE *)(a1 + 29) = *(_BYTE *)(a2 + 5);
  }
  result = *(unsigned int *)(a1 + 32);
  if ( a4 != 22 )
  {
    if ( (int)result < 6 )
      return result;
    result = (unsigned int)(result - 6);
LABEL_10:
    *(_DWORD *)(a1 + 32) = result;
    return result;
  }
  if ( (int)result < 6 )
  {
    result = (unsigned int)(result + 6);
    goto LABEL_10;
  }
  return result;
}
