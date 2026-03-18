/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C000AB30
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GreGetDxSharedSurface @ 0x1C000A8D8 (GreGetDxSharedSurface.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C000BDE4 (GetWindowMonitorAdapterLuid.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  HWND v2; // rcx
  unsigned int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp-10h] BYREF
  __int64 v6; // [rsp+38h] [rbp-8h] BYREF
  __int64 v7; // [rsp+60h] [rbp+20h] BYREF
  int v8; // [rsp+68h] [rbp+28h] BYREF
  int v9; // [rsp+70h] [rbp+30h] BYREF
  int v10; // [rsp+74h] [rbp+34h]
  int v11; // [rsp+78h] [rbp+38h] BYREF
  int v12; // [rsp+7Ch] [rbp+3Ch]

  v5 = 0LL;
  v11 = 0;
  v12 = 0;
  v9 = 0;
  v10 = 0;
  v2 = *a1;
  v3 = 1;
  LODWORD(v7) = 0;
  if ( (int)GreGetDxSharedSurface(v2, &v5, &v9, &v8, &v7, &v6) >= 0
    && v5
    && (unsigned int)GetWindowMonitorAdapterLuid(a1, &v11)
    && (v11 != v9 || v12 != v10) )
  {
    return 0;
  }
  return v3;
}
