/*
 * XREFs of ?ProcessCaptureBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x180035130
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180028D7C (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x18004F908 (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x18005120C (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x180051244 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     Template_pxx @ 0x1800824A4 (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x180082694 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z @ 0x180090008 (-AEWMILOG_POSITION@@YAXKPEAXEE_K111@Z.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z @ 0x180090180 (-AEWMILOG_GLITCH@@YAXKPEAXEE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessCaptureBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // rdi
  int v2; // esi
  double v3; // xmm6_8
  int *v4; // r15
  unsigned __int8 v5; // r8
  __int64 v6; // r8
  double v7; // xmm0_8
  __int64 v8; // rax
  double v9; // xmm1_8
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  int v12; // ecx
  ATL::CAtlException *v13; // rbx
  unsigned __int64 v14; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v15; // [rsp+38h] [rbp-B0h]
  LPCRITICAL_SECTION v16; // [rsp+50h] [rbp-98h] BYREF
  char v17; // [rsp+58h] [rbp-90h]
  unsigned __int64 v18; // [rsp+60h] [rbp-88h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-80h] BYREF
  int v20; // [rsp+70h] [rbp-78h] BYREF
  int *v21; // [rsp+78h] [rbp-70h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-68h] BYREF
  ATL::CAtlException *v23; // [rsp+90h] [rbp-58h] BYREF
  CMonitor *v24; // [rsp+F0h] [rbp+8h] BYREF
  unsigned __int64 v25; // [rsp+F8h] [rbp+10h] BYREF
  unsigned __int64 v26; // [rsp+100h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+108h] [rbp+20h] BYREF

  v24 = this;
  Src[1] = (void *)-2LL;
  v1 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v16, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v1 + 10) + 40LL))(*((_QWORD *)v1 + 10), &v27);
  if ( v2 >= 0 )
  {
    v3 = DOUBLE_1_844674407370955e19;
    while ( 1 )
    {
      if ( !v27 )
        goto LABEL_4;
      if ( !*((_QWORD *)v1 + 39) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 34LL, &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids, v27);
        }
        v2 = (*(__int64 (__fastcall **)(_QWORD, void **, CMonitor **, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10) + 24LL))(
               *((_QWORD *)v1 + 10),
               Src,
               &v24,
               &v25,
               &v18,
               &v26);
        if ( v2 >= 0 )
        {
          v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
                 *((_QWORD *)v1 + 10),
                 (unsigned int)v24);
          if ( v2 >= 0 )
          {
            AEWMILOG_GLITCH(v10, v1, v11, 0xCu, v18, v26, v14, v15);
            if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
              Template_pxx(v12, (unsigned int)&EVT_GLITCH_CM_CAPTURE, (_DWORD)v1, v18, v26);
            ShipAssert(90113LL, 1LL);
          }
        }
LABEL_4:
        if ( v17 )
          ATL::CCritSecLock::Unlock(&v16);
        goto LABEL_6;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 9) + 48LL))(*((_QWORD *)v1 + 9), &v20);
      if ( v2 < 0 )
        goto LABEL_4;
      v2 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 10)
                                                                                              + 24LL))(
             *((_QWORD *)v1 + 10),
             Src,
             &v25,
             &v26);
      if ( v2 < 0 )
        goto LABEL_4;
      v4 = (int *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)v1 + 296);
      v21 = v4;
      AEWMILOG_POSITION(*v4, v1, v5, 5u, (unsigned __int64)&v19, *v4, v19, (unsigned int)v25);
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        v15 = v19;
        LODWORD(v14) = v20;
        WPP_SF_qdDdigi(*((_QWORD *)WPP_GLOBAL_Control + 2), 33LL, v6, v4);
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v19,
             &v18);
      if ( v2 < 0 )
        goto LABEL_4;
      v7 = (double)(int)v19;
      if ( (v19 & 0x8000000000000000uLL) != 0LL )
        v7 = v7 + v3;
      v8 = *((_QWORD *)v1 + 16);
      v9 = (double)(int)v8;
      if ( v8 < 0 )
        v9 = v9 + v3;
      *((double *)v4 + 2) = v7 / v9;
      memcpy_0(*((void **)v4 + 3), Src[0], (unsigned int)v25 * *((_QWORD *)v1 + 55));
      v4[3] = v25;
      v4[1] = v26;
      try
      {
        ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
          (char *)v1 + 344,
          &v21);
      }
      catch ( ATL::CAtlException *v23 )
      {
        v13 = v23;
        if ( *(_DWORD *)v23 == -1073741571 )
          o__resetstkoflw_0();
        LODWORD(v21) = *(_DWORD *)v13;
        v2 = (int)v21;
        if ( (int)v21 < 0 )
        {
          if ( v17 )
            ATL::CCritSecLock::Unlock(&v16);
          v1 = v24;
          goto LABEL_6;
        }
        v1 = v24;
        v3 = DOUBLE_1_844674407370955e19;
      }
      v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v1 + 10) + 32LL))(
             *((_QWORD *)v1 + 10),
             (unsigned int)v25);
      if ( v2 >= 0 )
      {
        v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)v1 + 10) + 40LL))(
               *((_QWORD *)v1 + 10),
               &v27);
        if ( v2 >= 0 )
          continue;
      }
      goto LABEL_4;
    }
  }
  if ( v17 )
    ATL::CCritSecLock::Unlock(&v16);
LABEL_6:
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        35LL,
        &WPP_bd0193786e9e34b543d459a2183e6794_Traceguids,
        (unsigned int)v2);
    }
    CMonitor::AbortMonitor(v1);
  }
}
