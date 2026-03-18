/*
 * XREFs of ?PeekNextMessage@CChannel@@UEAAHPEAUMIL_MESSAGE@@_K@Z @ 0x180047C10
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800BF662 (memcpy_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CChannel::PeekNextMessage(CChannel *this, struct MIL_MESSAGE *a2, unsigned __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  unsigned int v7; // edi
  __int64 **v8; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rax
  size_t v11; // r8
  size_t v13; // r8

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 88);
  v7 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 88));
  v8 = (__int64 **)((char *)this + 64);
  if ( *v8 == (__int64 *)v8 )
  {
    v13 = 28LL;
    if ( a3 < 0x1C )
      v13 = a3;
    memset_0(a2, 0, v13);
  }
  else
  {
    v9 = *v8;
    v10 = **v8;
    if ( (__int64 **)(*v8)[1] != v8 || *(__int64 **)(v10 + 8) != v9 )
      __fastfail(3u);
    v11 = 28LL;
    *v8 = (__int64 *)v10;
    *(_QWORD *)(v10 + 8) = v8;
    if ( a3 < 0x1C )
      v11 = a3;
    memcpy_0(a2, v9 + 2, v11);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64 *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v9);
    v7 = 1;
  }
  LeaveCriticalSection(v3);
  return v7;
}
