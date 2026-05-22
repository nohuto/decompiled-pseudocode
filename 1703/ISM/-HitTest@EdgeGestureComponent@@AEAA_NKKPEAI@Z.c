/*
 * XREFs of ?HitTest@EdgeGestureComponent@@AEAA_NKKPEAI@Z @ 0x180023114
 * Callers:
 *     ?OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUInputTargetingDecision@@@Z @ 0x180022C40 (-OnHitTest@EdgeGestureComponent@@UEAAJPEAUIInputDisplay@@PEAUInputInfo@@KPEAUIInputTarget@@PEAUI.c)
 *     ?OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x180024398 (-OnTouchSessionBegin@EdgeGestureTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z @ 0x180024678 (-OnGestureUpdate@EdgeGestureTarget@@QEAAJW4GestureType@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

char __fastcall EdgeGestureComponent::HitTest(
        EdgeGestureComponent *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4)
{
  char v8; // si
  __int64 v9; // rcx
  unsigned int v10; // ecx
  _QWORD v12[24]; // [rsp+30h] [rbp-D0h] BYREF

  v8 = 0;
  memset(v12, 0, sizeof(v12));
  v9 = *((_QWORD *)this + 9);
  v12[3] = 0LL;
  HIDWORD(v12[6]) = 0;
  HIDWORD(v12[21]) = 0;
  LODWORD(v12[0]) = 2;
  LODWORD(v12[22]) = 1024;
  v12[2] = __PAIR64__(a3, a2);
  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v9 + 24LL))(v9, &v12[1]);
  if ( (***((unsigned __int8 (__fastcall ****)(_QWORD, _QWORD *))this + 8))(*((_QWORD *)this + 8), v12)
    && (v10 = HIDWORD(v12[22]), (v12[22] & 0x40000000000LL) != 0)
    && HIDWORD(v12[15]) )
  {
    *((_DWORD *)this + 22) = HIDWORD(v12[15]);
    v8 = 1;
    *((_QWORD *)this + 12) = v12[4];
    *((_DWORD *)this + 13) = a2;
    *((_DWORD *)this + 14) = a3;
    if ( a4 )
      *a4 = v10;
  }
  else if ( a4 )
  {
    *a4 = 0;
  }
  return v8;
}
