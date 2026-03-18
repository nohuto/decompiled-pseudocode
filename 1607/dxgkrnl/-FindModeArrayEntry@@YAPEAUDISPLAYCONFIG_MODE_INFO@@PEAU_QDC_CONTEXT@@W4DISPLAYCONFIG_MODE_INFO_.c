/*
 * XREFs of ?FindModeArrayEntry@@YAPEAUDISPLAYCONFIG_MODE_INFO@@PEAU_QDC_CONTEXT@@W4DISPLAYCONFIG_MODE_INFO_TYPE@@IU_LUID@@@Z @ 0x1C00C0D18
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall FindModeArrayEntry(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r10

  result = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 40);
  if ( result >= v5 )
    return 0LL;
  while ( *(_DWORD *)result != a2 || *(_DWORD *)(result + 4) != a3 || *(_QWORD *)(result + 8) != a4 )
  {
    result += 64LL;
    if ( result >= v5 )
      return 0LL;
  }
  return result;
}
