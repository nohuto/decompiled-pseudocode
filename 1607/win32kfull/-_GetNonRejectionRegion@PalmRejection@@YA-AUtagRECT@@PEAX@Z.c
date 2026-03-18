/*
 * XREFs of ?_GetNonRejectionRegion@PalmRejection@@YA?AUtagRECT@@PEAX@Z @ 0x1C0229304
 * Callers:
 *     ?_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z @ 0x1C0229374 (-_HitTestRejectionRegion@PalmRejection@@YAHPEAXUtagPOINT@@@Z.c)
 * Callees:
 *     _GetPointerDeviceRects @ 0x1C00E3B58 (_GetPointerDeviceRects.c)
 *     GetUserHandedness @ 0x1C0134F20 (GetUserHandedness.c)
 */

struct tagRECT *__fastcall PalmRejection::_GetNonRejectionRegion(
        PalmRejection *this,
        struct tagRECT *__return_ptr retstr,
        void *a3)
{
  unsigned int v4; // ebx
  int UserHandedness; // eax
  unsigned int v6; // edx
  bool v7; // zf
  int v8; // eax

  v4 = 0;
  *(_DWORD *)this = 0;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_DWORD *)this + 3) = 0;
  GetPointerDeviceRects((__int64)retstr, this, 0LL);
  UserHandedness = GetUserHandedness();
  v6 = gPalmRejectHEdgeThr;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) += 1 - v6;
  if ( UserHandedness == 1 )
    v4 = gPalmRejectVEdgeThr;
  v7 = UserHandedness == 2;
  v8 = *((_DWORD *)this + 2);
  *(_DWORD *)this = v4;
  if ( v7 )
    v8 -= v6;
  *((_DWORD *)this + 2) = v8 + 1;
  return (struct tagRECT *)this;
}
