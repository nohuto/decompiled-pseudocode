/*
 * XREFs of ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A62F4
 * Callers:
 *     ?RunInputThreadStatic@CDWMInputThread@@SAKPEAX@Z @ 0x1800A8D80 (-RunInputThreadStatic@CDWMInputThread@@SAKPEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800A4C8C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 */

__int64 __fastcall CDWMInputThread::Run(HANDLE *this)
{
  unsigned int v1; // edi
  char IsActive; // al
  struct _RTL_CRITICAL_SECTION *v4; // rcx
  char v5; // al
  int v6; // eax
  int v7; // eax
  HANDLE v8; // rcx

  v1 = 0;
  while ( !*((_BYTE *)this + 24) )
  {
    ResetEvent(this[2]);
    if ( *((_BYTE *)this + 24) )
      break;
    IsActive = CMmcssTask::IsActive((CMmcssTask *)((char *)*this + 80));
    v4 = (struct _RTL_CRITICAL_SECTION *)(this + 4);
    if ( IsActive )
    {
      v7 = CMmcssTask::Apply(v4, 1);
      if ( v7 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x13Cu);
    }
    else
    {
      CMmcssTask::Revert(v4);
    }
    v5 = CMmcssTask::IsActive((CMmcssTask *)(this + 4));
    v6 = NtCompositionInputThread(this[2], this[15], CInputManager::s_HitTestRequest, v5 != 0);
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
      v8 = this[1];
      *((_BYTE *)this + 24) = 1;
      CloseHandle(v8);
      this[1] = 0LL;
    }
  }
  if ( (v1 & 0x1FFF0000) == 0x70000 )
    return (unsigned __int16)v1;
  return v1;
}
