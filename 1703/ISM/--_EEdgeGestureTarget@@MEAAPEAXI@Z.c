/*
 * XREFs of ??_EEdgeGestureTarget@@MEAAPEAXI@Z @ 0x1800234FC
 * Callers:
 *     ??_EEdgeGestureTarget@@OBI@EAAPEAXI@Z @ 0x180024B20 (--_EEdgeGestureTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
EdgeGestureTarget *__fastcall EdgeGestureTarget::`vector deleting destructor'(EdgeGestureTarget *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx

  *(_QWORD *)this = &EdgeGestureTarget::`vftable'{for `IBufferedInputClient'};
  *((_QWORD *)this + 1) = &EdgeGestureTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 2) = &EdgeGestureTarget::`vftable'{for `ITouchInfoAdapterClient'};
  *((_QWORD *)this + 3) = &EdgeGestureTarget::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 7) = 0LL;
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
  v8 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 10);
  *((_QWORD *)this + 10) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  v13 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
