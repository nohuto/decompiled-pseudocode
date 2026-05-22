/*
 * XREFs of ??_GMobileCursorBroker@@MEAAPEAXI@Z @ 0x1800257FC
 * Callers:
 *     ??_EMobileCursorBroker@@OCA@EAAPEAXI@Z @ 0x180026990 (--_EMobileCursorBroker@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
MobileCursorBroker *__fastcall MobileCursorBroker::`scalar deleting destructor'(MobileCursorBroker *this, char a2)
{
  HMODULE v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &MobileCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &MobileCursorBroker::`vftable'{for `ICursorManagerClient'};
  *((_QWORD *)this + 2) = &MobileCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &MobileCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &MobileCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v4 = (HMODULE)*((_QWORD *)this + 6);
  if ( v4 )
  {
    FreeLibrary(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = *((_QWORD *)this + 167);
  *((_QWORD *)this + 167) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 166);
  *((_QWORD *)this + 166) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 165);
  *((_QWORD *)this + 165) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 164);
  *((_QWORD *)this + 164) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 11) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
