/*
 * XREFs of ??_EMPCHFXInputTarget@@MEAAPEAXI@Z @ 0x180085B1C
 * Callers:
 *     ??_EMPCHFXInputTarget@@OBI@EAAPEAXI@Z @ 0x180086DD0 (--_EMPCHFXInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MPCHFXInputTarget *__fastcall MPCHFXInputTarget::`vector deleting destructor'(MPCHFXInputTarget *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &MPCHFXInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCHFXInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCHFXInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCHFXInputTarget::`vftable'{for `RefCountedObject'};
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 144LL))(
    *((_QWORD *)this + 5),
    *((unsigned int *)this + 25));
  *((_DWORD *)this + 25) = 0;
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 5);
  if ( v5 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
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
