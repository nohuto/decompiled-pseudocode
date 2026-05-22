/*
 * XREFs of ??1PointerInfoAdapter@@UEAA@XZ @ 0x18005C474
 * Callers:
 *     ??_GPointerInfoAdapter@@UEAAPEAXI@Z @ 0x18005C430 (--_GPointerInfoAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall PointerInfoAdapter::~PointerInfoAdapter(PointerInfoAdapter *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &PointerInfoAdapter::`vftable'{for `IInputClient'};
  *((_QWORD *)this + 1) = &PointerInfoAdapter::`vftable'{for `RefCountedObject'};
  operator delete(*((void **)this + 9));
  operator delete(*((void **)this + 4));
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
