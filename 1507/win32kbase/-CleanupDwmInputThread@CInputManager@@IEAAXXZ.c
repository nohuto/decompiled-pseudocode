/*
 * XREFs of ?CleanupDwmInputThread@CInputManager@@IEAAXXZ @ 0x1C0013628
 * Callers:
 *     ?DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z @ 0x1C00136B4 (-DwmInputThread@CInputManager@@IEAAJPEAX0P6AHPEAUtagDITCALLBACKSTRUCT@@@ZH@Z.c)
 *     ?NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z @ 0x1C00DE7D0 (-NotifyDwmInputThreadShutdown@CInputManager@@SAXPEAU_ETHREAD@@@Z.c)
 * Callees:
 *     UserDeactivateDwmInputProcessing_0 @ 0x1C0002F00 (UserDeactivateDwmInputProcessing_0.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall CInputManager::CleanupDwmInputThread(CInputManager *this)
{
  HANDLE *v1; // rdi
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

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
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 6) = 0LL;
  }
  v5 = *((_QWORD *)this + 7);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 7) = 0LL;
  }
  *((_DWORD *)this + 16) = 0;
  if ( !*((_DWORD *)this + 18) )
    *((_QWORD *)this + 1) = 0LL;
}
