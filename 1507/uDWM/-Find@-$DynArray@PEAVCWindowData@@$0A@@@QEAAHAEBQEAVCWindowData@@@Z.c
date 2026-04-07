/*
 * XREFs of ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800067DC
 * Callers:
 *     ?RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x1800294A4 (-RegisterBlurBehind@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x180099DA0 (-v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DynArray<CWindowData *,0>::Find(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  __int64 v3; // r8

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0LL;
  if ( !v2 )
    return 0LL;
  while ( *a2 != *(_QWORD *)(*(_QWORD *)a1 + 8 * v3) )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v2 )
      return 0LL;
  }
  return 1LL;
}
