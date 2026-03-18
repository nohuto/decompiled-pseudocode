/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x1400053F8
 * Callers:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x140005344 (-DoStackCapture@@YAXIJI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140003F20 (_guard_dispatch_icall_nop.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v2)(volatile int *, __int64); // rbx

  if ( !_InterlockedCompareExchange(&dword_14000A948, 1, 0) )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
      v2 = (void (__fastcall *)(volatile int *, __int64))ProcAddress;
      if ( ProcAddress )
      {
        ((void (__fastcall *)(void *, __int64))ProcAddress)(&g_StackCaptureFrames, 10240LL);
        v2(&g_nCurrentStackCaptureIndex, 4LL);
      }
    }
  }
}
