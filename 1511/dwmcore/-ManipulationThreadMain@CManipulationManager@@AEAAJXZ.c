/*
 * XREFs of ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0
 * Callers:
 *     ?s_ThreadMain@CManipulationManager@@CAKPEAX@Z @ 0x1800A8CB0 (-s_ThreadMain@CManipulationManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180004D7C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800A4C8C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?UpdateMMCSSTask@CManipulationManager@@QEAAJXZ @ 0x1800A6524 (-UpdateMMCSSTask@CManipulationManager@@QEAAJXZ.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     IsRegisterManipulationThreadPresent @ 0x1800BC140 (IsRegisterManipulationThreadPresent.c)
 *     ?OnInteractionUpdate@CManipulationManager@@AEAAXXZ @ 0x18013FD8C (-OnInteractionUpdate@CManipulationManager@@AEAAXXZ.c)
 *     ?OnShutdown@CManipulationManager@@AEAAXXZ @ 0x18013FF10 (-OnShutdown@CManipulationManager@@AEAAXXZ.c)
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
  EnterCriticalSection(&CriticalSection);
  byte_1801A3D04 = 0;
  LeaveCriticalSection(&CriticalSection);
  EnterCriticalSection(&stru_1801A3D48);
  byte_1801A3D44 = 0;
  LeaveCriticalSection(&stru_1801A3D48);
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
              CManipulationManager::OnInput((__int64)this);
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
