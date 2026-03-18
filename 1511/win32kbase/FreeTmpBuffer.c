/*
 * XREFs of FreeTmpBuffer @ 0x1C0042690
 * Callers:
 *     NtGdiGetRegionData @ 0x1C0026370 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C00424A0 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C0073F60 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C0080C70 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     IsWin32FreePoolImplSupported_0 @ 0x1C0002C18 (IsWin32FreePoolImplSupported_0.c)
 *     Win32FreePoolImpl_0 @ 0x1C0002C20 (Win32FreePoolImpl_0.c)
 */

void **__fastcall FreeTmpBuffer(char *a1)
{
  void **result; // rax
  char *v2; // rbx
  __int64 v3; // rcx
  char **v4; // rax

  if ( a1 == *(char **)&WPP_MAIN_CB.ActiveThreadCount )
  {
    result = gpTmpGlobalFree;
    *gpTmpGlobalFree = a1;
  }
  else
  {
    v2 = a1 - 32;
    if ( a1 != (char *)32 )
    {
      KeEnterCriticalRegion();
      v3 = *(_QWORD *)v2;
      v4 = (char **)*((_QWORD *)v2 + 1);
      if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *v4 != v2 )
        __fastfail(3u);
      *v4 = (char *)v3;
      *(_QWORD *)(v3 + 8) = v4;
      *((_QWORD *)v2 + 1) = v2;
      *(_QWORD *)v2 = v2;
      KeLeaveCriticalRegion();
    }
    result = (void **)IsWin32FreePoolImplSupported_0();
    if ( (int)result >= 0 )
      return (void **)Win32FreePoolImpl_0();
  }
  return result;
}
