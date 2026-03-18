/*
 * XREFs of ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0221E84
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C02224F8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     TouchTargetingBigTargetWindow @ 0x1C0247A48 (TouchTargetingBigTargetWindow.c)
 *     TouchTargetingDownrank @ 0x1C0247F94 (TouchTargetingDownrank.c)
 */

__int64 __fastcall _TTWindowPenalty(struct tagWND *a1, struct tagPNTRWINDOWHITTTESTARGS *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rsi
  __int64 Prop; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v5 = *((_QWORD *)a2 + 5);
    v8 = *((_OWORD *)a1 + 7);
    if ( (unsigned int)TouchTargetingBigTargetWindow(&v8, v5) )
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1LL);
      return (unsigned int)TouchTargetingDownrank(v5, Prop);
    }
  }
  return v3;
}
