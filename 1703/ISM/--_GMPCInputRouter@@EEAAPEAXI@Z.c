/*
 * XREFs of ??_GMPCInputRouter@@EEAAPEAXI@Z @ 0x180083F7C
 * Callers:
 *     ??_EMPCInputRouter@@GEA@EAAPEAXI@Z @ 0x180085670 (--_EMPCInputRouter@@GEA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1DWMInputRouter@@MEAA@XZ @ 0x180011DE8 (--1DWMInputRouter@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCInputRouter *__fastcall MPCInputRouter::`scalar deleting destructor'(MPCInputRouter *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &MPCInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &MPCInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 2) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &MPCInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &MPCInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &MPCInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &MPCInputRouter::`vftable'{for `IInputRouterStatics'};
  *((_QWORD *)this + 7) = &MPCInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &MPCInputRouter::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 121);
  if ( v4 )
  {
    *((_QWORD *)this + 121) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 123);
  if ( v5 )
  {
    *((_QWORD *)this + 123) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 122);
  if ( v6 )
  {
    *((_QWORD *)this + 122) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 121);
  if ( v7 )
  {
    *((_QWORD *)this + 121) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  DWMInputRouter::~DWMInputRouter(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
