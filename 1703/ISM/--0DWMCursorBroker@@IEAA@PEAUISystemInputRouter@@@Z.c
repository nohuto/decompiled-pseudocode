/*
 * XREFs of ??0DWMCursorBroker@@IEAA@PEAUISystemInputRouter@@@Z @ 0x18001DA6C
 * Callers:
 *     ?Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z @ 0x18001DF74 (-Create@DWMCursorBroker@@SAJPEAUISystemInputRouter@@PEAPEAUICursorBroker@@@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
DWMCursorBroker *__fastcall DWMCursorBroker::DWMCursorBroker(DWMCursorBroker *this, struct ISystemInputRouter *a2)
{
  _OWORD *v4; // rdi
  _OWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]

  *((_QWORD *)this + 4) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 10) = 1;
  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IHardwareCursorProvider'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `IInputDisplayOrientationListener'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 4) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 6) = 0LL;
  LODWORD(v9) = 0;
  v4 = (_OWORD *)((char *)this + 56);
  v5 = (_OWORD *)((char *)this + 1256);
  *(_OWORD *)((char *)this + 1256) = v9;
  memset((char *)this + 56, 0, 0x4B0uLL);
  v6 = 50LL;
  do
  {
    *v4 = *v5;
    v4 = (_OWORD *)((char *)v4 + 24);
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 159) = 0LL;
  *((_QWORD *)this + 160) = 0LL;
  *((_QWORD *)this + 161) = 0LL;
  *((_QWORD *)this + 162) = 0LL;
  *((_QWORD *)this + 163) = 0LL;
  *((_QWORD *)this + 174) = a2;
  memset((char *)this + 1312, 0, 0x50uLL);
  v7 = *((_QWORD *)this + 163);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_QWORD *)this + 163) = 0LL;
  return this;
}
