/*
 * XREFs of ?ProcessInput@CInputManager@@AEAAJXZ @ 0x180092C1C
 * Callers:
 *     ?s_InputThreadMain@CInputManager@@CAKPEAX@Z @ 0x1800921E0 (-s_InputThreadMain@CInputManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008A284 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008A2F8 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18008A608 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CInputManager::ProcessInput(HANDLE *this)
{
  unsigned int v1; // edi
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  char v5; // al
  int v6; // eax
  int v7; // eax
  HANDLE v8; // rcx

  v1 = 0;
  while ( !*((_BYTE *)this + 48) )
  {
    ResetEvent(this[3]);
    if ( *((_BYTE *)this + 48) )
      break;
    IsActive = CMmcssTask::IsActive((CMmcssTask *)((char *)this[2] + 80));
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 7);
    if ( IsActive )
    {
      v7 = CMmcssTask::Apply(v4, 1);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x21Au);
    }
    else
    {
      CMmcssTask::Revert(v4);
    }
    v5 = CMmcssTask::IsActive((CMmcssTask *)(this + 7));
    v6 = NtCompositionInputThread(this[3], this[4], CInputManager::s_HitTestRequest, v5 != 0);
    if ( v6 < 0 )
    {
      if ( v6 == -1073741822 )
      {
        v1 = -2147467263;
      }
      else
      {
        v1 = -2147024891;
        if ( v6 != -1073741790 )
          v1 = -2147467259;
      }
      v8 = this[5];
      *((_BYTE *)this + 48) = 1;
      CloseHandle(v8);
      this[5] = 0LL;
    }
  }
  return v1;
}
