/*
 * XREFs of ??_GOrientationWatcher@@MEAAPEAXI@Z @ 0x18005A810
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
OrientationWatcher *__fastcall OrientationWatcher::`scalar deleting destructor'(OrientationWatcher *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &OrientationWatcher::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 2) = &OrientationWatcher::`vftable'{for `IMessageProxyListener'};
  v4 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *(_QWORD *)this = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
