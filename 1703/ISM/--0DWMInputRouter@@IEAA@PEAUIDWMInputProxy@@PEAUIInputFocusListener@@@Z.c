/*
 * XREFs of ??0DWMInputRouter@@IEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180011898
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 *     ??0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z @ 0x180083ED0 (--0MPCInputRouter@@AEAA@PEAUIDWMInputProxy@@PEAUIInputFocusListener@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=26
DWMInputRouter *__fastcall DWMInputRouter::DWMInputRouter(
        DWMInputRouter *this,
        struct IDWMInputProxy *a2,
        struct IInputFocusListener *a3)
{
  _OWORD *v6; // rax
  _DWORD *v7; // rax
  _QWORD *v8; // rax
  _OWORD *v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int128 v21; // [rsp+38h] [rbp-50h]

  *((_QWORD *)this + 8) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 18) = 1;
  *(_QWORD *)this = &DWMInputRouter::`vftable'{for `ISystemInputRouter'};
  *((_QWORD *)this + 1) = &DWMInputRouter::`vftable'{for `IInputDisplayDeviceBinding'};
  *((_QWORD *)this + 2) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTest'};
  *((_QWORD *)this + 3) = &DWMInputRouter::`vftable'{for `IRemoteViewHitTestRequest'};
  *((_QWORD *)this + 4) = &DWMInputRouter::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 5) = &DWMInputRouter::`vftable'{for `IInputDeviceInfoStore'};
  *((_QWORD *)this + 6) = &DWMInputRouter::`vftable'{for `IInputRouterStatics'};
  *((_QWORD *)this + 7) = &DWMInputRouter::`vftable'{for `IInputDeliveryServerHost'};
  *((_QWORD *)this + 8) = &DWMInputRouter::`vftable'{for `RefCountedObject'};
  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  *((_OWORD *)this + 6) = v21;
  *((_OWORD *)this + 7) = 0u;
  *((_QWORD *)this + 16) = 0LL;
  v6 = operator new[](0x30uLL);
  *((_QWORD *)this + 10) = v6;
  *v6 = *((_OWORD *)this + 6);
  v6[1] = *((_OWORD *)this + 7);
  *((_QWORD *)v6 + 4) = *((_QWORD *)this + 16);
  *((_QWORD *)this + 11) = 1LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 52) = 0;
  v7 = operator new[](0x10uLL);
  *((_QWORD *)this + 24) = v7;
  *v7 = *((_DWORD *)this + 52);
  *((_QWORD *)this + 25) = 1LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 248,
    0x58uLL,
    5uLL,
    (void (*)(void *))DeviceBinding::DeviceBinding,
    (void (*)(void *))DeviceBinding::~DeviceBinding);
  *((_QWORD *)this + 86) = 0LL;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  *((_QWORD *)this + 93) = 0LL;
  *((GUID *)this + 48) = DirectX::g_XMZero;
  v8 = operator new[](0x58uLL);
  if ( v8 )
  {
    *v8 = 1LL;
    v9 = v8 + 1;
    `eh vector constructor iterator'(
      v8 + 1,
      0x50uLL,
      1uLL,
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::MapEntry,
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 94) = v9;
  *v9 = *((_OWORD *)this + 48);
  *((_QWORD *)this + 95) = 1LL;
  *((_DWORD *)this + 200) = 0;
  v10 = operator new[](0x10uLL);
  *((_QWORD *)this + 98) = v10;
  *v10 = *((_DWORD *)this + 200);
  *((_QWORD *)this + 99) = 1LL;
  *((_QWORD *)this + 101) = 0LL;
  *((_QWORD *)this + 102) = 0LL;
  *((_QWORD *)this + 103) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  *((_DWORD *)this + 210) = 0;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_DWORD *)this + 240) = 0;
  *((_QWORD *)this + 23) = a2;
  *((_QWORD *)this + 30) = a3;
  v11 = *((_QWORD *)this + 17);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  *((_QWORD *)this + 17) = 0LL;
  v12 = *((_QWORD *)this + 18);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  *((_QWORD *)this + 18) = 0LL;
  v13 = *((_QWORD *)this + 19);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  *((_QWORD *)this + 19) = 0LL;
  v14 = *((_QWORD *)this + 20);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  *((_QWORD *)this + 20) = 0LL;
  v15 = *((_QWORD *)this + 28);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  *((_QWORD *)this + 28) = 0LL;
  v16 = *((_QWORD *)this + 27);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  *((_QWORD *)this + 27) = 0LL;
  v17 = *((_QWORD *)this + 29);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  *((_QWORD *)this + 29) = 0LL;
  memset((char *)this + 248, 0, 0x1B8uLL);
  v18 = *((_QWORD *)this + 88);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  *((_QWORD *)this + 88) = 0LL;
  v19 = *((_QWORD *)this + 90);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  return this;
}
