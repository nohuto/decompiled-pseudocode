/*
 * XREFs of ??0BufferedInputTarget@@IEAA@XZ @ 0x18008034C
 * Callers:
 *     ?Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z @ 0x180080718 (-Create@BufferedInputTarget@@SAJPEAUIInputTarget@@PEAUInputTargetingDecision@@HPEAPEAU2@@Z.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18009E04C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
BufferedInputTarget *__fastcall BufferedInputTarget::BufferedInputTarget(BufferedInputTarget *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &BufferedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &BufferedInputTarget::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = 0LL;
  `eh vector constructor iterator'(
    (char *)this + 32,
    0x18uLL,
    6uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::BufferTarget,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  *((_QWORD *)this + 3) = 0LL;
  return this;
}
