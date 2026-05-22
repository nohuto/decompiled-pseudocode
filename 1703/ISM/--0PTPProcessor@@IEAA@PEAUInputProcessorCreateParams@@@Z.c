/*
 * XREFs of ??0PTPProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18005AD2C
 * Callers:
 *     ?Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18005AFE0 (-Create@PTPProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z @ 0x18005854C (--0MouseProcessor@@IEAA@PEAUInputProcessorCreateParams@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
PTPProcessor *__fastcall PTPProcessor::PTPProcessor(PTPProcessor *this, struct DeviceInfo **a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  MouseProcessor::MouseProcessor((PTPProcessor *)((char *)this + 8), a2);
  *(_QWORD *)this = &PTPProcessor::`vftable';
  *((_QWORD *)this + 1) = &PTPProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 2) = &PTPProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 22) = &PTPProcessor::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 23) = &PTPProcessor::`vftable'{for `IMouseProcessorForwarding'};
  *((_QWORD *)this + 24) = &PTPProcessor::`vftable'{for `ICursorBasedInputProcessor'};
  *((_QWORD *)this + 25) = &PTPProcessor::`vftable'{for `IGetClosestInteractiveBounds'};
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)*a2 + 1) |= 2u;
  v4 = *((_QWORD *)this + 81);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 81) = 0LL;
  v5 = *((_QWORD *)this + 82);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 321) = 0LL;
  v6 = *((_QWORD *)this + 83);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  *((_QWORD *)this + 83) = 0LL;
  return this;
}
