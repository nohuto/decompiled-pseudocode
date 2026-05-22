/*
 * XREFs of ??0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18006EEEC
 * Callers:
 *     ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006F150 (-Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
LegacyInjectionRawInputProvider *__fastcall LegacyInjectionRawInputProvider::LegacyInjectionRawInputProvider(
        LegacyInjectionRawInputProvider *this,
        struct IRawInputClient *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &LegacyInjectionRawInputProvider::`vftable'{for `IRemoteInputInjection'};
  *((_QWORD *)this + 1) = &LegacyInjectionRawInputProvider::`vftable'{for `IMessageObjectOwner'};
  *((_QWORD *)this + 2) = &LegacyInjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 3) = &LegacyInjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IRawInputClient *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 5) = a2;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 6) = 0LL;
  v6 = *((_QWORD *)this + 7);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 7) = 0LL;
  v7 = *((_QWORD *)this + 8);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 104) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_BYTE *)this + 120) = 0;
  *((_WORD *)this + 44) = 0;
  return this;
}
