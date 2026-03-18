/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18008A608
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x180068248 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A3DC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A470 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?ProcessInput@CInputManager@@AEAAJXZ @ 0x180092C1C (-ProcessInput@CInputManager@@AEAAJXZ.c)
 *     ?ManipulationThreadMain@CManipulationManager@@AEAAJXZ @ 0x180092E2C (-ManipulationThreadMain@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
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
    v7 = *(_QWORD *)&this[1].LockCount;
    if ( *(_WORD *)v7 )
    {
      if ( !*(_QWORD *)(v7 + 136) )
      {
        SetLastError(0);
        v8 = ((__int64 (__fastcall *)(_QWORD, __int64))this[1].LockSemaphore)(
               *(_QWORD *)&this[1].LockCount,
               *(_QWORD *)&this[1].LockCount + 128LL);
        *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL) = v8;
        if ( v8 )
        {
          SetLastError(0);
          if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD))this[2].DebugInfo)(
                 *(_QWORD *)(*(_QWORD *)&this[1].LockCount + 136LL),
                 *(unsigned int *)(*(_QWORD *)&this[1].LockCount + 132LL)) )
          {
            goto LABEL_2;
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
LABEL_2:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
