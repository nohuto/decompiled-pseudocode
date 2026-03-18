/*
 * XREFs of ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80
 * Callers:
 *     ?ProcessKernelTokens@CSurfaceManager@@AEAAJXZ @ 0x180037078 (-ProcessKernelTokens@CSurfaceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180021818 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A7E44 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?IsActive@CMmcssTask@@QEBA_NXZ @ 0x1800A7E9C (-IsActive@CMmcssTask@@QEBA_NXZ.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800A81D0 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
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
  if ( CMmcssTask::AreEqualMmTask(*((LPCWCH *)this + 6), a2[6]) )
  {
    CMmcssTask::IsActive((CMmcssTask *)a2);
    IsActive = CMmcssTask::IsActive(this);
    if ( v7 != IsActive )
    {
      if ( (unsigned __int8)CMmcssTask::IsActive(v6) )
        CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)a2, 0);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Bu);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v4;
}
