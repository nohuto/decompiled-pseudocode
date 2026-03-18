/*
 * XREFs of DxgkShutdownBootGraphics @ 0x1C0073320
 * Callers:
 *     ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0071920 (-DxgkCddDestroy@@YAJIIQEAXE@Z.c)
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0073484 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkShutdownBootGraphics(__int64 a1, unsigned int a2)
{
  struct DXGGLOBAL *Global; // rax
  void *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  struct _KTHREAD **ProcessDxgProcess; // rax
  __int64 v8; // rbx
  struct DXGDEVICE *v9; // rdi
  _BYTE v11[16]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v12[32]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGDEVICE *v13; // [rsp+70h] [rbp+20h] BYREF
  char v14; // [rsp+78h] [rbp+28h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (struct DXGGLOBAL *)((char *)Global + 1016));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v4 = (void *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 113);
  if ( v4 )
  {
    InbvNotifyDisplayOwnershipChange(0LL, 0LL);
    ExFreePoolWithTag(v4, 0x4B677844u);
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 113) = 0LL;
    *((_QWORD *)DXGGLOBAL::GetGlobal() + 126) = 0LL;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  v13 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v14, a2, ProcessDxgProcess, &v13);
  if ( v13 )
  {
    v8 = *((_QWORD *)v13 + 357);
    if ( v8 )
    {
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v12,
        (struct DXGADAPTER *)v8,
        1);
      if ( *(_DWORD *)(v8 + 176) == 1 )
      {
        v9 = v13;
        if ( *((_BYTE *)v13 + 2904) )
        {
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 2136) + 376LL) + 8LL)
                                                  + 472LL))(
            *((_QWORD *)v13 + 71),
            3LL);
          *((_BYTE *)v9 + 2904) = 0;
        }
      }
      if ( v12[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v12);
    }
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 251) = 4;
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v14);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  return 0LL;
}
