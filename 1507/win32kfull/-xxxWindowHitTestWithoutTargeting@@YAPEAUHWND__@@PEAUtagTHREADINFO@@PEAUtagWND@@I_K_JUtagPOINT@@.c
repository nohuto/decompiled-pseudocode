/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D2C0
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C022DAC8 (xxxPointerWindowHitTest.c)
 * Callees:
 *     ?xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0065580 (-xxxDCEWindowHitTestInternal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@.c)
 *     IsThreadDesktopComposed @ 0x1C008BBD0 (IsThreadDesktopComposed.c)
 *     xxxWindowHitTest @ 0x1C00DF3AC (xxxWindowHitTest.c)
 */

HWND __fastcall xxxWindowHitTestWithoutTargeting(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8)
{
  int v8; // r8d
  __int64 v9; // r9
  struct tagWND *v10; // r10
  int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  int *v15; // [rsp+38h] [rbp-20h]
  unsigned int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  if ( !(unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return (HWND)xxxWindowHitTest(v10);
  v17 = 0;
  v14 = a5;
  v15 = a7;
  v12 = v8;
  v16 = a8;
  v13 = v9;
  return xxxDCEWindowHitTestInternal(v10, a6, (struct DCE_WINDOW_HIT_TEST_ARGS *)&v12);
}
