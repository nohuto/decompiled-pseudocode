/*
 * XREFs of ??1DWMInputTarget@@UEAA@XZ @ 0x180019E4C
 * Callers:
 *     ??_GDWMInputTarget@@UEAAPEAXI@Z @ 0x180019D3C (--_GDWMInputTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1PropertyMap@Input@@UEAA@XZ @ 0x18001166C (--1PropertyMap@Input@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall DWMInputTarget::~DWMInputTarget(DWMInputTarget *this)
{
  void *v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &DWMInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &DWMInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 2) = &DWMInputTarget::`vftable'{for `IDWMPnPTarget'};
  *((_QWORD *)this + 3) = &DWMInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 4) = &DWMInputTarget::`vftable'{for `IInputTarget2'};
  *((_QWORD *)this + 5) = &DWMInputTarget::`vftable'{for `RefCountedObject'};
  if ( !*((_BYTE *)this + 144) )
  {
    v2 = (void *)*((_QWORD *)this + 9);
    if ( v2 )
    {
      CloseHandle(v2);
      *((_QWORD *)this + 9) = 0LL;
    }
    *((_DWORD *)this + 20) = 0;
    if ( *((_BYTE *)this + 132) )
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 7) + 144LL))(
        *((_QWORD *)this + 7),
        *((unsigned int *)this + 16));
    *((_DWORD *)this + 16) = 0;
  }
  *((_DWORD *)this + 16) = 0;
  Input::PropertyMap::~PropertyMap((char **)this + 19);
  v3 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
}
