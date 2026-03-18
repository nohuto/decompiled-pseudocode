/*
 * XREFs of _SetDoubleClickTime @ 0x1C0151F00
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     CheckWinstaAttributeAccess @ 0x1C003DD20 (CheckWinstaAttributeAccess.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C007B15C (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     InitTooltipDelay @ 0x1C0151FA4 (InitTooltipDelay.c)
 */

__int64 __fastcall SetDoubleClickTime(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  __int64 i; // r8
  __int64 v4; // rax
  __int64 v5; // r8

  v1 = a1;
  v2 = *(_QWORD *)(PsGetCurrentProcessWin32Process(a1) + 640);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) )
    return 0LL;
  if ( v1 )
  {
    if ( v1 > 0x1388 )
      v1 = 5000;
  }
  else
  {
    v1 = 500;
  }
  gdtDblClk = v1;
  *(_DWORD *)(gpsi + 3996LL) = 4 * v1;
  *(_DWORD *)(gpsi + 3992LL) = *(_DWORD *)(gpsi + 3996LL) / 5u;
  if ( v2 )
  {
    for ( i = *(_QWORD *)(v2 + 16); i; i = *(_QWORD *)(v5 + 16) )
    {
      v4 = safe_cast_fnid_to_PTOOLTIPWND(*(_QWORD *)(i + 104));
      InitTooltipDelay(v4);
    }
  }
  return 1LL;
}
