/*
 * XREFs of ??1MouseProcessor@@MEAA@XZ @ 0x180058810
 * Callers:
 *     ??_GMouseProcessor@@MEAAPEAXI@Z @ 0x18005876C (--_GMouseProcessor@@MEAAPEAXI@Z.c)
 *     ??_EPTPProcessor@@MEAAPEAXI@Z @ 0x18005AE48 (--_EPTPProcessor@@MEAAPEAXI@Z.c)
 *     _PTPProcessor::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x1800A2009 (_PTPProcessor--_scalar_deleting_destructor__--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MouseProcessor::~MouseProcessor(MouseProcessor *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &MouseProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MouseProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = &MouseProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 22) = &MouseProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 23) = &MouseProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 24) = &MouseProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  if ( *((_QWORD *)this + 35) )
  {
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
    operator delete(*((void **)this + 35));
    *((_QWORD *)this + 35) = 0LL;
  }
  v2 = *((_QWORD *)this + 72);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  v3 = *((_QWORD *)this + 72);
  *((_QWORD *)this + 72) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 70);
  *((_QWORD *)this + 70) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 69);
  *((_QWORD *)this + 69) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 32);
  *((_QWORD *)this + 32) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 31) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 30);
  *((_QWORD *)this + 30) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  PointerProcessor::~PointerProcessor(this);
}
