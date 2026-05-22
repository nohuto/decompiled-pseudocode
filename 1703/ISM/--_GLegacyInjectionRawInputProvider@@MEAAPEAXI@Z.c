/*
 * XREFs of ??_GLegacyInjectionRawInputProvider@@MEAAPEAXI@Z @ 0x18006F00C
 * Callers:
 *     ??_ELegacyInjectionRawInputProvider@@OBI@EAAPEAXI@Z @ 0x180070220 (--_ELegacyInjectionRawInputProvider@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ?DestroyInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ @ 0x18006FFE4 (-DestroyInjectionDevices@LegacyInjectionRawInputProvider@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
LegacyInjectionRawInputProvider *__fastcall LegacyInjectionRawInputProvider::`scalar deleting destructor'(
        LegacyInjectionRawInputProvider *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &LegacyInjectionRawInputProvider::`vftable'{for `IRemoteInputInjection'};
  *((_QWORD *)this + 1) = &LegacyInjectionRawInputProvider::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 2) = &LegacyInjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 3) = &LegacyInjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  if ( *((_QWORD *)this + 10) || *((_QWORD *)this + 14) )
    LegacyInjectionRawInputProvider::DestroyInjectionDevices(this);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 5) = 0LL;
  v5 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 5) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
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
