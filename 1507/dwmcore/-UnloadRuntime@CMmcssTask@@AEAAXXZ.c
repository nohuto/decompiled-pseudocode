/*
 * XREFs of ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1800E856C
 * Callers:
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18008A31C (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ??1CMmcssTask@@QEAA@XZ @ 0x1800E8548 (--1CMmcssTask@@QEAA@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CMmcssTask::UnloadRuntime(CMmcssTask *this)
{
  __int64 v1; // rax
  void (__fastcall *v3)(_QWORD); // rbx
  HMODULE v4; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = (void (__fastcall *)(_QWORD))*((_QWORD *)this + 9);
    if ( v3 && *(_QWORD *)(v1 + 136) )
    {
      v3(*(_QWORD *)(v1 + 136));
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
