/*
 * XREFs of ??1CChannel@@AEAA@XZ @ 0x1801145D0
 * Callers:
 *     ?Release@CChannel@@UEAAKXZ @ 0x18004AC00 (-Release@CChannel@@UEAAKXZ.c)
 * Callees:
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180043D84 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180079520 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CChannel::~CChannel(CChannel *this)
{
  CMILRefCountBase *v2; // rcx
  void *v3; // rcx
  __int64 **v4; // rdi
  __int64 v5; // rax
  WPF::ProcessHeapImpl *v6; // rcx
  CCommandBatch *v7; // rcx
  WPF::ProcessHeapImpl *v8; // rcx
  __int64 v9; // rdx

  *(_QWORD *)this = &CChannel::`vftable';
  v2 = (CMILRefCountBase *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    CMILRefCountBase::Release(v2);
    *((_QWORD *)this + 6) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    CloseHandle(v3);
  v4 = (__int64 **)((char *)this + 64);
  while ( *v4 != (__int64 *)v4 )
  {
    v5 = **v4;
    if ( (__int64 **)(*v4)[1] != v4 || *(__int64 **)(v5 + 8) != *v4 )
      __fastfail(3u);
    v6 = WPF::g_pProcessHeap;
    *v4 = (__int64 *)v5;
    *(_QWORD *)(v5 + 8) = v4;
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)v6 + 32LL))(v6);
  }
  v7 = (CCommandBatch *)*((_QWORD *)this + 21);
  if ( v7 )
    CCommandBatch::`scalar deleting destructor'(v7);
  *((_QWORD *)this + 21) = 0LL;
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  CCriticalSection::DeInit((struct _RTL_CRITICAL_SECTION *)((char *)this + 88));
  v8 = WPF::g_pProcessHeap;
  v9 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)v8 + 32LL))(v8, v9);
}
