/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180094B94 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A4D70 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A62F4 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x1800A6BA0 (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = this;
  v4 = 0;
  EnterCriticalSection(this);
  v5 = *(_QWORD *)&this[1].LockCount;
  if ( v5 )
  {
    if ( a2 )
      *(_DWORD *)(v5 + 128) = 0;
    v6 = *(_QWORD *)&this[1].LockCount;
    if ( *(_WORD *)v6 )
    {
      if ( !*(_QWORD *)(v6 + 136) )
      {
        SetLastError(0);
        v7 = ((__int64 (__fastcall *)(_QWORD, __int64))this[1].LockSemaphore)(
               *(_QWORD *)&this[1].LockCount,
               *(_QWORD *)&this[1].LockCount + 128LL);
        *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL) = v7;
        if ( v7 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[2].DebugInfo)(
                 *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL),
                 *(unsigned int *)(*(_QWORD *)&this[1].LockCount + 132LL)) )
          {
            goto LABEL_8;
          }
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = 233;
        }
        else
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = 229;
        }
        if ( LastError >= 0 )
          LastError = -2003304445;
        v4 = LastError;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, v10);
      }
    }
  }
LABEL_8:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
