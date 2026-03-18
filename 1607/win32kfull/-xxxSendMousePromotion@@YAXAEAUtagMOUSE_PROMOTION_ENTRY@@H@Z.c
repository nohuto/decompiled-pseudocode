/*
 * XREFs of ?xxxSendMousePromotion@@YAXAEAUtagMOUSE_PROMOTION_ENTRY@@H@Z @ 0x1C0232B3C
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 * Callees:
 *     QueueMouseEvent @ 0x1C00E0E7C (QueueMouseEvent.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z @ 0x1C01D19A4 (-xxxMoveEventAbsolute@@YAXJJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HH@Z.c)
 *     ?IsMouseActionLeftButton@@YAHH@Z @ 0x1C0231D64 (-IsMouseActionLeftButton@@YAHH@Z.c)
 */

void __fastcall xxxSendMousePromotion(struct tagPOINT *a1, int a2)
{
  int v4; // r9d
  LONG x; // eax
  int v6; // r9d
  LONG y; // eax
  unsigned __int64 v8; // r14
  LARGE_INTEGER PerformanceCounter; // r15
  int v10; // r8d
  LONG v11; // ecx
  USHORT v12; // ax
  ULONG ExtraInformation; // edi
  int v14; // esi
  int v15; // eax
  unsigned int v16; // ecx
  char v17; // r10
  __int64 v18; // r9
  LONG v19; // edx
  int v20; // ecx
  LONG v21; // ecx
  unsigned int v22; // eax
  struct _MOUSE_INPUT_DATA v23; // [rsp+98h] [rbp+27h] BYREF

  memset(&v23.Buttons, 0, 20);
  *(_DWORD *)&v23.UnitId = 262142;
  v4 = *(_DWORD *)(gpsi + 2192LL);
  if ( v4 )
    x = 0xFFFF * (a1[1].x - *(_DWORD *)(gpsi + 2184LL)) / v4 + 1;
  else
    x = a1[1].x;
  v6 = *(_DWORD *)(gpsi + 2196LL);
  v23.LastX = x;
  if ( v6 )
    y = 0xFFFF * (a1[1].y - *(_DWORD *)(gpsi + 2188LL)) / v6 + 1;
  else
    y = a1[1].y;
  v23.LastY = y;
  v8 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = ((_DWORD)v8 << 8) - (a1[3].x << 8);
  v11 = a1[2].x;
  if ( v11 == 3 )
  {
    v12 = 67;
    ExtraInformation = v10 | LOWORD(a1[5].x);
LABEL_9:
    v23.Flags = v12;
    v23.ExtraInformation = ExtraInformation;
    goto LABEL_13;
  }
  if ( v11 == 2 )
  {
    v12 = 19;
    ExtraInformation = v10 | LOWORD(a1[5].x) | 0x80;
    goto LABEL_9;
  }
  ExtraInformation = v23.ExtraInformation;
LABEL_13:
  LOBYTE(v14) = 0;
  v15 = IsMouseActionLeftButton(a1[5].y & 1);
  v16 = a1[2].y;
  if ( (v16 & 0x40000) != 0 )
  {
    v23.ButtonFlags |= v15 != 0 ? 2 : 8;
    v14 = (v16 >> 15) & 1;
  }
  else if ( (v16 & 0x10000) != 0 )
  {
    v23.ButtonFlags |= v15 != 0 ? 1 : 4;
  }
  if ( gptCursorAsync.x != a1[1].x || gptCursorAsync.y != a1[1].y )
  {
    v17 = gptInd;
    v18 = 3LL * (unsigned int)gptInd;
    *((_DWORD *)&gaptMouse + 2 * v18) = LOWORD(a1[1].x) | ((unsigned __int16)(*(_WORD *)(gpsi + 2192LL) - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v18 + 1) = LOWORD(a1[1].y) | ((unsigned __int16)(*(_WORD *)(gpsi + 2196LL) - 1) << 16);
    *((_DWORD *)&gaptMouse + 2 * v18 + 2) = v8;
    *((_QWORD *)&gaptMouse + v18 + 2) = ExtraInformation;
    v19 = a1[1].y;
    v20 = a1[1].x;
    gptInd = (v17 + 1) & 0x3F;
    xxxMoveEventAbsolute(v20, v19, ExtraInformation, 0LL, &v23, v8, PerformanceCounter.QuadPart, 1, 0);
    ExtraInformation = v23.ExtraInformation;
    a1[1] = gptCursorAsync;
  }
  v21 = a1[5].y;
  v22 = (v21 & 2) == 0 || gbEnforceUIPI && (v21 & 4) != 0;
  QueueMouseEvent(
    v23.ButtonFlags,
    0,
    ExtraInformation,
    *(_QWORD *)&a1[1],
    v8,
    PerformanceCounter.QuadPart,
    0LL,
    (__int64)&v23,
    0LL,
    1u,
    a2,
    1,
    v14,
    v22,
    0,
    0,
    0LL,
    0LL);
}
