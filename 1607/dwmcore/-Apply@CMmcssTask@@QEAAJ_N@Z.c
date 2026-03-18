/*
 * XREFs of ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180021818
 * Callers:
 *     ?ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z @ 0x18003B424 (-ProcessRenderingStatus@CComposition@@QEAAXW4RENDERING_STATUS@1@@Z.c)
 *     ?Run@CDWMInputThread@@AEAAKXZ @ 0x1800A7C30 (-Run@CDWMInputThread@@AEAAKXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     _lambda_f3dd36a108fc8d7388aafb7b286089e3_::_lambda_invoker_cdecl_ @ 0x1800B7C20 (_lambda_f3dd36a108fc8d7388aafb7b286089e3_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Apply(struct _RTL_CRITICAL_SECTION *this, char a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  signed int LastError; // eax
  unsigned int v10; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

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
          v10 = 278;
        }
        else
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v10 = 274;
        }
        if ( LastError >= 0 )
          LastError = -2003304445;
        v4 = LastError;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, LastError, v10);
      }
    }
  }
LABEL_2:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
