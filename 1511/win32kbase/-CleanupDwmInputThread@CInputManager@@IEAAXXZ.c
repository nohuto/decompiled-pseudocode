/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C004FDB8
 * Callers:
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C004FE44 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00E0480 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 * Callees:
 *     UserDeactivateDwmInputProcessing_0 @ 0x1C0002F40 (UserDeactivateDwmInputProcessing_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this)
{
  HANDLE *v1; // rdi
  void *v3; // rcx

  v1 = (HANDLE *)((char *)this + 16);
  UserDeactivateDwmInputProcessing_0();
  if ( *v1 )
  {
    ZwClose(*v1);
    *v1 = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 3);
  if ( v3 )
  {
    ZwClose(v3);
    *((_QWORD *)this + 3) = 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
  {
    Win32FreePool();
    *((_QWORD *)this + 6) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    Win32FreePool();
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  if ( !*((_DWORD *)this + 18) )
    *((_QWORD *)this + 1) = 0LL;
}
