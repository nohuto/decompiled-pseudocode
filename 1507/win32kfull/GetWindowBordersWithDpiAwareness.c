/*
 * XREFs of GetWindowBordersWithDpiAwareness @ 0x1C0093900
 * Callers:
 *     xxxCheckFullScreen @ 0x1C008B384 (xxxCheckFullScreen.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8 (xxxInitSendValidateMinMaxInfoEx.c)
 * Callees:
 *     GetWindowBordersWithCompatFlags2 @ 0x1C0093A44 (GetWindowBordersWithCompatFlags2.c)
 */

__int64 __fastcall GetWindowBordersWithDpiAwareness(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edx
  int v3; // eax
  int v4; // eax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(_DWORD *)(v1 + 560) > 0x9900u )
    v2 = 0;
  else
    v2 = *(_DWORD *)(v1 + 576);
  v3 = *(_DWORD *)(a1 + 288);
  if ( (v3 & 0x80u) == 0 )
    v2 |= 0x2000000u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v4 = *(unsigned __int16 *)(a1 + 360);
  }
  else if ( *(_DWORD *)(a1 + 344) )
  {
    v4 = *(unsigned __int16 *)(gpsi + 7286LL);
  }
  else
  {
    v4 = 96;
  }
  return GetWindowBordersWithCompatFlags2(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48), a1, 0, v2, v4);
}
