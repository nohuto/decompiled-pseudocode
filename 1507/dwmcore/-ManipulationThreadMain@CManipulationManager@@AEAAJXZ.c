/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x180092720 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008A284 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008A2F8 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18008A608 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x18008A714 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800994A0 (IsRegisterManipulationThreadPresent.c)
 *     TemplateEventDescriptor @ 0x1800E1E38 (TemplateEventDescriptor.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x18012A874 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18012A954 (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18012AE48 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadMain(CManipulationManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  CManipulationManager *v4; // rcx
  DWORD v5; // eax
  DWORD v6; // eax
  DWORD v7; // eax
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v9; // rcx
  int v10; // eax
  signed int LastError; // eax

  v1 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(this, &MANIPULATION_THREAD_STARTUP);
  EnterCriticalSection(&stru_180195D18);
  byte_180195D14 = 0;
  LeaveCriticalSection(&stru_180195D18);
  EnterCriticalSection(&stru_180195D58);
  byte_180195D54 = 0;
  LeaveCriticalSection(&stru_180195D58);
  if ( (unsigned __int8)IsRegisterManipulationThreadPresent() )
  {
    SetLastError(0);
    if ( (unsigned int)RegisterManipulationThread(CManipulationManager::ManipulationThreadCallback) )
    {
      CManipulationManager::UpdateMMCSSTask(v4);
      while ( !*((_BYTE *)this + 32) )
      {
        v5 = WaitForMultipleObjects(4u, &CManipulationManager::s_rghWaitEvents, 0, 0xFFFFFFFF);
        if ( v5 )
        {
          v6 = v5 - 1;
          if ( v6 )
          {
            v7 = v6 - 1;
            if ( v7 )
            {
              if ( v7 == 1 )
              {
                IsActive = CMmcssTask::IsActive((CMmcssTask *)(*((_QWORD *)this + 2) + 80LL));
                v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 40);
                if ( IsActive )
                {
                  v10 = CMmcssTask::Apply(v9, 1);
                  if ( v10 < 0 )
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xEFu);
                }
                else
                {
                  CMmcssTask::Revert(v9);
                }
              }
            }
            else
            {
              CManipulationManager::OnInput(this);
            }
          }
          else
          {
            CManipulationManager::OnInteractionUpdate(this);
          }
        }
        else
        {
          CManipulationManager::OnShutdown(this);
        }
      }
    }
    else
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      if ( LastError >= 0 )
        LastError = -2003304445;
      v1 = LastError;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, 0x21Du);
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    TemplateEventDescriptor(v3, &MANIPULATION_THREAD_CLEANUP);
  return v1;
}
