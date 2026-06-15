/*
 * XREFs of ??_GCAPOWrapperClient@@UEAAPEAXI@Z @ 0x180016830
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockADGProcess@CAudioDGProcess@@QEAAJXZ @ 0x180017180 (-UnlockADGProcess@CAudioDGProcess@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
CAPOWrapperClient *__fastcall CAPOWrapperClient::`scalar deleting destructor'(CAPOWrapperClient *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)this = &CAPOWrapperClient::`vftable';
  *((_QWORD *)this + 1) = &CAPOWrapperClient::`vftable'{for `IAudioProcessingObject'};
  *((_QWORD *)this + 2) = &CAPOWrapperClient::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::Nil>,1,0>'};
  CAudioDGProcess::UnlockADGProcess(this);
  v4 = *((_QWORD *)this + 7);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  *((_DWORD *)this + 7) = -1073741823;
  if ( (a2 & 1) != 0 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, this);
  }
  return this;
}
