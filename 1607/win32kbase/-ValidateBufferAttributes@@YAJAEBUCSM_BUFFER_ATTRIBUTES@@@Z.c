/*
 * XREFs of ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C004B5C0
 * Callers:
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C004AE10 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00F39B4 (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateBufferAttributes(const struct CSM_BUFFER_ATTRIBUTES *a1)
{
  int v1; // edx

  v1 = -1073741811;
  if ( (*(_DWORD *)a1 & 0xFFFFFFFC) == 0 && *(_DWORD *)a1 != 2 )
    v1 = 0;
  if ( v1 >= 0 )
  {
    v1 = -1073741811;
    if ( *((_DWORD *)a1 + 4) <= 2u )
      v1 = 0;
    if ( v1 >= 0 && (*((_DWORD *)a1 + 29) & 0x10) != 0 )
    {
      v1 = -1073741811;
      if ( (unsigned int)(*((_DWORD *)a1 + 16) - 1) <= 3 )
        return 0;
    }
  }
  return (unsigned int)v1;
}
