/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x18011AAE4
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800A7EC0 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x18011AAC0 (--1CMmcssTask@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  __int64 v2; // rcx
  void (*v3)(void); // rax
  HMODULE v4; // rcx

  v2 = *((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = (void (*)(void))*((_QWORD *)this + 9);
    if ( v3 && *(_QWORD *)(v2 + 136) )
    {
      v3();
      *(_DWORD *)(*((_QWORD *)this + 6) + 128LL) = 0;
    }
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  v4 = (HMODULE)*((_QWORD *)this + 7);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  FreeLibrary(v4);
  *((_QWORD *)this + 7) = 0LL;
}
