/*
 * XREFs of ??0EdgeGestureTarget@@IEAA@PEAVEdgeGestureComponent@@@Z @ 0x1800233EC
 * Callers:
 *     ?Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z @ 0x180023A6C (-Create@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAXPEAPEAV1@@Z.c)
 *     ?CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z @ 0x180023BB0 (-CreateConverged@EdgeGestureTarget@@SAJPEAVEdgeGestureComponent@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
EdgeGestureTarget *__fastcall EdgeGestureTarget::EdgeGestureTarget(
        EdgeGestureTarget *this,
        struct EdgeGestureComponent *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &EdgeGestureTarget::`vftable'{for `IBufferedInputClient'};
  *((_QWORD *)this + 1) = &EdgeGestureTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 2) = &EdgeGestureTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 3) = &EdgeGestureTarget::`vftable'{for `RefCountedObject'};
  *((_WORD *)this + 24) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct EdgeGestureComponent *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = a2;
  v5 = *((_QWORD *)this + 10);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 10) = 0LL;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 9) = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 8) = 0LL;
  return this;
}
