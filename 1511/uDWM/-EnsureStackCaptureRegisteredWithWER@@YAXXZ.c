/*
 * XREFs of ?EnsureStackCaptureRegisteredWithWER@@YAXXZ @ 0x180011A88
 * Callers:
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800119D4 (-DoStackCapture@@YAXIJI@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void EnsureStackCaptureRegisteredWithWER(void)
{
  HMODULE ModuleHandleW; // rax
  FARPROC ProcAddress; // rax
  void (__fastcall *v2)(volatile int *, __int64); // rbx

  if ( !_InterlockedCompareExchange(&dword_1800BBCF8, 1, 0) )
  {
    ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
    if ( ModuleHandleW )
    {
      ProcAddress = GetProcAddress(ModuleHandleW, "WerRegisterMemoryBlock");
      v2 = (void (__fastcall *)(volatile int *, __int64))ProcAddress;
      if ( ProcAddress )
      {
        ((void (__fastcall *)(_DWORD *, __int64))ProcAddress)(g_StackCaptureFrames, 10240LL);
        v2(&g_nCurrentStackCaptureIndex, 4LL);
      }
    }
  }
}
