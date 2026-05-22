/*
 * XREFs of ??0InputStateManager@@IEAA@PEAUISystemInputRouter@@@Z @ 0x180005A28
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
InputStateManager *__fastcall InputStateManager::InputStateManager(
        InputStateManager *this,
        struct ISystemInputRouter *a2)
{
  _DWORD *v4; // rdi
  _DWORD *v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rcx
  _DWORD *v8; // rdi
  __int64 v9; // rcx

  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 8) = 1;
  *(_QWORD *)this = &InputStateManager::`vftable'{for `IRawInputClient'};
  *((_QWORD *)this + 1) = &InputStateManager::`vftable'{for `IInputProcessorHost'};
  *((_QWORD *)this + 2) = &InputStateManager::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 3) = &InputStateManager::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  v4 = (_DWORD *)((char *)this + 72);
  v5 = (_DWORD *)((char *)this + 4168);
  *((_DWORD *)this + 1042) = 0;
  memset((char *)this + 72, 0, 0x1000uLL);
  v6 = 256LL;
  v7 = 256LL;
  do
  {
    *v4 = *v5;
    v4 += 4;
    --v7;
  }
  while ( v7 );
  v8 = (_DWORD *)((char *)this + 4176);
  *((_DWORD *)this + 2068) = 0;
  memset((char *)this + 4176, 0, 0x1000uLL);
  do
  {
    *v8 = *((_DWORD *)this + 2068);
    v8 += 4;
    --v6;
  }
  while ( v6 );
  *((_QWORD *)this + 1036) = 0LL;
  *((_DWORD *)this + 2077) = -1;
  if ( a2 )
    (*(void (__fastcall **)(struct ISystemInputRouter *))(*(_QWORD *)a2 + 8LL))(a2);
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  *((_QWORD *)this + 5) = a2;
  *((_DWORD *)this + 2070) = 0;
  *((_DWORD *)this + 2071) = 0;
  return this;
}
