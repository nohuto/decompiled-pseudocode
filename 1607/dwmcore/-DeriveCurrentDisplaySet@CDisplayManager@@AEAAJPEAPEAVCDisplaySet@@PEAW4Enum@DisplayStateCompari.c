/*
 * XREFs of ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4
 * Callers:
 *     ?GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z @ 0x1800384B8 (-GetCurrentDisplaySetInternal@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@@Z.c)
 *     ?UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z @ 0x1800389C8 (-UpdateDisplayState@CDisplayManager@@QEAAJ_N0PEA_NPEAW4Enum@DisplayStateComparison@@@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x180045FB0 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z @ 0x1800363E8 (-IsEquivalentTo@CDisplaySet@@AEBA_NPEBV1@_N@Z.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z @ 0x180038134 (-CreateNewDisplaySet@CDisplayManager@@AEAAJPEBVCDXGIEnumeration@@KKPEA_NPEAPEAVCDisplaySet@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A936C (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     Template_qqq @ 0x18011718C (Template_qqq.c)
 *     ?CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z @ 0x1801617C0 (-CombineNewAndOldDisplaySets@CDisplayManager@@AEAAJPEAVCDisplaySet@@0@Z.c)
 */

__int64 __fastcall CDisplayManager::DeriveCurrentDisplaySet(
        LPCRITICAL_SECTION lpCriticalSection,
        struct CDisplaySet **a2,
        enum DisplayStateComparison::Enum *a3,
        char a4)
{
  unsigned int *p_RecursionCount; // r12
  CDisplaySet *v5; // r14
  int i; // r15d
  ULONG v9; // eax
  const struct CDXGIEnumeration *LockSemaphore; // rdx
  __int64 v11; // rdx
  int v12; // ecx
  const GUID *v13; // r8
  const GUID *v14; // r9
  char v15; // di
  CDisplayManager *v16; // rcx
  CDisplaySet *OwningThread; // rdi
  CDisplaySet *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  char v24; // al
  HANDLE v25; // rdx
  bool v26; // [rsp+30h] [rbp-D0h] BYREF
  char v27; // [rsp+31h] [rbp-CFh]
  int v28; // [rsp+34h] [rbp-CCh] BYREF
  struct CDisplaySet *v29; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  ULONG v31; // [rsp+44h] [rbp-BCh] BYREF
  ULONG v32; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+4Ch] [rbp-B4h]
  LPCRITICAL_SECTION v34; // [rsp+50h] [rbp-B0h] BYREF
  struct CDisplaySet **v35; // [rsp+58h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp-A0h] BYREF
  int *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  GUID *v39; // [rsp+90h] [rbp-70h]
  __int64 v40; // [rsp+98h] [rbp-68h]
  unsigned int *v41; // [rsp+A0h] [rbp-60h]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  unsigned int *v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  ULONG *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  ULONG *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+E0h] [rbp-20h] BYREF
  GUID *v50; // [rsp+100h] [rbp+0h]
  int v51; // [rsp+108h] [rbp+8h]
  int v52; // [rsp+10Ch] [rbp+Ch]

  v27 = a4;
  v28 = 0;
  p_RecursionCount = (unsigned int *)&lpCriticalSection[2].RecursionCount;
  v29 = 0LL;
  v5 = 0LL;
  v26 = 0;
  v33 = 0;
  v35 = a2;
  do
  {
    for ( i = 0; i < 10; ++i )
    {
      v30 = *p_RecursionCount;
      v9 = GdiEntry13();
      LockSemaphore = (const struct CDXGIEnumeration *)lpCriticalSection[1].LockSemaphore;
      v31 = v9;
      v28 = CDisplayManager::CreateNewDisplaySet((CDisplayManager *)&v26, LockSemaphore, v9, v30, &v26, &v29);
      v32 = GdiEntry13();
      if ( v28 != -2003304442 && v30 == *p_RecursionCount && v31 == v32 )
      {
        v15 = v26;
        if ( !v26 )
        {
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x23Au);
            v18 = v29;
          }
          else
          {
            v34 = lpCriticalSection;
            EnterCriticalSection(lpCriticalSection);
            OwningThread = (CDisplaySet *)lpCriticalSection[1].OwningThread;
            v18 = v29;
            if ( OwningThread && CDisplaySet::IsEquivalentTo((CDisplaySet *)lpCriticalSection[1].OwningThread, v29) )
            {
              *((_DWORD *)OwningThread + 1) = *((_DWORD *)v18 + 1);
              *((_DWORD *)OwningThread + 2) = *((_DWORD *)v18 + 2);
              CDisplaySet::Release(v18, v22, v23);
              v18 = (CDisplaySet *)lpCriticalSection[1].OwningThread;
              v29 = v18;
              if ( v18 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v18);
                v18 = v29;
              }
            }
            else
            {
              lpCriticalSection[1].OwningThread = v18;
              v5 = OwningThread;
              if ( v18 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v18);
                v18 = v29;
              }
              if ( OwningThread )
              {
                v25 = lpCriticalSection[1].OwningThread;
                v33 = 3;
                CDisplaySet::LogTelemetry(OwningThread, v25, 3LL);
                if ( v27 )
                  CDisplayManager::CombineNewAndOldDisplaySets(v16, v18, OwningThread);
              }
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              Template_qqq((_DWORD)v16, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 1, i, 0);
            CGuard<CDwmCS>::~CGuard<CDwmCS>(&v34);
          }
          goto LABEL_15;
        }
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v26);
        v18 = v29;
      }
      else
      {
        if ( hProvider > 5u )
        {
          if ( (qword_1801EA750 & 0x400000000000LL) == 0
            || (v24 = 1, (qword_1801EA758 & 0x400000000000LL) != qword_1801EA758) )
          {
            v24 = 0;
          }
          if ( v24 )
          {
            v38 = 4LL;
            v37 = &v28;
            v39 = &gDwmCoreTelemetryActivityId;
            v41 = &v30;
            v45 = &v31;
            v47 = &v32;
            v40 = 16LL;
            v42 = 4LL;
            v43 = p_RecursionCount;
            v44 = 4LL;
            v46 = 4LL;
            v48 = 4LL;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C4F8C, v13, v14, 8u, &pData);
          }
        }
        v18 = v29;
        if ( v29 )
        {
          CDisplaySet::Release(v29, v11, (__int64)v13);
          v18 = 0LL;
          v29 = 0LL;
        }
        v15 = v26;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v26);
      }
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      Template_qqq(v12, (unsigned int)&EVTDESC_SCHEDULE_DERIVEDISPLAYSET, 0, i, v15);
  }
  while ( v15 );
  if ( hProvider > 5u
    && (qword_1801EA750 & 0x400000000000LL) != 0
    && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
  {
    v52 = 0;
    v50 = &gDwmCoreTelemetryActivityId;
    v51 = 16;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C4F51, v13, v14, 3u, &v49);
  }
  v28 = -2003304442;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x292u);
LABEL_15:
  if ( a3 )
    *(_DWORD *)a3 = v33;
  *v35 = v18;
  if ( v5 )
    CDisplaySet::Release(v5, v19, v20);
  return (unsigned int)v28;
}
