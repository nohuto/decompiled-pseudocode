/*
 * XREFs of ?Start@CMonitor@@QEAAJXZ @ 0x18009BF40
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x180040374 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180094F88 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x180097FA4 (-RestartMonitorIfAppropriate@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 *     ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x1800992A4 (-HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18009AC30 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z @ 0x18009AD14 (-OnPauseOnBatteryChanged@CMonitor@@AEAAXPEAUIMMDevice@@@Z.c)
 *     ?OnPowerStateChanged@CMonitor@@IEAAXE@Z @ 0x18009AEDC (-OnPowerStateChanged@CMonitor@@IEAAXE@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ??_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z @ 0x180098C9C (--_GSampleDataBlock@CMonitor@@QEAAPEAXI@Z.c)
 *     ?AddHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180098DF8 (-AddHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?AllocateBytes@?$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180098E68 (-AllocateBytes@-$CHeapPtrBase@EVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?GetPowerStatus@CMonitor@@AEAA_NPEAE@Z @ 0x1800990A8 (-GetPowerStatus@CMonitor@@AEAA_NPEAE@Z.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18009C808 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CMonitor::Start(CMonitor *this)
{
  CMonitor *v1; // r15
  HRESULT v2; // esi
  __int64 v3; // rcx
  int v4; // r9d
  double v6; // xmm1_8
  double v7; // xmm3_8
  unsigned __int64 v8; // rax
  char *v9; // rdx
  double v10; // xmm1_8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned int i; // edi
  void **v14; // rax
  void **v15; // r12
  void **v16; // rbx
  int v17; // eax
  void **v18; // rax
  void **v19; // r12
  void **v20; // rbx
  HRESULT *v21; // rbx
  ATL::CAtlException *v22; // rbx
  LPVOID ppv; // [rsp+30h] [rbp-98h] BYREF
  LPCRITICAL_SECTION v24; // [rsp+38h] [rbp-90h] BYREF
  char v25; // [rsp+40h] [rbp-88h]
  unsigned __int64 v26; // [rsp+48h] [rbp-80h]
  void **v27; // [rsp+50h] [rbp-78h] BYREF
  void **v28; // [rsp+58h] [rbp-70h]
  LPCRITICAL_SECTION v29; // [rsp+60h] [rbp-68h] BYREF
  char v30; // [rsp+68h] [rbp-60h]
  __int64 v31; // [rsp+70h] [rbp-58h]
  HRESULT *v32; // [rsp+78h] [rbp-50h] BYREF
  ATL::CAtlException *v33; // [rsp+80h] [rbp-48h] BYREF
  CMonitor *v34; // [rsp+D0h] [rbp+8h] BYREF
  void **v35; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v36; // [rsp+E0h] [rbp+18h]
  void **v37; // [rsp+E8h] [rbp+20h] BYREF

  v34 = this;
  v31 = -2LL;
  v1 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v24, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16));
  v2 = 0;
  v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x35u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
      v1);
    v3 = *(_QWORD *)&WPP_GLOBAL_Control.Data1;
  }
  v4 = *((_DWORD *)v1 + 14);
  if ( ((v4 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( (struct _GUID *)v3 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v3 + 28) & 0x800000) != 0
      && *(_BYTE *)(v3 + 25) >= 4u )
    {
      WPP_SF_D(*(_QWORD *)(v3 + 16), 0x3Au, (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids, v4);
    }
LABEL_93:
    if ( v25 )
      ATL::CCritSecLock::Unlock(&v24);
    return (unsigned int)v2;
  }
  if ( *((_BYTE *)v1 + 61)
    && CMonitor::GetPowerStatus(v1, (unsigned __int8 *)&v35)
    && ((unsigned __int8)v35 & 0xFD) == 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x36u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
    }
  }
  else
  {
    ppv = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    LODWORD(v35) = 0;
    v2 = CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv);
    if ( v2 < 0
      || (v2 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, void ***))(*(_QWORD *)ppv + 40LL))(
                 ppv,
                 *((_QWORD *)v1 + 21),
                 &v37),
          v2 < 0)
      || (v2 = (*((__int64 (__fastcall **)(void **, GUID *, __int64))*v37 + 3))(
                 v37,
                 &GUID_5cdf2c82_841e_4546_9722_0cf74078229a,
                 1LL),
          v2 < 0)
      || (v2 = (*(__int64 (__fastcall **)(__int64, void ***))(*(_QWORD *)v36 + 120LL))(v36, &v35), v2 < 0)
      || !(_DWORD)v35 )
    {
      if ( v36 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
      if ( v37 )
        (*((void (__fastcall **)(void **))*v37 + 2))(v37);
      if ( ppv )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
      *((_DWORD *)v1 + 114) = GetTickCount();
      v6 = (double)(int)(*((_QWORD *)v1 + 54) / 10000LL) * ((double)*(int *)(*((_QWORD *)v1 + 12) + 4LL) / 1000.0);
      v7 = v6 / (double)*((int *)v1 + 30);
      v8 = 0LL;
      if ( v7 >= 9.223372036854776e18 )
      {
        v7 = v7 - 9.223372036854776e18;
        if ( v7 < 9.223372036854776e18 )
          v8 = 0x8000000000000000uLL;
      }
      v9 = (char *)(v8 + (unsigned int)(int)v7);
      ppv = v9;
      v10 = v6 / (double)*((int *)v1 + 60);
      v11 = 0LL;
      if ( v10 >= 9.223372036854776e18 )
      {
        v10 = v10 - 9.223372036854776e18;
        if ( v10 < 9.223372036854776e18 )
          v11 = 0x8000000000000000uLL;
      }
      v12 = v11 + (unsigned int)(int)v10;
      v26 = v12;
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        WPP_SF_q(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x38u,
          (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
          &v9[v12 + 1]);
      }
      ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v29, (struct _RTL_CRITICAL_SECTION *)((char *)v1 + 392));
      LODWORD(v36) = 0;
      for ( i = 0; ; ++i )
      {
        LODWORD(v35) = i;
        if ( i >= (unsigned __int64)ppv + v12 + 1 )
          break;
        v14 = (void **)operator new(0x20uLL);
        v15 = v14;
        if ( v14 )
          v14[3] = 0LL;
        else
          v15 = 0LL;
        v16 = v15;
        if ( v15 )
        {
          v17 = v36;
          *(_DWORD *)v15 = v36;
          LODWORD(v36) = v17 + 1;
          LODWORD(v37) = v17 + 1;
          *((_DWORD *)v15 + 2) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v15 + 3) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v15 + 1) = 0;
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
            v15 + 3,
            *((unsigned int *)v1 + 30) * *((_QWORD *)v1 + 55));
          if ( v15[3] )
          {
            v2 = 0;
            try
            {
              v16 = 0LL;
              v28 = 0LL;
              v27 = v15;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
                (__int64 *)v1 + 37,
                (__int64)&v27);
            }
            catch ( ATL::CAtlException *v32 )
            {
              v21 = v32;
              if ( *v32 == -1073741571 )
                _resetstkoflw();
              v1 = v34;
              v2 = *v21;
              LODWORD(v36) = (_DWORD)v37;
              v16 = v28;
            }
          }
          else
          {
            v2 = -2147024882;
            CMonitor::SampleDataBlock::`scalar deleting destructor'(v15);
          }
          i = (unsigned int)v35;
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v16 )
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v16);
        v12 = v26;
      }
      if ( v2 >= 0 )
      {
        v18 = (void **)operator new(0x20uLL);
        v19 = v18;
        if ( v18 )
          v18[3] = 0LL;
        else
          v19 = 0LL;
        v20 = v19;
        if ( v19 )
        {
          *(_DWORD *)v19 = v36;
          *((_DWORD *)v19 + 2) = *((_DWORD *)v1 + 30);
          *((_DWORD *)v19 + 3) = *((_DWORD *)v1 + 30);
          ATL::CHeapPtrBase<unsigned char,ATL::CCRTAllocator>::AllocateBytes(
            v19 + 3,
            *((unsigned int *)v1 + 30) * *((_QWORD *)v1 + 55));
          *((_DWORD *)v19 + 1) = 2;
          v19[2] = 0LL;
          if ( v19[3] )
          {
            v2 = 0;
            try
            {
              v20 = 0LL;
              v37 = 0LL;
              v35 = v19;
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddHead(
                (__int64 *)v1 + 43,
                (__int64)&v35);
            }
            catch ( ATL::CAtlException *v33 )
            {
              v22 = v33;
              if ( *(_DWORD *)v33 == -1073741571 )
                _resetstkoflw();
              LODWORD(v36) = *(_DWORD *)v22;
              v1 = v34;
              v2 = v36;
              v20 = v37;
            }
          }
          else
          {
            v2 = -2147024882;
            CMonitor::SampleDataBlock::`scalar deleting destructor'(v19);
          }
        }
        else
        {
          v2 = -2147024882;
        }
        if ( v20 )
          CMonitor::SampleDataBlock::`scalar deleting destructor'(v20);
      }
      if ( v30 )
        ATL::CCritSecLock::Unlock(&v29);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, CMonitor **))(**((_QWORD **)v1 + 22) + 48LL))(
               *((_QWORD *)v1 + 22),
               &v34);
        if ( v2 < 0 )
          goto LABEL_90;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void ***))(**((_QWORD **)v1 + 23) + 24LL))(
               *((_QWORD *)v1 + 23),
               (unsigned int)(*((_DWORD *)v1 + 60) - (_DWORD)v34),
               &v35);
        if ( v2 < 0 )
          goto LABEL_90;
        v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)v1 + 23) + 32LL))(
               *((_QWORD *)v1 + 23),
               (unsigned int)(*((_DWORD *)v1 + 60) - (_DWORD)v34),
               2LL);
        if ( v2 < 0 )
          goto LABEL_90;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x39u,
            (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
        }
        *((_DWORD *)v1 + 14) = 3;
        v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 9) + 80LL))(*((_QWORD *)v1 + 9));
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v1 + 22) + 80LL))(*((_QWORD *)v1 + 22)), v2 < 0) )
        {
LABEL_90:
          if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
              0x3Bu,
              (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
              v2);
          }
          CMonitor::Stop(v1);
        }
      }
      goto LABEL_93;
    }
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x37u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
    }
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    if ( v37 )
      (*((void (__fastcall **)(void **))*v37 + 2))(v37);
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
  if ( v25 )
    ATL::CCritSecLock::Unlock(&v24);
  return 1LL;
}
