/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800A4A14
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x180095720 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x1800A4D70 (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Initialize@CDWMInputThread@@AEAAJXZ @ 0x1800A6394 (-Initialize@CDWMInputThread@@AEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x1800A6CA4 (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800A49A0 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800A4BAC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x1800A4CB0 (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z @ 0x1800A6188 (-AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z.c)
 */

__int64 __fastcall CMmcssTask::Set(CMmcssTask *this, const struct DWM_MMTASK *a2, char a3)
{
  int v3; // ebp
  const struct DWM_MMTASK *v4; // r14
  int Runtime; // eax
  __int64 v10; // rax
  _OWORD *v11; // rax
  int v12; // eax
  __int64 v13; // r14
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = (struct _RTL_CRITICAL_SECTION *)this;
  v3 = 0;
  v4 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( a2 && *(_WORD *)a2 )
    v4 = a2;
  if ( !AreEqualMmTask(*((LPCWCH *)this + 6), (LPCWCH)v4) )
  {
    if ( *((_QWORD *)this + 6) )
      CMmcssTask::Revert((struct _RTL_CRITICAL_SECTION *)this);
    if ( !v4 )
    {
LABEL_15:
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 6));
      *((_QWORD *)this + 6) = 0LL;
      goto LABEL_5;
    }
    if ( !*((_QWORD *)this + 6) )
    {
      Runtime = CMmcssTask::LoadRuntime(this);
      v3 = Runtime;
      if ( Runtime < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, Runtime, 0x93u);
LABEL_16:
        if ( v3 >= 0 )
          goto LABEL_5;
        goto LABEL_20;
      }
      v10 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
              WPF::g_pProcessHeap,
              144LL);
      *((_QWORD *)this + 6) = v10;
      if ( !v10 )
      {
        v3 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x9Cu);
LABEL_20:
        v13 = *((_QWORD *)this + 6);
        if ( !v13 )
          goto LABEL_5;
        if ( v3 == -2147023096 )
        {
          *(_DWORD *)(v13 + 132) = 0;
          goto LABEL_5;
        }
        goto LABEL_15;
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
      v12 = CMmcssTask::Apply(this, 0);
      v3 = v12;
      if ( v12 >= 0 )
        goto LABEL_5;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xA8u);
    }
    goto LABEL_16;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return 0LL;
}
