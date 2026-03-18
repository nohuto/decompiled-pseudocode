/*
 * XREFs of xxxCancelMouseMoveTracking @ 0x1C00C7394
 * Callers:
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     xxxTrackMouseMove @ 0x1C00C6FC4 (xxxTrackMouseMove.c)
 * Callees:
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     safe_cast_fnid_to_PTOOLTIPWND @ 0x1C00C75B4 (safe_cast_fnid_to_PTOOLTIPWND.c)
 *     xxxResetTooltip @ 0x1C00C75D4 (xxxResetTooltip.c)
 *     FindTimer @ 0x1C00F646C (FindTimer.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0227D00 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 */

_UNKNOWN **__fastcall xxxCancelMouseMoveTracking(unsigned __int16 a1, __int64 a2, int a3, unsigned __int16 a4)
{
  _UNKNOWN **result; // rax
  char v6; // di
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = &retaddr;
  v6 = a4 & a1;
  if ( (a4 & a1 & 0x400) != 0 && (_WORD)a3 == 69 )
    result = (_UNKNOWN **)xxxHotTrackMenu((struct tagWND *)a2, HIWORD(a3), 0);
  if ( (a1 & 0x200) != 0 && (a4 & 0x300) != 0 )
  {
    v10 = *(_QWORD *)(a2 + 24);
    v11 = 0LL;
    if ( v10 )
      v11 = *(_QWORD *)(v10 + 104);
    result = (_UNKNOWN **)safe_cast_fnid_to_PTOOLTIPWND(v11);
    if ( result )
    {
      v14[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v14;
      ++*((_DWORD *)result + 2);
      v14[1] = result;
      xxxResetTooltip((struct tagWND *)result);
      result = (_UNKNOWN **)ThreadUnlock1(v13, v12);
    }
  }
  if ( v6 < 0 )
    result = (_UNKNOWN **)PostMessage(a2, 675 - (unsigned int)(a3 != 1), 0LL, 0LL);
  if ( (v6 & 0x40) != 0 )
    return (_UNKNOWN **)FindTimer(a2, 65530, 2, 1, 0LL);
  return result;
}
