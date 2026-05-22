/*
 * XREFs of ?NotifyAttachedAndStart@WGIController@@QEAAJPEAUIRawInputProvider@@@Z @ 0x180062524
 * Callers:
 *     ?OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationController@Input@Gaming@Windows@@@Z @ 0x180060FC0 (-OnUINavigationControllerAdded@WGIRawInputProvider@@AEAAJPEAUIInspectable@@PEAUIUINavigationCont.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z @ 0x180063080 (-NotifyDeviceAttach@WGIController@@AEAAJPEAUIRawInputProvider@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WGIController::NotifyAttachedAndStart(WGIController *this, struct IRawInputProvider *a2)
{
  unsigned int v2; // ebx
  void *v5; // rbx
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // r9d

  v2 = 0;
  if ( !*((_QWORD *)this + 15) )
  {
    v5 = operator new(0x38uLL);
    memset(v5, 0, 0x38uLL);
    v6 = *((_QWORD *)this + 11);
    *((_QWORD *)this + 15) = v5;
    **((_DWORD **)this + 15) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
    *(_DWORD *)(*((_QWORD *)this + 15) + 4LL) = *((_DWORD *)this + 28);
    v7 = WGIController::NotifyDeviceAttach(this, a2);
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_9;
      v9 = 125;
      goto LABEL_8;
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, WGIController *))(**((_QWORD **)this + 8) + 144LL))(
           *((_QWORD *)this + 8),
           this);
    v2 = v7;
    if ( v7 < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        goto LABEL_9;
      v9 = 126;
LABEL_8:
      Template_qqq(v8, &MinInput_Warning_CheckResult, 0, v9, v7);
LABEL_9:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  return v2;
}
