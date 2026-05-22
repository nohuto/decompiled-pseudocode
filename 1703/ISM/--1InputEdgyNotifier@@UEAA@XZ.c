/*
 * XREFs of ??1InputEdgyNotifier@@UEAA@XZ @ 0x180024B74
 * Callers:
 *     ??_GEdgeGestureComponent@@MEAAPEAXI@Z @ 0x18002289C (--_GEdgeGestureComponent@@MEAAPEAXI@Z.c)
 *     ??_EInputEdgyNotifier@@UEAAPEAXI@Z @ 0x180024B30 (--_EInputEdgyNotifier@@UEAAPEAXI@Z.c)
 *     _EdgeGestureComponent::_scalar_deleting_destructor__::_1_::dtor$3 @ 0x1800A057F (_EdgeGestureComponent--_scalar_deleting_destructor__--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall InputEdgyNotifier::~InputEdgyNotifier(InputEdgyNotifier *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)this = &InputEdgyNotifier::`vftable';
  if ( *((_DWORD *)this + 10) )
  {
    (*(void (__fastcall **)(_QWORD, const wchar_t *, __int64))(**((_QWORD **)this + 3) + 48LL))(
      *((_QWORD *)this + 3),
      L"InputEdgyNotifier",
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 2) + 144LL))(
      *((_QWORD *)this + 2),
      *((unsigned int *)this + 10));
  }
  v2 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
