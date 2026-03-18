/*
 * XREFs of ?ReleasePendingReferences@CManipulationManager@@QEAAXXZ @ 0x18010EAB4
 * Callers:
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x18003C450 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CManipulationManager::ReleasePendingReferences(CManipulationManager *this)
{
  char *v1; // rbx
  __int64 v2; // rdi
  char *v3; // rdx
  __int64 v4; // rax

  v1 = (char *)this + 208;
  while ( 1 )
  {
    v2 = 0LL;
    EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    v3 = *(char **)v1;
    v4 = **(_QWORD **)v1;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || *(char **)(v4 + 8) != v3 )
      __fastfail(3u);
    *(_QWORD *)v1 = v4;
    *(_QWORD *)(v4 + 8) = v1;
    if ( v3 != v1 )
    {
      v2 = *((_QWORD *)v3 + 2);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
      --*((_DWORD *)v1 + 4);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
    if ( !v2 )
      break;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
}
