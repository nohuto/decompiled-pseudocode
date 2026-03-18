/*
 * XREFs of WindowRedirectionBitmapMatchesMonitorAdapter @ 0x1C01019F4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     GetWindowMonitorAdapterLuid @ 0x1C007FA30 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C0101A80 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall WindowRedirectionBitmapMatchesMonitorAdapter(HWND *a1)
{
  HWND v1; // rcx
  __int64 v3; // [rsp+38h] [rbp-8h] BYREF
  __int64 v4; // [rsp+60h] [rbp+20h] BYREF
  int v5; // [rsp+70h] [rbp+30h]
  int v6; // [rsp+74h] [rbp+34h]
  int v7; // [rsp+78h] [rbp+38h]
  int v8; // [rsp+7Ch] [rbp+3Ch]

  v7 = 0;
  v8 = 0;
  v5 = 0;
  v6 = 0;
  v1 = *a1;
  LODWORD(v4) = 0;
  GreGetDxSharedSurface(v1, (__int64)&v4, (__int64)&v3);
  return 1LL;
}
