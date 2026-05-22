/*
 * XREFs of ??0GestureTargetingComponent@@IEAA@XZ @ 0x18000D698
 * Callers:
 *     ?Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z @ 0x18000D858 (-Create@GestureTargetingComponent@@SAJPEAPEAUIInputTargetingComponent@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_K@Z @ 0x18009E024 (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
GestureTargetingComponent *__fastcall GestureTargetingComponent::GestureTargetingComponent(
        GestureTargetingComponent *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &GestureTargetingComponent::`vftable'{for `IInputTargetingComponent'};
  *((_QWORD *)this + 1) = &GestureTargetingComponent::`vftable'{for `IPointerInfoAdapterClient'};
  *((_QWORD *)this + 2) = &GestureTargetingComponent::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 10) = operator new[](0x1B8uLL);
  v2 = 0LL;
  v3 = 5LL;
  do
  {
    *(_DWORD *)(v2 + *((_QWORD *)this + 10)) = *((_DWORD *)this + 24);
    v2 += 88LL;
    --v3;
  }
  while ( v3 );
  *((_DWORD *)this + 22) = 5;
  *((_DWORD *)this + 23) = 0;
  *((_BYTE *)this + 40) = 0;
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL))(v4, v2);
  *((_QWORD *)this + 4) = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v2);
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
