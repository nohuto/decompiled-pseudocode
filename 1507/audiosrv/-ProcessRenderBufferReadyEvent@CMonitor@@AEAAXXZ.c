/*
 * XREFs of ?ProcessRenderBufferReadyEvent@CMonitor@@AEAAXXZ @ 0x18009B688
 * Callers:
 *     ?CaptureMonitorThread@CMonitor@@AEAAKXZ @ 0x180098EC4 (-CaptureMonitorThread@CMonitor@@AEAAKXZ.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qdd @ 0x18007C708 (WPP_SF_qdd.c)
 *     ?AbortMonitor@CMonitor@@AEAAXXZ @ 0x180098D8C (-AbortMonitor@CMonitor@@AEAAXXZ.c)
 *     ?AddTail@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAUSampleDataBlock@CMonitor@@@Z @ 0x180098E30 (-AddTail@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?GetHead@?$CAtlList@PEAUSampleDataBlock@CMonitor@@V?$CElementTraits@PEAUSampleDataBlock@CMonitor@@@ATL@@@ATL@@QEAAAEAPEAUSampleDataBlock@CMonitor@@XZ @ 0x180099080 (-GetHead@-$CAtlList@PEAUSampleDataBlock@CMonitor@@V-$CElementTraits@PEAUSampleDataBlock@CMonitor.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18009A164 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ?RemoveHead@?$CAtlList@PEAVCOnDeviceWorkItem@@V?$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@ATL@@QEAAPEAVCOnDeviceWorkItem@@XZ @ 0x18009BD50 (-RemoveHead@-$CAtlList@PEAVCOnDeviceWorkItem@@V-$CElementTraits@PEAVCOnDeviceWorkItem@@@ATL@@@AT.c)
 *     Template_pxx @ 0x18009CD94 (Template_pxx.c)
 *     WPP_SF_qdDdigi @ 0x18009CFD8 (WPP_SF_qdDdigi.c)
 *     ?AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z @ 0x1800AC080 (-AEWMILOG_GLITCH@@YAXKPEAXE_K111@Z.c)
 *     ?AEWMILOG_POSITION@@YAXKPEAXE_K111@Z @ 0x1800AC128 (-AEWMILOG_POSITION@@YAXKPEAXE_K111@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::ProcessRenderBufferReadyEvent(CMonitor *this)
{
  CMonitor *v1; // r14
  int v2; // eax
  unsigned int Data1; // ecx
  int v4; // ecx
  double v5; // xmm7_8
  unsigned int v6; // esi
  int *v7; // r13
  unsigned __int64 v8; // r9
  double v9; // xmm6_8
  __int64 v10; // rax
  double v11; // xmm0_8
  double v12; // xmm6_8
  double v13; // xmm8_8
  double v14; // xmm0_8
  __int64 v15; // rax
  double v16; // xmm1_8
  __int64 v17; // r8
  __int64 Head; // rdi
  _QWORD *v19; // rax
  ATL::CAtlException *v20; // rbx
  unsigned __int64 v21; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v22; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v23; // [rsp+30h] [rbp-C8h]
  __int64 v24; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A0h] BYREF
  void *v26[2]; // [rsp+60h] [rbp-98h] BYREF
  _BYTE v27[8]; // [rsp+70h] [rbp-88h] BYREF
  ATL::CAtlException *v28; // [rsp+78h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v29; // [rsp+80h] [rbp-78h] BYREF
  char v30; // [rsp+88h] [rbp-70h]
  int v32; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+110h] [rbp+18h] BYREF
  unsigned __int64 v34; // [rsp+118h] [rbp+20h] BYREF

  v26[1] = (void *)-2LL;
  v1 = this;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v29, (struct _RTL_CRITICAL_SECTION *)((char *)this + 392));
  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v32);
  if ( v2 < 0 )
    goto LABEL_43;
  if ( *((_QWORD *)v1 + 45) )
    goto LABEL_11;
  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
         *((_QWORD *)v1 + 24),
         &v34,
         &v33);
  if ( v2 < 0 )
  {
LABEL_43:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x27u,
        (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
        v2);
    }
    CMonitor::AbortMonitor(v1);
    goto LABEL_48;
  }
  Data1 = WPP_GLOBAL_Control.Data1;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x24u,
      (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids);
  }
  AEWMILOG_GLITCH(Data1, v1, 0xDu, v34, v33, v22, v23);
  if ( (Microsoft_Windows_AudioEnableBits & 0x100) != 0 )
    Template_pxx(v4, (unsigned int)&EVT_GLITCH_CM_RENDER, (_DWORD)v1, v34, v33);
  ShipAssert(90113LL, 0LL);
LABEL_11:
  v5 = DOUBLE_1_844674407370955e19;
  while ( *((_QWORD *)v1 + 45) )
  {
    v6 = *((_DWORD *)v1 + 60) - v32;
    if ( *(_DWORD *)(*(_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43)
                   + 12LL) > v6 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
      {
        Head = ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43);
        v19 = (_QWORD *)ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::GetHead((_QWORD *)v1 + 43);
        LODWORD(v22) = v6;
        LODWORD(v21) = *(_DWORD *)(*(_QWORD *)Head + 12LL);
        WPP_SF_qdd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0x26u,
          (__int64)&WPP_082d2a75d43eaef10a91d7b66e1bdbbb_Traceguids,
          *v19,
          v21,
          v22);
      }
      break;
    }
    v7 = (int *)ATL::CAtlList<COnDeviceWorkItem *,ATL::CElementTraits<COnDeviceWorkItem *>>::RemoveHead((char *)v1 + 344);
    v33 = (unsigned __int64)v7;
    v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64 *))(**((_QWORD **)v1 + 24) + 32LL))(
           *((_QWORD *)v1 + 24),
           &v34,
           &v25);
    if ( v2 < 0 )
      goto LABEL_43;
    v9 = (double)(int)v34;
    if ( (v34 & 0x8000000000000000uLL) != 0LL )
      v9 = v9 + v5;
    v10 = *((_QWORD *)v1 + 31);
    v11 = (double)(int)v10;
    if ( v10 < 0 )
      v11 = v11 + v5;
    v12 = v9 / v11;
    v13 = (double)*(int *)(*((_QWORD *)v1 + 12) + 4LL) * v12;
    if ( *((double *)v1 + 58) == 0.0 )
    {
      v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _BYTE *))(**((_QWORD **)v1 + 11) + 32LL))(
             *((_QWORD *)v1 + 11),
             &v24,
             v27);
      if ( v2 < 0 )
        goto LABEL_43;
      v14 = (double)(int)v24;
      if ( v24 < 0 )
        v14 = v14 + v5;
      v15 = *((_QWORD *)v1 + 16);
      v16 = (double)(int)v15;
      if ( v15 < 0 )
        v16 = v16 + v5;
      *((double *)v1 + 58) = v14 / v16 - *((double *)v7 + 2);
    }
    AEWMILOG_POSITION((int)v13, v1, 6u, v8, *v7, (unsigned int)(int)v13, v6);
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x800000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 5u )
    {
      WPP_SF_qdDdigi(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), 37LL, v17, v7, v7[3], v7[1]);
    }
    if ( COERCE_DOUBLE(COERCE_UNSIGNED_INT64((double)(int)GetTickCount() - (double)*((int *)v1 + 114)) & _xmm) > 30000.0 )
    {
      *((_DWORD *)v1 + 114) = GetTickCount();
      CMonitor::MeasureClockDrift(v1, *((double *)v7 + 2), v12);
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void **))(**((_QWORD **)v1 + 23) + 24LL))(
           *((_QWORD *)v1 + 23),
           (unsigned int)v7[3],
           v26);
    if ( v2 < 0 )
      goto LABEL_43;
    memcpy_0(v26[0], *((const void **)v7 + 3), (unsigned int)v7[3] * *((_QWORD *)v1 + 55));
    v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)v1 + 23) + 32LL))(
           *((_QWORD *)v1 + 23),
           (unsigned int)v7[3],
           v7[1] & 2);
    if ( v2 < 0 )
      goto LABEL_43;
    try
    {
      ATL::CAtlList<CMonitor::SampleDataBlock *,ATL::CElementTraits<CMonitor::SampleDataBlock *>>::AddTail(
        (__int64 *)v1 + 37,
        (__int64)&v33);
    }
    catch ( ATL::CAtlException *v28 )
    {
      v20 = v28;
      if ( *(_DWORD *)v28 == -1073741571 )
        _resetstkoflw();
      LODWORD(v33) = *(_DWORD *)v20;
      v2 = v33;
      v1 = this;
      if ( (v33 & 0x80000000) != 0LL )
        goto LABEL_43;
      v5 = DOUBLE_1_844674407370955e19;
    }
    v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)v1 + 22) + 48LL))(*((_QWORD *)v1 + 22), &v32);
    if ( v2 < 0 )
      goto LABEL_43;
  }
LABEL_48:
  if ( v30 )
    ATL::CCritSecLock::Unlock(&v29);
}
