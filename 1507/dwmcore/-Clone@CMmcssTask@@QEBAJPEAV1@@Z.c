/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A3DC
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180092308 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008A284 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x18008A2F8 (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A470 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18008A608 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z @ 0x18008A6E8 (-AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z.c)
 */

__int64 __fastcall CMmcssTask::Clone(CMmcssTask *this, LPCWCH *a2)
{
  unsigned int v4; // esi
  char IsActive; // al
  CMmcssTask *v6; // rcx
  char v7; // r8
  char v9; // al
  int v10; // eax
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)this;
  v4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( AreEqualMmTask(*((LPCWCH *)this + 6), a2[6]) )
  {
    CMmcssTask::IsActive((CMmcssTask *)a2);
    IsActive = CMmcssTask::IsActive(this);
    if ( v7 != IsActive )
    {
      if ( (unsigned __int8)CMmcssTask::IsActive(v6) )
        CMmcssTask::Apply((CMmcssTask *)a2, 0);
      else
        CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)a2);
    }
  }
  else
  {
    v9 = CMmcssTask::IsActive(this);
    v10 = CMmcssTask::Set((CMmcssTask *)a2, *((const struct DWM_MMTASK **)this + 6), v9);
    v4 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x4Eu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
  return v4;
}
