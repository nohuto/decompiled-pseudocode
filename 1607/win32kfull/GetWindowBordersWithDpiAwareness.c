/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C006EAD8
 * Callers:
 *     xxxCheckFullScreen @ 0x1C0056A5C (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC (xxxInitSendValidateMinMaxInfoEx.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C006EB78 (GetWindowBordersWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  __int64 v1; // r9
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 552) > 0x9900u )
    v3 = 0;
  else
    v3 = *(_DWORD *)(v1 + 568);
  v4 = *(_DWORD *)(a1 + 352) & 0xF;
  if ( v4 )
    v3 |= 0x2000000u;
  if ( (*(_DWORD *)(a1 + 288) & 0x10000000) != 0 )
  {
    v5 = *(unsigned __int16 *)(a1 + 356);
  }
  else if ( !v4 && (v7 = *(_QWORD *)(v1 + 408)) != 0 && (*(_DWORD *)(*(_QWORD *)(v7 + 8) + 244LL) & 1) != 0 )
  {
    v5 = 96;
  }
  else
  {
    v5 = *(unsigned __int16 *)(gpsi + 8678LL);
  }
  return GetWindowBordersWithCompatFlags2(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), a1, 0, v3, v5);
}
