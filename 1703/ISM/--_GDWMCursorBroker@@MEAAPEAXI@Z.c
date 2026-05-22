/*
 * XREFs of ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x18001DB98
 * Callers:
 *     ??_EDWMCursorBroker@@OCA@EAAPEAXI@Z @ 0x18001EEF0 (--_EDWMCursorBroker@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
DWMCursorBroker *__fastcall DWMCursorBroker::`scalar deleting destructor'(DWMCursorBroker *this, char a2)
{
  _DWORD *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IHardwareCursorProvider'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v4 = (_DWORD *)((char *)this + 1316);
  v5 = 10LL;
  do
  {
    if ( *v4 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 159) + 144LL))(*((_QWORD *)this + 159));
      *v4 = 0;
    }
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = *((_QWORD *)this + 163);
  *((_QWORD *)this + 163) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 162);
  *((_QWORD *)this + 162) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 161);
  *((_QWORD *)this + 161) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 160);
  *((_QWORD *)this + 160) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 159);
  *((_QWORD *)this + 159) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
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
