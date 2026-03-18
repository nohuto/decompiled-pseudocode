/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x18006F0C8
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x18006F600 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?ProcessComposition@CComposition@@IEAAJPEA_N@Z @ 0x180095C70 (-ProcessComposition@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z @ 0x18006A88C (-RemoveDeviceFromTable@CD3DDeviceTable@@QEAAHPEAUID3D11Device1@@@Z.c)
 *     ?IsUpToDate@CDXGIEnumeration@@QEBA_NXZ @ 0x18006B81C (-IsUpToDate@CDXGIEnumeration@@QEBA_NXZ.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18006CB40 (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x18006EE64 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKKKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ?EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ @ 0x18006F828 (-EnsureDXGIEnumeration@CDisplayManager@@AEAAJXZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18006F924 (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?IsUpToDate@CDisplaySet@@QEBA_NXZ @ 0x1800700C0 (-IsUpToDate@CDisplaySet@@QEBA_NXZ.c)
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x180070238 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ @ 0x180071DF0 (-HandleDXGIEnumerationChange@CD3DDeviceManager@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800B3404 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38 (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1800B64F0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     Template_qqq @ 0x180101814 (Template_qqq.c)
 *     ?DestroyResources@CD3DDeviceTable@@QEAAXXZ @ 0x1801387D0 (-DestroyResources@CD3DDeviceTable@@QEAAXXZ.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        CDisplayManager *this,
        struct CDisplaySet **a2,
        enum DisplayStateComparison::Enum *a3,
        char a4)
{
  CDisplaySet *v4; // rsi
  CDisplaySet *v5; // rbx
  struct CDisplaySet *v7; // r13
  int v8; // r12d
  int i; // r15d
  char v10; // r14
  DWORD v11; // ecx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // r8
  const GUID *v15; // r9
  int AdapterPopulationUniqueness; // eax
  const struct CDXGIEnumeration *v17; // rdx
  CDisplayManager *v18; // rcx
  int v19; // eax
  int v20; // edx
  CDisplaySet *v21; // rcx
  bool IsUpToDate; // al
  __int64 v23; // rcx
  CDisplaySet *v24; // r14
  CD3DDeviceManager *v25; // rcx
  char v26; // r14
  char v27; // bl
  char v29; // al
  int v30; // eax
  __int64 v31; // rcx
  CDisplaySet *v32; // rcx
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // r8d
  HANDLE *v36; // rcx
  CDisplaySet *v37; // rcx
  CDisplaySet *v38; // rcx
  __int64 v39; // rdx
  _RTL_CRITICAL_SECTION *v40; // rcx
  UINT32 cData; // [rsp+20h] [rbp-E0h]
  bool v42; // [rsp+40h] [rbp-C0h] BYREF
  int v43; // [rsp+44h] [rbp-BCh] BYREF
  char v44; // [rsp+48h] [rbp-B8h]
  CDisplaySet *v45; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+58h] [rbp-A8h]
  unsigned int v47; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-9Ch] BYREF
  int v50; // [rsp+68h] [rbp-98h] BYREF
  ULONG v51; // [rsp+6Ch] [rbp-94h] BYREF
  int v52; // [rsp+70h] [rbp-90h] BYREF
  _RTL_CRITICAL_SECTION *v53; // [rsp+78h] [rbp-88h] BYREF
  CDisplayManager *v54; // [rsp+80h] [rbp-80h] BYREF
  enum DisplayStateComparison::Enum *v55; // [rsp+88h] [rbp-78h]
  CDisplayManager *v56; // [rsp+90h] [rbp-70h] BYREF
  struct CDisplaySet **v57; // [rsp+98h] [rbp-68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v59; // [rsp+C0h] [rbp-40h]
  __int64 v60; // [rsp+C8h] [rbp-38h]
  GUID *v61; // [rsp+D0h] [rbp-30h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  unsigned int *v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]
  char *v65; // [rsp+F0h] [rbp-10h]
  __int64 v66; // [rsp+F8h] [rbp-8h]
  unsigned int *v67; // [rsp+100h] [rbp+0h]
  __int64 v68; // [rsp+108h] [rbp+8h]
  ULONG *v69; // [rsp+110h] [rbp+10h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  unsigned int *v71; // [rsp+120h] [rbp+20h]
  __int64 v72; // [rsp+128h] [rbp+28h]
  char *v73; // [rsp+130h] [rbp+30h]
  __int64 v74; // [rsp+138h] [rbp+38h]
  int *v75; // [rsp+140h] [rbp+40h]
  __int64 v76; // [rsp+148h] [rbp+48h]
  int *v77; // [rsp+150h] [rbp+50h]
  __int64 v78; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR v79; // [rsp+160h] [rbp+60h] BYREF
  GUID *v80; // [rsp+180h] [rbp+80h]
  __int64 v81; // [rsp+188h] [rbp+88h]

  v4 = 0LL;
  v44 = a4;
  v5 = 0LL;
  v55 = a3;
  v45 = 0LL;
  v57 = a2;
  v7 = 0LL;
  v43 = 0;
  v8 = 0;
  LOBYTE(v46) = 0;
  do
  {
    for ( i = (int)v4; i < 10; ++i )
    {
      v42 = (char)v4;
      v10 = (char)v4;
      v11 = 10 * i * i;
      if ( v11 )
        Sleep(v11);
      v12 = CDisplayManager::EnsureDXGIEnumeration(this);
      v43 = v12;
      if ( v12 == -2003304291 )
      {
        v43 = -2003304442;
        v8 = 4;
        if ( v5 )
        {
          CDisplaySet::Release(v5);
          v5 = v4;
          v45 = v4;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qqq(v13, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, (char)v4);
      }
      else
      {
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x199u);
          goto LABEL_34;
        }
        v49 = *((_DWORD *)this + 25);
        v47 = *((_DWORD *)this + 26);
        v48 = GdiEntry13();
        AdapterPopulationUniqueness = DrvQueryAdapterPopulationUniqueness();
        v17 = (const struct CDXGIEnumeration *)*((_QWORD *)this + 9);
        v50 = AdapterPopulationUniqueness;
        v43 = CDisplayManager::CreateNewDisplaySet(v18, v17, v48, v49, cData, v47, &v42, &v45);
        v51 = GdiEntry13();
        v19 = DrvQueryAdapterPopulationUniqueness();
        v20 = v43;
        v52 = v19;
        if ( v43 == -2003304291 || v43 == -2003304442 )
          goto LABEL_45;
        if ( v49 != *((_DWORD *)this + 25) || v48 != v51 || v47 != *((_DWORD *)this + 26) || v50 != v52 )
        {
          v20 = v43;
LABEL_45:
          if ( dword_18019E8C0 > 5u
            && ((v14 = 0x400000000000LL, (qword_18019E8D0 & 0x400000000000LL) == 0)
             || (qword_18019E8D8 & 0x400000000000LL) != qword_18019E8D8
              ? (v13 = 0, v29 = 0)
              : (v29 = 1),
                v29) )
          {
            v73 = (char *)this + 104;
            v59 = &v43;
            v4 = 0LL;
            v60 = 4LL;
            v61 = &gDwmCoreTelemetryActivityId;
            v63 = &v49;
            v67 = &v48;
            v69 = &v51;
            v71 = &v47;
            v75 = &v50;
            v77 = &v52;
            v62 = 16LL;
            v64 = 4LL;
            v65 = (char *)this + 100;
            v66 = 4LL;
            v68 = 4LL;
            v70 = 4LL;
            v72 = 4LL;
            v74 = 4LL;
            v76 = 4LL;
            v78 = 4LL;
            TlgWrite(
              (TraceLoggingHProvider)&dword_18019E8C0,
              &unk_18017DE47,
              (LPCGUID)0x400000000000LL,
              v15,
              0xCu,
              &pData);
            v20 = v43;
          }
          else
          {
            v4 = 0LL;
          }
          if ( v20 == -2003304291 )
          {
            v56 = this;
            EnterCriticalSection((LPCRITICAL_SECTION)this);
            v30 = (unsigned __int8)v46;
            v8 = 4;
            if ( *((_QWORD *)this + 9) )
              v30 = 1;
            v31 = *((_QWORD *)this + 7);
            v46 = v30;
            CDisplaySet::LogTelemetry(v31, 0LL, 4LL);
            v4 = (CDisplaySet *)*((_QWORD *)this + 9);
            if ( v4 )
            {
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 9));
              v4 = 0LL;
              *((_QWORD *)this + 9) = 0LL;
            }
            v32 = (CDisplaySet *)*((_QWORD *)this + 7);
            if ( v32 )
            {
              CDisplaySet::Release(v32);
              *((_QWORD *)this + 7) = v4;
            }
            v43 = -2003304442;
            CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v56);
          }
          v5 = v45;
          if ( v45 )
          {
            CDisplaySet::Release(v45);
            v5 = v4;
            v45 = v4;
          }
          v10 = v42;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v13, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v42);
          continue;
        }
        v10 = v42;
        v4 = 0LL;
        if ( v42 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v13, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v42);
          v5 = v45;
        }
        else
        {
          if ( v43 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x202u);
            v5 = v45;
            goto LABEL_34;
          }
          if ( i > 0 && (_BYTE)v46 && !v55 )
            v8 = 0;
          v54 = this;
          EnterCriticalSection((LPCRITICAL_SECTION)this);
          v21 = (CDisplaySet *)*((_QWORD *)this + 7);
          if ( v21 && CDisplaySet::IsUpToDate(v21) )
            LOBYTE(v4) = 1;
          v5 = v45;
          IsUpToDate = CDisplaySet::IsUpToDate(v45);
          if ( (_BYTE)v4 || IsUpToDate )
          {
            v24 = (CDisplaySet *)*((_QWORD *)this + 7);
            if ( !v24 )
              goto LABEL_26;
            if ( (_BYTE)v4 )
            {
LABEL_27:
              LOBYTE(v4) = 0;
              if ( v5 )
                CDisplaySet::Release(v5);
              v5 = (CDisplaySet *)*((_QWORD *)this + 7);
              v45 = v5;
              if ( v5 )
              {
                _InterlockedAdd((volatile signed __int32 *)v5, 1u);
                v5 = v45;
              }
            }
            else
            {
              LOBYTE(v4) = 0;
              if ( CDisplaySet::IsEquivalentTo(*((CDisplaySet **)this + 7), v5, 1) )
                goto LABEL_24;
              if ( CDisplaySet::IsEquivalentTo(v24, v5, 0)
                || (v37 = (CDisplaySet *)*((_QWORD *)this + 8)) != 0LL && CDisplaySet::IsEquivalentTo(v37, v5, 0) )
              {
                v8 = 2;
LABEL_24:
                LOBYTE(v4) = 1;
LABEL_25:
                v23 = *((_QWORD *)this + 7);
                *(_DWORD *)(v23 + 4) = *((_DWORD *)v5 + 1);
                *(_DWORD *)(v23 + 8) = *((_DWORD *)v5 + 2);
                *(_BYTE *)(v23 + 544) = *((_BYTE *)v5 + 544);
LABEL_26:
                if ( (_BYTE)v4 )
                  goto LABEL_27;
                LOBYTE(v4) = 0;
              }
              else if ( CDisplaySet::IsEquivalentRotated(v24, v5) )
              {
                v38 = (CDisplaySet *)*((_QWORD *)this + 8);
                if ( v38 )
                  CDisplaySet::Release(v38);
                *((_QWORD *)this + 8) = v5;
                if ( v5 )
                {
                  _InterlockedAdd((volatile signed __int32 *)v5, 1u);
                  v5 = v45;
                }
                LOBYTE(v4) = 1;
                v8 = 1;
                goto LABEL_25;
              }
              v7 = (struct CDisplaySet *)*((_QWORD *)this + 7);
              *((_QWORD *)this + 7) = v5;
              if ( v5 )
              {
                _InterlockedAdd((volatile signed __int32 *)v5, 1u);
                v5 = v45;
              }
              if ( !v8 )
              {
                if ( v7 )
                {
                  v8 = 3;
                  CDisplaySet::LogTelemetry(v7, *((_QWORD *)this + 7), 3LL);
                  if ( v44 )
                    CDisplayManager::CombineNewAndOldDisplaySets((CDisplayManager *)v23, v5, v7);
                }
              }
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_qqq(v23, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 1, i, 0);
            CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v54);
            goto LABEL_34;
          }
          v4 = 0LL;
          if ( v5 )
          {
            CDisplaySet::Release(v5);
            v5 = 0LL;
            v45 = 0LL;
          }
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            Template_qqq(v23, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, 0);
          CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v54);
        }
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqq(v13, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v10);
  }
  while ( v10 );
  if ( dword_18019E8C0 > 5u
    && (qword_18019E8D0 & 0x400000000000LL) != 0
    && (qword_18019E8D8 & 0x400000000000LL) == qword_18019E8D8 )
  {
    v81 = 16LL;
    v80 = &gDwmCoreTelemetryActivityId;
    TlgWrite((TraceLoggingHProvider)&dword_18019E8C0, &unk_18017DE0C, (LPCGUID)v14, v15, 3u, &v79);
  }
  v43 = -2003304442;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x2A3u);
LABEL_34:
  if ( v55 )
    *(_DWORD *)v55 = v8;
  *v57 = v5;
  if ( v7 )
    CDisplaySet::Release(v7);
  v26 = v46;
  if ( (_BYTE)v46
    || ((v53 = &stru_1801A3D88, EnterCriticalSection(&stru_1801A3D88), !qword_1801A3DB8)
     || !CDXGIEnumeration::IsUpToDate(qword_1801A3DB8)
      ? (v27 = (char)v4)
      : (v27 = 1),
        CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v53),
        !v27) )
  {
    CD3DDeviceManager::HandleDXGIEnumerationChange(v25);
    v33 = *((_QWORD *)this + 9);
    v34 = 0LL;
    if ( v33 )
    {
      v35 = dword_1801A3A48;
      if ( dword_1801A3A48 )
      {
        do
        {
          v39 = 0LL;
          v40 = *(_RTL_CRITICAL_SECTION **)(304LL * (unsigned int)v34 + xmmword_1801A3A30 + 296);
          v53 = v40;
          if ( *(_DWORD *)(v33 + 88) )
          {
            while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v33 + 64) + 8 * v39) + 336LL) != __PAIR64__(
                                                                                           HIDWORD(v53),
                                                                                           (unsigned int)v40) )
            {
              v39 = (unsigned int)(v39 + 1);
              if ( (unsigned int)v39 >= *(_DWORD *)(v33 + 88) )
                goto LABEL_123;
            }
            v34 = (unsigned int)(v34 + 1);
          }
          else
          {
LABEL_123:
            CD3DDeviceTable::RemoveDeviceFromTable(
              (CD3DDeviceTable *)&g_deviceTable,
              *(struct ID3D11Device1 **)(xmmword_1801A3A70 + 8 * v34));
            v35 = dword_1801A3A48;
          }
        }
        while ( (unsigned int)v34 < v35 );
      }
    }
    else
    {
      CD3DDeviceTable::DestroyResources((CD3DDeviceTable *)&g_deviceTable);
    }
    if ( v26 )
    {
      v36 = (HANDLE *)*((_QWORD *)this + 11);
      if ( v36 )
        CSurfaceManager::ResetTokenThread(v36);
    }
  }
  return (unsigned int)v43;
}
