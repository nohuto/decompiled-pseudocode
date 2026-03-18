/*
 * XREFs of ?ResetBufferedOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180021DE0
 * Callers:
 *     ??1CInteractionContextWrapper@@UEAA@XZ @ 0x1800A5488 (--1CInteractionContextWrapper@@UEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInteractionContextWrapper::ResetBufferedOutput(CInteractionContextWrapper *this)
{
  int v2; // esi
  __int64 v3; // rdi
  char *v4; // rdi
  __int64 v5; // rbp
  char *v6; // rdx
  __int64 v7; // rax
  unsigned int *v8; // rcx

  if ( *((_DWORD *)this + 124) )
  {
    v4 = (char *)this + 480;
    do
    {
      v5 = 0LL;
      EnterCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      v6 = *(char **)v4;
      v7 = **(_QWORD **)v4;
      if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *(char **)(v7 + 8) != v6 )
        __fastfail(3u);
      *(_QWORD *)v4 = v7;
      *(_QWORD *)(v7 + 8) = v4;
      if ( v6 != v4 )
      {
        v5 = *((_QWORD *)v6 + 2);
        (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
        --*((_DWORD *)v4 + 4);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(v4 + 24));
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v5);
    }
    while ( *((_DWORD *)this + 124) );
  }
  v2 = 0;
  if ( *((int *)this + 138) > 0 )
  {
    v3 = 0LL;
    do
    {
      v8 = *(unsigned int **)(v3 + *((_QWORD *)this + 68));
      if ( *((_BYTE *)v8 + 4) )
        NtDCompositionUpdatePointerCapture(0LL, *v8);
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *(_QWORD *)(*((_QWORD *)this + 68) + v3));
      ++v2;
      *(_QWORD *)(v3 + *((_QWORD *)this + 68)) = 0LL;
      v3 += 8LL;
    }
    while ( v2 < *((_DWORD *)this + 138) );
  }
  CArray<CBufferedOutputPointer *,CArrayEqualHelper<CBufferedOutputPointer *>>::RemoveAll((char *)this + 544);
}
