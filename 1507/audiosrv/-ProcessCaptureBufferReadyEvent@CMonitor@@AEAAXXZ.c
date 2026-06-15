/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B1CC
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180098EC4 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x180098D8C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180098E30 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18009BD50 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     Template_pxx @ 0x18009CD94 (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x18009CFD8 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x1800AC080 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x1800AC128 (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rsi
  int v2; // ebx
  double v3; // xmm6_8
  int *v4; // r15
  unsigned __int64 v5; // r9
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm1_8
  unsigned int v10; // ecx
  int v11; // ecx
  ATL::CAtlException *v12; // rbx
  unsigned __int64 v13; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v14; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp-90h] BYREF
  int *v16; // [rsp+60h] [rbp-88h] BYREF
  int v17; // [rsp+68h] [rbp-80h] BYREF
  void *Src; // [rsp+70h] [rbp-78h] BYREF
  LPCRITICAL_SECTION v19; // [rsp+78h] [rbp-70h] BYREF
  char v20; // [rsp+80h] [rbp-68h]
  ATL::CAtlException *v21[7]; // [rsp+88h] [rbp-60h] BYREF
  CMonitor *v22; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v23; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v24; // [rsp+100h] [rbp+18h] BYREF
  int v25; // [rsp+108h] [rbp+20h] BYREF

  v22 = this;
  v21[1] = (ATL::CAtlException *)-2LL;
  v1 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v19, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v25);
  if ( v2 < 0 )
  {
LABEL_32:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x23u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
  else
  {
    v3 = DOUBLE_1_844674407370955e19;
    while ( v25 )
    {
      if ( !*((_QWORD *)v1 + 39) )
      {
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            0x22u,
            (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
            v25);
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, void **, CMonitor **, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               &Src,
               &v22,
               &v23,
               &v14);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                 *((_QWORD *)v1 + 10),
                 (unsigned int)v22);
          if ( v2 >= 0 )
          {
            AEWMILOG_GLITCH(v10, v1, 0xCu, v14, v24, (unsigned __int64)&v24, v13);
            if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
              Template_pxx(v11, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v14, v24);
            ShipAssert(90113LL, 1LL);
            break;
          }
        }
        goto LABEL_32;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v17);
      if ( v2 < 0 )
        goto LABEL_32;
      v2 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
             *((_QWORD *)v1 + 10),
             &Src,
             &v23,
             &v24,
             &v15,
             &v14);
      if ( v2 < 0 )
        goto LABEL_32;
      v4 = (int *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)v1 + 296);
      v16 = v4;
      AEWMILOG_POSITION(*v4, v1, 5u, v5, *v4, v15, (unsigned int)v23);
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
      {
        LODWORD(v13) = v17;
        WPP_SF_qdDdigi(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 33LL, v6, v4, v23, v24);
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v15,
             &v14);
      if ( v2 < 0 )
        goto LABEL_32;
      v7 = (double)(int)v15;
      if ( (v15 & 0x8000000000000000uLL) != 0LL )
        v7 = v7 + v3;
      v8 = *((_QWORD *)v1 + 16);
      v9 = (double)(int)v8;
      if ( v8 < 0 )
        v9 = v9 + v3;
      *((double *)v4 + 2) = v7 / v9;
      memcpy_0(*((void **)v4 + 3), Src, (unsigned int)v23 * *((_QWORD *)v1 + 55));
      v4[3] = v23;
      v4[1] = v24;
      try
      {
        ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
          (__int64 *)v1 + 43,
          (__int64)&v16);
      }
      catch ( ATL::CAtlException *v21 )
      {
        v12 = v21[0];
        if ( *(_DWORD *)v21[0] == -1073741571 )
          _resetstkoflw();
        LODWORD(v16) = *(_DWORD *)v12;
        v2 = (int)v16;
        v1 = v22;
        if ( (int)v16 < 0 )
          goto LABEL_32;
        v3 = DOUBLE_1_844674407370955e19;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
             *((_QWORD *)v1 + 10),
             (unsigned int)v23);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v25);
        if ( v2 >= 0 )
          continue;
      }
      goto LABEL_32;
    }
  }
  if ( v20 )
    ATL::CCritSecLock::Unlock(&v19);
}
