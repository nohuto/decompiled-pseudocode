/*
 * XREFs of ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x18008A470
 * Callers:
 *     ?Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETCURRENTMMTASK@@@Z @ 0x1800690E4 (-Partition_SetCurrentMmTask@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILC.c)
 *     ?Clone@CMmcssTask@@QEBAJPEAV1@@Z @ 0x18008A3DC (-Clone@CMmcssTask@@QEBAJPEAV1@@Z.c)
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x180092CBC (-Initialize@CInputManager@@IEAAJXZ.c)
 *     ?Initialize@CManipulationManager@@AEAAJXZ @ 0x180092F2C (-Initialize@CManipulationManager@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18008A284 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?LoadRuntime@CMmcssTask@@AEAAJXZ @ 0x18008A31C (-LoadRuntime@CMmcssTask@@AEAAJXZ.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x18008A608 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     ?AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z @ 0x18008A6E8 (-AreEqualMmTask@@YA_NPEBUDWM_MMTASK@@0@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
        goto LABEL_13;
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
LABEL_13:
    if ( v3 >= 0 )
      goto LABEL_5;
    goto LABEL_20;
  }
LABEL_5:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
  return 0LL;
}
