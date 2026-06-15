/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18004609C
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180039428 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18006539C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180066A14 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180066A4C (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     Template_pxx @ 0x180099C54 (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x180099E44 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x1800AA008 (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x1800AA0B0 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // r14
  int v2; // ebx
  double v3; // xmm6_8
  unsigned __int64 v4; // r9
  int *v5; // r13
  double v6; // xmm7_8
  __int64 v7; // rcx
  double v8; // xmm0_8
  double v9; // xmm7_8
  __int64 v10; // r8
  double v11; // xmm0_8
  __int64 v12; // rax
  double v13; // xmm1_8
  unsigned int v14; // ecx
  int v15; // ecx
  ATL::CAtlException *v16; // rbx
  unsigned __int64 v17; // [rsp+30h] [rbp-B8h]
  LPCRITICAL_SECTION v18; // [rsp+50h] [rbp-98h] BYREF
  char v19; // [rsp+58h] [rbp-90h]
  unsigned __int64 v20; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v21; // [rsp+68h] [rbp-80h] BYREF
  int v22; // [rsp+70h] [rbp-78h] BYREF
  int *v23; // [rsp+78h] [rbp-70h] BYREF
  void *Src; // [rsp+80h] [rbp-68h] BYREF
  ATL::CAtlException *v25[7]; // [rsp+88h] [rbp-60h] BYREF
  CMonitor *v26; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+100h] [rbp+18h] BYREF
  int v29; // [rsp+108h] [rbp+20h] BYREF

  v26 = this;
  v25[1] = (ATL::CAtlException *)-2LL;
  v1 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v18, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v29);
  if ( v2 >= 0 )
  {
    v3 = DOUBLE_1_844674407370955e19;
    while ( v29 )
    {
      if ( !*((_QWORD *)v1 + 39) )
      {
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x22u,
            (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
            v29);
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, void **, CMonitor **, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               &Src,
               &v26,
               &v27,
               &v20);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                 *((_QWORD *)v1 + 10),
                 (unsigned int)v26);
          if ( v2 >= 0 )
          {
            AEWMILOG_GLITCH(v14, v1, 0xCu, v20, v28, (unsigned __int64)&v28, v17);
            if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
              Template_pxx(v15, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v20, v28);
            ShipAssert(90113LL, 1LL);
          }
        }
        break;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v22);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               &Src,
               &v27,
               &v28,
               &v21,
               &v20);
        if ( v2 >= 0 )
        {
          v5 = (int *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)v1 + 296);
          v23 = v5;
          v6 = (double)(int)v21;
          if ( (v21 & 0x8000000000000000uLL) != 0LL )
            v6 = v6 + v3;
          v7 = *((_QWORD *)v1 + 16);
          v8 = (double)(int)v7;
          if ( v7 < 0 )
            v8 = v8 + v3;
          v9 = v6 / v8;
          AEWMILOG_POSITION(*v5, v1, 5u, v4, *v5, v21, (unsigned int)v27);
          if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
          {
            WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v10, v5, v27, v28, v22, v21, *(_QWORD *)&v9, v20);
          }
          v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
                 *((_QWORD *)v1 + 11),
                 &v21,
                 &v20);
          if ( v2 >= 0 )
          {
            v11 = (double)(int)v21;
            if ( (v21 & 0x8000000000000000uLL) != 0LL )
              v11 = v11 + v3;
            v12 = *((_QWORD *)v1 + 16);
            v13 = (double)(int)v12;
            if ( v12 < 0 )
              v13 = v13 + v3;
            *((double *)v5 + 2) = v11 / v13;
            memcpy_0(*((void **)v5 + 3), Src, (unsigned int)v27 * *((_QWORD *)v1 + 55));
            v5[3] = v27;
            v5[1] = v28;
            try
            {
              ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
                (char *)v1 + 344,
                &v23);
            }
            catch ( ATL::CAtlException *v25 )
            {
              v16 = v25[0];
              if ( *(_DWORD *)v25[0] == -1073741571 )
                _resetstkoflw();
              LODWORD(v23) = *(_DWORD *)v16;
              v2 = (int)v23;
              if ( (int)v23 < 0 )
              {
                if ( v19 )
                  ATL::CCritSecLock::Unlock(&v18);
                v1 = v26;
                goto LABEL_43;
              }
              v1 = v26;
              v3 = DOUBLE_1_844674407370955e19;
            }
            v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                   *((_QWORD *)v1 + 10),
                   (unsigned int)v27);
            if ( v2 >= 0 )
            {
              v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 10) + 40LL))(
                     *((_QWORD *)v1 + 10),
                     &v29);
              if ( v2 >= 0 )
                continue;
            }
          }
        }
      }
      break;
    }
    if ( v19 )
      ATL::CCritSecLock::Unlock(&v18);
  }
  else if ( v19 )
  {
    ATL::CCritSecLock::Unlock(&v18);
  }
LABEL_43:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x23u,
        (__int64)&WPP_b190cc602318435bf1a291092083f9b6_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
