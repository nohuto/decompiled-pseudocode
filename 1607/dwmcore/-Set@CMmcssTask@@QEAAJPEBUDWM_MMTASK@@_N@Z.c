/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A804C
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x18003BF30 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A7968 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1800A7CD0 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A7F80 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 * Callees:
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180021818 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A7E44 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800A7EC0 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z @ 0x1800A81D0 (-AreEqualMmTask@CMmcssTask@@CA_NPEBUDWM_MMTASK@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMmcssTask::Set(CMmcssTask *this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // edi
  const struct DWM_MMTASK *v4; // rsi
  int Runtime; // eax
  __int64 v10; // rax
  _OWORD *v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !CMmcssTask::AreEqualMmTask(*((LPCWCH *)this + 6), (LPCWCH)v4) )
  {
    if ( *((_QWORD *)this + 6) )
      CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)this);
    if ( !v4 )
    {
      v12 = *((_QWORD *)this + 6);
LABEL_16:
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v12);
      *((_QWORD *)this + 6) = 0LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)this + 6) )
    {
      Runtime = CMmcssTask::LoadRuntime(this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Runtime, 0xC0u);
        goto LABEL_13;
      }
      v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              144LL);
      *((_QWORD *)this + 6) = v10;
      if ( !v10 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC9u);
LABEL_20:
        v12 = *((_QWORD *)this + 6);
        if ( !v12 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          *(_DWORD *)(v12 + 132) = 0;
          goto LABEL_5;
        }
        goto LABEL_16;
      }
    }
    v11 = (_OWORD *)*((_QWORD *)this + 6);
    *v11 = *(_OWORD *)v4;
    v11[1] = *((_OWORD *)v4 + 1);
    v11[2] = *((_OWORD *)v4 + 2);
    v11[3] = *((_OWORD *)v4 + 3);
    v11[4] = *((_OWORD *)v4 + 4);
    v11[5] = *((_OWORD *)v4 + 5);
    v11[6] = *((_OWORD *)v4 + 6);
    v11[7] = *((_OWORD *)v4 + 7);
    v11[8] = *((_OWORD *)v4 + 8);
    *(_QWORD *)(*((_QWORD *)this + 6) + 136LL) = 0LL;
    if ( a3 )
    {
      v13 = CMmcssTask::Apply((struct _RTL_CRITICAL_SECTION *)this, 0);
      v3 = v13;
      if ( v13 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xD5u);
    }
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return 0LL;
}
