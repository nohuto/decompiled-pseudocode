/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800545A4
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x180054A68 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x1800694E0 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x1800945D0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x1800543E8 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x180054BCC (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800554C0 (-IsUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180055628 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x1800557B8 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x1800563AC (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1800636A0 (_TlgWrite.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180087CD4 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x18008CECC (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18008D63C (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x18008DFB0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180090F80 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z @ 0x180091B48 (-SynchronizeValidAdapters@CD3DDeviceTable@@QEAAXPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     Template_qqq @ 0x1800E3DE4 (Template_qqq.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        CDisplayManager *this,
        struct CDisplaySet **a2,
        enum DisplayStateComparison::Enum *a3,
        char a4)
{
  CDisplaySet *v5; // rbx
  char v6; // r14
  int v7; // r13d
  int i; // r12d
  char v9; // r15
  DWORD v10; // ecx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // r8
  const GUID *v14; // r9
  CDisplaySet *v15; // r15
  int AdapterPopulationUniqueness; // eax
  const struct CDXGIEnumeration *v17; // rdx
  CDisplayManager *v18; // rcx
  int v19; // eax
  int v20; // edx
  struct CDisplaySet *v21; // rsi
  CDisplaySet *v22; // rcx
  bool IsUpToDate; // al
  __int64 v24; // rcx
  CD3DDeviceManager *v25; // rcx
  char v26; // bl
  CDisplaySet *v28; // rcx
  bool IsEquivalentRotated; // al
  CSurfaceManager *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rsi
  CDisplaySet *v34; // rcx
  char v35; // al
  CDisplaySet *v36; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  bool v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  char v40; // [rsp+48h] [rbp-B8h]
  CDisplaySet *v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+58h] [rbp-A8h]
  unsigned int v43; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v45; // [rsp+64h] [rbp-9Ch] BYREF
  int v46; // [rsp+68h] [rbp-98h] BYREF
  int v47; // [rsp+6Ch] [rbp-94h] BYREF
  ULONG v48; // [rsp+70h] [rbp-90h] BYREF
  CDisplaySet *v49; // [rsp+78h] [rbp-88h]
  enum DisplayStateComparison::Enum *v50; // [rsp+80h] [rbp-80h]
  struct _RTL_CRITICAL_SECTION *v51; // [rsp+88h] [rbp-78h] BYREF
  struct CDisplaySet **v52; // [rsp+90h] [rbp-70h]
  struct _RTL_CRITICAL_SECTION *v53; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_CRITICAL_SECTION *v54; // [rsp+A0h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  GUID *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  unsigned int *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  char *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  unsigned int *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  ULONG *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  unsigned int *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char *v70; // [rsp+140h] [rbp+40h]
  __int64 v71; // [rsp+148h] [rbp+48h]
  int *v72; // [rsp+150h] [rbp+50h]
  __int64 v73; // [rsp+158h] [rbp+58h]
  int *v74; // [rsp+160h] [rbp+60h]
  __int64 v75; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR v76; // [rsp+170h] [rbp+70h] BYREF
  GUID *v77; // [rsp+190h] [rbp+90h]
  __int64 v78; // [rsp+198h] [rbp+98h]

  v40 = a4;
  v50 = a3;
  v52 = a2;
  v39 = 0;
  v5 = 0LL;
  v6 = 1;
  v41 = 0LL;
  v49 = 0LL;
  v7 = 0;
  LOBYTE(v42) = 0;
  do
  {
    for ( i = 0; i < 10; ++i )
    {
      v38 = 0;
      v9 = 0;
      v10 = 10 * i * i;
      if ( v10 )
        Sleep(v10);
      v11 = CDisplayManager::EnsureDXGIEnumeration(this);
      v39 = v11;
      if ( v11 == -2003304291 )
      {
        v39 = -2003304442;
        v7 = 4;
        if ( v5 )
        {
          CDisplaySet::Release(v5);
          v5 = 0LL;
          v41 = 0LL;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, 0);
      }
      else
      {
        LOBYTE(v15) = 0;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x199u);
          v21 = 0LL;
          goto LABEL_34;
        }
        v45 = *((_DWORD *)this + 25);
        v43 = *((_DWORD *)this + 26);
        v44 = GdiEntry13();
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        v17 = (const struct CDXGIEnumeration *)*((_QWORD *)this + 9);
        v47 = AdapterPopulationUniqueness;
        v39 = CDisplayManager::CreateNewDisplaySet(v18, v17, v44, v45, cData, v43, &v38, &v41);
        v48 = GdiEntry13();
        v19 = DrvQueryAdapterPopulationUniqueness();
        v20 = v39;
        v46 = v19;
        if ( v39 == -2003304291 || v39 == -2003304442 )
          goto LABEL_56;
        if ( v45 != *((_DWORD *)this + 25) || v44 != v48 || v43 != *((_DWORD *)this + 26) || v47 != v46 )
        {
          v20 = v39;
LABEL_56:
          if ( dword_180190A30 > 5u )
          {
            v13 = 0x400000000000LL;
            if ( (qword_180190A40 & 0x400000000000LL) == 0
              || (v35 = 1, (qword_180190A48 & 0x400000000000LL) != qword_180190A48) )
            {
              v35 = 0;
            }
            if ( v35 )
            {
              v57 = 4LL;
              v56 = &v39;
              v58 = &gDwmCoreTelemetryActivityId;
              v60 = &v45;
              v64 = &v44;
              v66 = &v48;
              v68 = &v43;
              v72 = &v47;
              v74 = &v46;
              v59 = 16LL;
              v61 = 4LL;
              v62 = (char *)this + 100;
              v63 = 4LL;
              v65 = 4LL;
              v67 = 4LL;
              v69 = 4LL;
              v70 = (char *)this + 104;
              v71 = 4LL;
              v73 = 4LL;
              v75 = 4LL;
              TlgWrite(
                (TraceLoggingHProvider)&dword_180190A30,
                &unk_18016EC5B,
                (LPCGUID)0x400000000000LL,
                v14,
                0xCu,
                &pData);
              v20 = v39;
            }
          }
          if ( v20 == -2003304291 )
          {
            v54 = (struct _RTL_CRITICAL_SECTION *)this;
            EnterCriticalSection((LPCRITICAL_SECTION)this);
            v31 = *((_QWORD *)this + 7);
            v32 = (unsigned __int8)v42;
            if ( *((_QWORD *)this + 9) )
              v32 = 1;
            v42 = v32;
            v7 = 4;
            CDisplaySet::LogTelemetry(v31, 0LL, 4LL);
            v33 = *((_QWORD *)this + 9);
            if ( v33 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v33 + 8LL))(*((_QWORD *)this + 9));
              *((_QWORD *)this + 9) = 0LL;
            }
            v34 = (CDisplaySet *)*((_QWORD *)this + 7);
            if ( v34 )
            {
              CDisplaySet::Release(v34);
              *((_QWORD *)this + 7) = 0LL;
            }
            v39 = -2003304442;
            CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v54);
          }
          v5 = v41;
          if ( v41 )
          {
            CDisplaySet::Release(v41);
            v5 = 0LL;
            v41 = 0LL;
          }
          v9 = v38;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v38);
          continue;
        }
        v9 = v38;
        v21 = 0LL;
        if ( v38 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v38);
          v5 = v41;
        }
        else
        {
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x202u);
            v5 = v41;
            LOBYTE(v15) = 0;
            goto LABEL_34;
          }
          if ( i > 0 && (_BYTE)v42 && !v50 )
            v7 = 0;
          v51 = (struct _RTL_CRITICAL_SECTION *)this;
          EnterCriticalSection((LPCRITICAL_SECTION)this);
          v22 = (CDisplaySet *)*((_QWORD *)this + 7);
          if ( v22 && CDisplaySet::IsUpToDate(v22) )
            LOBYTE(v21) = 1;
          v5 = v41;
          IsUpToDate = CDisplaySet::IsUpToDate(v41);
          if ( (_BYTE)v21 || IsUpToDate )
          {
            v15 = (CDisplaySet *)*((_QWORD *)this + 7);
            if ( !v15 )
              goto LABEL_26;
            if ( (_BYTE)v21 )
            {
              LOBYTE(v15) = 0;
              goto LABEL_27;
            }
            if ( CDisplaySet::IsEquivalentTo(*((CDisplaySet **)this + 7), v5, 1) )
              goto LABEL_24;
            if ( CDisplaySet::IsEquivalentTo(v15, v5, 0)
              || (v28 = (CDisplaySet *)*((_QWORD *)this + 8)) != 0LL && CDisplaySet::IsEquivalentTo(v28, v5, 0) )
            {
              v7 = 2;
LABEL_24:
              LOBYTE(v15) = 0;
LABEL_25:
              LOBYTE(v21) = 1;
              v24 = *((_QWORD *)this + 7);
              *(_DWORD *)(v24 + 4) = *((_DWORD *)v5 + 1);
              *(_DWORD *)(v24 + 8) = *((_DWORD *)v5 + 2);
              *(_BYTE *)(v24 + 544) = *((_BYTE *)v5 + 544);
LABEL_26:
              if ( (_BYTE)v21 )
              {
LABEL_27:
                if ( v5 )
                  CDisplaySet::Release(v5);
                v5 = (CDisplaySet *)*((_QWORD *)this + 7);
                v21 = v49;
                v41 = v5;
                if ( v5 )
                {
                  _InterlockedAdd((volatile signed __int32 *)v5, 1u);
                  v5 = v41;
                }
LABEL_31:
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  Template_qqq(v24, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 1, i, (char)v15);
                CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v51);
                goto LABEL_34;
              }
            }
            else
            {
              IsEquivalentRotated = CDisplaySet::IsEquivalentRotated(v15, v5);
              LOBYTE(v15) = 0;
              if ( IsEquivalentRotated )
              {
                v36 = (CDisplaySet *)*((_QWORD *)this + 8);
                if ( v36 )
                  CDisplaySet::Release(v36);
                *((_QWORD *)this + 8) = v5;
                if ( v5 )
                {
                  _InterlockedAdd((volatile signed __int32 *)v5, 1u);
                  v5 = v41;
                }
                v7 = 1;
                goto LABEL_25;
              }
            }
            v21 = (struct CDisplaySet *)*((_QWORD *)this + 7);
            *((_QWORD *)this + 7) = v5;
            if ( v5 )
            {
              _InterlockedAdd((volatile signed __int32 *)v5, 1u);
              v5 = v41;
            }
            if ( !v7 )
            {
              if ( v21 )
              {
                v7 = 3;
                CDisplaySet::LogTelemetry(v21, *((_QWORD *)this + 7), 3LL);
                if ( v40 != (_BYTE)v15 )
                  CDisplayManager::CombineNewAndOldDisplaySets((CDisplayManager *)v24, v5, v21);
              }
            }
            goto LABEL_31;
          }
          if ( v5 )
          {
            CDisplaySet::Release(v5);
            v5 = 0LL;
            v41 = 0LL;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v24, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, 0);
          CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v51);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v9);
  }
  while ( v9 );
  if ( dword_180190A30 > 5u && (qword_180190A40 & 0x400000000000LL) != 0 )
  {
    LOBYTE(v15) = 0;
    if ( (qword_180190A48 & 0x400000000000LL) == qword_180190A48 )
    {
      v78 = 16LL;
      v77 = &gDwmCoreTelemetryActivityId;
      TlgWrite((TraceLoggingHProvider)&dword_180190A30, &unk_18016EC20, (LPCGUID)v13, v14, 3u, &v76);
    }
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  v39 = -2003304442;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x2A3u);
  v21 = v49;
LABEL_34:
  if ( v50 )
    *(_DWORD *)v50 = v7;
  *v52 = v5;
  if ( v21 )
    CDisplaySet::Release(v21);
  v26 = v42;
  if ( (_BYTE)v42 )
    goto LABEL_52;
  v53 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  if ( !qword_180195DD0 || !CDXGIEnumeration::IsUpToDate(qword_180195DD0) )
    v6 = (char)v15;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v53);
  if ( !v6 )
  {
LABEL_52:
    CD3DDeviceManager::HandleDXGIEnumerationChange(v25);
    CD3DDeviceTable::SynchronizeValidAdapters(
      (CD3DDeviceTable *)&g_deviceTable,
      *((struct CDXGIEnumeration **)this + 9));
    if ( v26 )
    {
      v30 = (CSurfaceManager *)*((_QWORD *)this + 11);
      if ( v30 )
        CSurfaceManager::ResetTokenThread(v30);
    }
  }
  return (unsigned int)v39;
}
