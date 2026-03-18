/*
 * XREFs of ??1CD2DCommandList@@MEAA@XZ @ 0x18009C74C
 * Callers:
 *     ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x18009C640 (--_GCD2DCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DCommandList::~CD2DCommandList(CD2DCommandList *this)
{
  int v1; // esi
  __int64 v3; // rdi
  __int64 v4; // rcx
  void *v5; // rdx
  void (*v6)(void); // rax
  void *v7; // rdx
  void (*v8)(void); // rax

  v1 = 0;
  *(_QWORD *)this = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DResource::`vftable'{for `IDeviceResource'};
  if ( *((int *)this + 30) > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)this + 14));
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)this + 30) );
  }
  v5 = (void *)*((_QWORD *)this + 13);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v6 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v5);
    else
      v6();
    *((_QWORD *)this + 13) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 14);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( (char *)v8 == (char *)WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v7);
    else
      v8();
    *((_QWORD *)this + 14) = 0LL;
  }
  *((_DWORD *)this + 30) = 0;
  CD2DResource::~CD2DResource(this);
}
