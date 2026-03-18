/*
 * XREFs of CreateCacheDC @ 0x1C0054910
 * Callers:
 *     _GetDCEx @ 0x1C0036B60 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C0053E98 (GetMonitorDC.c)
 *     InitUserScreen @ 0x1C007D934 (InitUserScreen.c)
 * Callees:
 *     IsGetStyleWindowSupported_0 @ 0x1C0002430 (IsGetStyleWindowSupported_0.c)
 *     GetStyleWindow_0 @ 0x1C0002438 (GetStyleWindow_0.c)
 *     IsUpdateRedirectedDCESupported_0 @ 0x1C0002470 (IsUpdateRedirectedDCESupported_0.c)
 *     UpdateRedirectedDCE_0 @ 0x1C0002478 (UpdateRedirectedDCE_0.c)
 *     IsRevalidateDCESupported_0 @ 0x1C0002480 (IsRevalidateDCESupported_0.c)
 *     RevalidateDCE_0 @ 0x1C0002488 (RevalidateDCE_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     GreSetDCOwnerEx @ 0x1C0035D30 (GreSetDCOwnerEx.c)
 *     GreCreateDisplayDC @ 0x1C00422D0 (GreCreateDisplayDC.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     GreMarkUndeletableDC @ 0x1C0054AC0 (GreMarkUndeletableDC.c)
 *     GreGetBounds @ 0x1C0054F60 (GreGetBounds.c)
 */

__int64 __fastcall CreateCacheDC(__int64 a1, int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  HDC DisplayDC; // rbp
  __int64 StyleWindow_0; // rdx
  __int64 v11; // rcx
  int updated; // eax

  v6 = Win32AllocPool();
  if ( !v6 )
    return 0LL;
  if ( a3 )
    v7 = *(_QWORD *)(a3 + 160);
  else
    v7 = *(_QWORD *)gpDispInfo;
  DisplayDC = GreCreateDisplayDC(v7, 0, 0LL);
  if ( !DisplayDC )
  {
    Win32FreePool();
    return 0LL;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    if ( (int)IsGetStyleWindowSupported_0() < 0 )
      StyleWindow_0 = 0LL;
    else
      StyleWindow_0 = GetStyleWindow_0();
    if ( !StyleWindow_0 )
      a2 &= ~0x4000u;
  }
  else
  {
    StyleWindow_0 = 0LL;
  }
  *(_QWORD *)v6 = *(_QWORD *)(gpDispInfo + 64);
  *(_QWORD *)(gpDispInfo + 64) = v6;
  *(_QWORD *)(v6 + 40) = 0LL;
  *(_QWORD *)(v6 + 48) = 0LL;
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_QWORD *)(v6 + 80) = 0LL;
  *(_QWORD *)(v6 + 8) = DisplayDC;
  *(_DWORD *)(v6 + 64) = a2;
  *(_QWORD *)(v6 + 16) = a1;
  *(_QWORD *)(v6 + 24) = a1;
  *(_QWORD *)(v6 + 32) = StyleWindow_0;
  *(_QWORD *)(v6 + 88) = a3;
  GreMarkUndeletableDC(DisplayDC);
  if ( (a2 & 0x8000) != 0 )
  {
    GreSetDCOwnerEx((int)DisplayDC, 0x80000002, 0, 1);
    *(_QWORD *)(v6 + 72) = gptiCurrent;
    *(_QWORD *)(a1 + 296) = v6;
    if ( (a2 & 0x4000) != 0 )
    {
      updated = IsUpdateRedirectedDCESupported_0();
      if ( updated >= 0 )
        UpdateRedirectedDCE_0();
    }
  }
  else
  {
    GreSetDCOwnerEx((int)DisplayDC, 0x80000012, 0, 1);
    *(_QWORD *)(v6 + 72) = 0LL;
    ++gnDCECount;
  }
  if ( (a2 & 2) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 152);
    if ( (*(_BYTE *)(v11 + 84) & 0x40) != 0 )
      *(_QWORD *)(v11 + 24) = v6;
    *(_DWORD *)(v6 + 64) |= 0x1000u;
    if ( (int)IsRevalidateDCESupported_0() >= 0 )
      RevalidateDCE_0();
  }
  if ( *(_QWORD *)(gpDispInfo + 72) )
    GreGetBounds(*(_QWORD *)(v6 + 8), 0LL, 1LL);
  return *(_QWORD *)(v6 + 8);
}
