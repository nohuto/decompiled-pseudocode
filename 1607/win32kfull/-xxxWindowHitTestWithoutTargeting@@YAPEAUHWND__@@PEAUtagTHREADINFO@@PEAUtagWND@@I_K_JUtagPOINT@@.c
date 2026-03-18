/*
 * XREFs of ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022331C
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C0223C68 (xxxPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C007A4F0 (xxxDCEWindowHitTestIndirect.c)
 *     xxxWindowHitTest @ 0x1C0117FD0 (xxxWindowHitTest.c)
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
  int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int *v15; // [rsp+38h] [rbp-30h]
  unsigned int v16; // [rsp+40h] [rbp-28h]
  int v17; // [rsp+44h] [rbp-24h]
  __int64 v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]

  if ( !(unsigned int)IsThreadDesktopComposed((__int64)a1) )
    return (HWND)xxxWindowHitTest(v10);
  v14 = a5;
  v15 = a7;
  v12 = v8;
  v17 = 0;
  v18 = 0LL;
  v19 = 0;
  v16 = a8;
  v13 = v9;
  return xxxDCEWindowHitTestIndirect(v10, a6, (__int64)&v12, v9);
}
