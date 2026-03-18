/*
 * XREFs of ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C022BC08
 * Callers:
 *     PointerSpeedHitTest @ 0x1C022D338 (PointerSpeedHitTest.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022D8DC (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C022DAC8 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall _GetDeviceRects(const struct tagPOINTEREVENTINT *a1, struct tagRECT *a2, struct tagRECT *a3)
{
  unsigned __int64 v3; // rcx
  unsigned int v4; // ebx
  __int64 v7; // rax

  v3 = *((_QWORD *)a1 + 3);
  v4 = 0;
  if ( v3 )
  {
    v7 = HMValidateHandleNoSecure(v3, 19);
    if ( v7 )
    {
      v4 = 1;
      *a2 = *(struct tagRECT *)(*(_QWORD *)(v7 + 416) + 124LL);
      *a3 = *(struct tagRECT *)(*(_QWORD *)(v7 + 416) + 140LL);
    }
  }
  return v4;
}
