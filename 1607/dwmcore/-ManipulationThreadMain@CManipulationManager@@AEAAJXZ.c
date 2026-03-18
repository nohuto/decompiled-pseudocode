/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A77AC
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x1800AA180 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUMessageCallThreadInfo@1@@Z @ 0x1800A7014 (-SetupMessageCallThreadInfo@CManipulationManager@@AEAAJPEAUIMessageSession@@P6AJPEAXPEBXH@ZPEAUM.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x1800A7BF4 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BCF6C (TemplateEventDescriptor.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800BEEA0 (IsRegisterManipulationThreadPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadMain(CManipulationManager *this)
{
  struct IMessageSession **v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  signed int v5; // ebx
  struct IMessageSession *v6; // rcx
  CManipulationManager *v7; // rcx
  signed int LastError; // eax
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &MANIPULATION_THREAD_STARTUP);
  v2 = (struct IMessageSession **)((char *)this + 320);
  v3 = *((_QWORD *)this + 40);
  if ( v3 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = CoreUICreate((char *)this + 320);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 609;
    goto LABEL_27;
  }
  EnterCriticalSection(&CriticalSection);
  byte_1801EFFA4 = 0;
  LeaveCriticalSection(&CriticalSection);
  EnterCriticalSection(&stru_1801EFFE8);
  byte_1801EFFE4 = 0;
  LeaveCriticalSection(&stru_1801EFFE8);
  if ( !(unsigned __int8)IsRegisterManipulationThreadPresent() )
    goto LABEL_29;
  SetLastError(0);
  if ( !(unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback) )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v11 = 620;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v9 = v5;
    goto LABEL_28;
  }
  CManipulationManager::UpdateMMCSSTask(v7);
  v4 = CManipulationManager::SetupMessageCallThreadInfo(
         this,
         *v2,
         (int (*)(void *, const void *, int))CManipulationManager::s_ManipulationThreadEndpointProc,
         (CManipulationManager *)((char *)this + 328));
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 633;
    goto LABEL_27;
  }
  v4 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(unsigned __int64, __int64, __int64), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
         *v2,
         qword_1801F0250,
         lambda_85f18509193cd6d47eaa6d1c8f3fb8df_::_lambda_invoker_cdecl_,
         this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 642;
    goto LABEL_27;
  }
  v4 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(CManipulationManager *), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
         *v2,
         CManipulationManager::s_rghWaitEvents,
         lambda_0342f3220c32cb7c81f8659183993432_::_lambda_invoker_cdecl_,
         this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 651;
    goto LABEL_27;
  }
  v4 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
         *v2,
         hEvent,
         lambda_d567cd3a6c68f97a2ae1dd4cccee7ffb_::_lambda_invoker_cdecl_,
         this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 660;
    goto LABEL_27;
  }
  v4 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(), CManipulationManager *))(*(_QWORD *)*v2 + 264LL))(
         *v2,
         qword_1801F0258,
         lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_,
         this);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 669;
LABEL_27:
    v9 = v4;
LABEL_28:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, v11);
    goto LABEL_29;
  }
  (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)*v2 + 224LL))(*v2);
  v6 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_29:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v6, &MANIPULATION_THREAD_CLEANUP);
  return (unsigned int)v5;
}
