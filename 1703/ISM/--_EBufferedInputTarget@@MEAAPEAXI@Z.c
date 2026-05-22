/*
 * XREFs of ??_EBufferedInputTarget@@MEAAPEAXI@Z @ 0x1800803F0
 * Callers:
 *     ??_EBufferedInputTarget@@O7EAAPEAXI@Z @ 0x180080E20 (--_EBufferedInputTarget@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
BufferedInputTarget *__fastcall BufferedInputTarget::`vector deleting destructor'(BufferedInputTarget *this, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  _QWORD *v6; // rdi
  char *v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &BufferedInputTarget::`vftable'{for `IInputTarget'};
  *((_QWORD *)this + 1) = &BufferedInputTarget::`vftable'{for `RefCountedObject'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 3) = 0LL;
  v5 = 0;
  v6 = (_QWORD *)((char *)this + 40);
  do
  {
    *((_DWORD *)v6 - 2) = 0;
    if ( *v6 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v6 + 16LL))(*v6);
    *v6 = 0LL;
    ++v5;
    v6 += 3;
  }
  while ( v5 < 6 );
  v7 = (char *)*((_QWORD *)this + 23);
  if ( v7 )
  {
    std::_Deallocate(v7, (*((_QWORD *)this + 25) - (_QWORD)v7) / 1888LL, 0x760uLL);
    *((_QWORD *)this + 23) = 0LL;
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
  }
  `eh vector destructor iterator'(
    (char *)this + 32,
    0x18uLL,
    6uLL,
    (void (*)(void *))BufferedInputTarget::BufferTarget::~BufferTarget);
  v8 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
