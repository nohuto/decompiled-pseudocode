/*
 * XREFs of ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800A5488
 * Callers:
 *     ??_GCInteractionContextWrapper@@UEAAPEAXI@Z @ 0x1800A554C (--_GCInteractionContextWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180021DE0 (-ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ.c)
 *     ?RemoveAll@?$CArray@PEAVCBufferedOutputPointer@@V?$CArrayEqualHelper@PEAVCBufferedOutputPointer@@@@@@QEAAXXZ @ 0x1800B52E4 (-RemoveAll@-$CArray@PEAVCBufferedOutputPointer@@V-$CArrayEqualHelper@PEAVCBufferedOutputPointer@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionContextWrapper::~CInteractionContextWrapper(CInteractionContextWrapper *this)
{
  __int64 **v2; // rdi
  __int64 v3; // rbp
  __int64 *v4; // rdx
  __int64 v5; // rax

  *(_QWORD *)this = &CInteractionContextWrapper::`vftable'{for `IInteractionContextWrapper'};
  *((_QWORD *)this + 1) = &CInteractionContextWrapper::`vftable'{for `CMILRefCountBase'};
  if ( *((_QWORD *)this + 3) )
  {
    DestroyInteractionContext();
    *((_QWORD *)this + 3) = 0LL;
    CInteractionContextWrapper::ResetBufferedOutput(this);
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 544);
  v2 = (__int64 **)((char *)this + 480);
  do
  {
    v3 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
    v4 = *v2;
    v5 = **v2;
    if ( (__int64 **)(*v2)[1] != v2 || *(__int64 **)(v5 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v2;
    if ( v4 != (__int64 *)v2 )
    {
      v3 = v4[2];
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      --*((_DWORD *)this + 124);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  }
  while ( v3 );
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 504));
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
