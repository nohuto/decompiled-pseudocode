/*
 * XREFs of ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C0221BD4
 * Callers:
 *     PointerSpeedHitTest @ 0x1C02233A0 (PointerSpeedHitTest.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C0223A7C (xxxPerformTargetingWithinPwnd.c)
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall _GetDeviceRects(
        const struct tagPOINTEREVENTINT *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ebx
  struct tagRECT *v7; // rsi
  __int64 v8; // rax

  v4 = *((_QWORD *)a1 + 3);
  v5 = 0;
  v7 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = 19;
    v8 = HMValidateHandleNoSecure(v4, (__int64)a2, (__int64)a3, a4);
    if ( v8 )
    {
      v5 = 1;
      *v7 = *(struct tagRECT *)(*(_QWORD *)(v8 + 480) + 124LL);
      *a3 = *(struct tagRECT *)(*(_QWORD *)(v8 + 480) + 140LL);
    }
  }
  return v5;
}
