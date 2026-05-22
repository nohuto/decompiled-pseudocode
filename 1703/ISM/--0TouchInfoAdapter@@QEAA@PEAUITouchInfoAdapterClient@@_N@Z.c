/*
 * XREFs of ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x18005EC5C
 * Callers:
 *     ?Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z @ 0x180023694 (-Initialize@EdgeGestureTarget@@IEAAJIPEAX@Z.c)
 *     ?InitializeConverged@EdgeGestureTarget@@IEAAJI@Z @ 0x18002388C (-InitializeConverged@EdgeGestureTarget@@IEAAJI@Z.c)
 *     ?Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z @ 0x18005B160 (-Initialize@PTPProcessor@@IEAAJPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@MagnifierTarget@@IEAAJXZ @ 0x180081A7C (-Initialize@MagnifierTarget@@IEAAJXZ.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 */

TouchInfoAdapter *__fastcall TouchInfoAdapter::TouchInfoAdapter(
        TouchInfoAdapter *this,
        struct ITouchInfoAdapterClient *a2)
{
  _DWORD *v2; // rdi
  _DWORD *v4; // rsi
  __int64 v6; // rcx
  TouchInfoAdapter *result; // rax

  v2 = (_DWORD *)((char *)this + 36);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  v4 = (_DWORD *)((char *)this + 116);
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  *((_DWORD *)this + 29) = 0xFFFF;
  memset((char *)this + 36, 0, 0x50uLL);
  v6 = 10LL;
  do
  {
    *v2 = *v4;
    v2 += 2;
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = 0;
  memset((char *)this + 128, 0, 0x248uLL);
  result = this;
  *((_BYTE *)this + 712) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_WORD *)this + 62) = 0;
  return result;
}
