/*
 * XREFs of ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005CEA4
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005D684 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0004F74 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     RtlStringCchCopyW @ 0x1C000A4DC (RtlStringCchCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005D194 (-AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C009060C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 */

__int64 __fastcall CreateMonitorSetId(struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  struct _UNICODE_STRING *v3; // r12
  __int64 v4; // r14
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  DXGSESSIONDATA *SessionData; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v10; // rcx
  struct DXGPROCESS *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rcx
  SESSION_VIEW *v17; // rbx
  unsigned __int16 v18; // si
  unsigned __int16 v19; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r13
  unsigned __int64 v21; // r12
  __int64 v22; // rcx
  _QWORD *v23; // r14
  struct _LUID v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // edi
  struct VIDPN_MGR *v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DMMVIDPNTOPOLOGY *v33; // rbx
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  const wchar_t *psz; // rbx
  __int64 v43; // rax
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int64 v54; // rax
  _QWORD *v55; // rax
  unsigned __int16 v56[2]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v57; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v58; // [rsp+38h] [rbp-51h]
  struct _LUID v59; // [rsp+40h] [rbp-49h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-41h]
  __int64 v61; // [rsp+50h] [rbp-39h] BYREF
  __int64 v62; // [rsp+58h] [rbp-31h] BYREF
  DMMVIDPNTOPOLOGY *v63; // [rsp+60h] [rbp-29h]
  SESSION_VIEW *SessionViewFromSource; // [rsp+68h] [rbp-21h]
  _BYTE v65[112]; // [rsp+70h] [rbp-19h] BYREF
  char v67; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v44 = WdLogNewEntry5_WdError(v7);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v44 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v44 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v44);
    return (unsigned int)v15;
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    {
      v67 = 0;
      v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v67, 0);
      v15 = v13;
      if ( v13 < 0 )
      {
        v47 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v47 + 24) = v15;
        WdLogEvent5_WdError(v47);
        goto LABEL_34;
      }
      SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v4);
      v17 = SessionViewFromSource;
      if ( !SessionViewFromSource )
      {
        v48 = (_QWORD *)WdLogNewEntry5_WdError(v16);
        v48[3] = v4;
        v48[4] = a1->HighPart;
        v48[5] = a1->LowPart;
        WdLogEvent5_WdError(v48);
        LODWORD(v15) = -1073741811;
        goto LABEL_34;
      }
      if ( (v3->MaximumLength & 1) != 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v16);
        *(_QWORD *)(v49 + 24) = 396LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v18 = v3->MaximumLength >> 1;
      v19 = v18;
      pszDest = v3->Buffer;
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v17);
      if ( PrimaryDisplaySource )
      {
        v21 = 0LL;
        while ( 2 )
        {
          v22 = *((_QWORD *)PrimaryDisplaySource + 1);
          v23 = *(_QWORD **)(v22 + 16);
          if ( !v23 )
          {
            v50 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v50 + 24) = 410LL;
            WdLogEvent5_WdAssertion(v50);
          }
          if ( !v23[248] )
          {
            v43 = WdLogNewEntry5_WdAssertion(v22);
            *(_QWORD *)(v43 + 24) = 411LL;
            WdLogEvent5_WdAssertion(v43);
          }
          v24 = *(struct _LUID *)((char *)v23 + 252);
          v59 = v24;
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, (struct DXGADAPTER *const)v23, 0LL);
          v25 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65);
          v15 = v25;
          if ( v25 < 0 )
          {
            v55 = (_QWORD *)WdLogNewEntry5_WdError(v26);
            v55[4] = v59.HighPart;
            v55[5] = v24.LowPart;
            v55[3] = v15;
            WdLogEvent5_WdError(v55);
          }
          else
          {
            v27 = v23[248];
            v28 = *((_DWORD *)PrimaryDisplaySource + 4);
            v58 = v28;
            v29 = *(struct VIDPN_MGR **)(v27 + 112);
            if ( v29 )
            {
              EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v62, *(_QWORD *)(v27 + 112));
              v30 = *((_QWORD *)v29 + 10);
              v61 = 0LL;
              if ( v30 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v30 + 32));
                v31 = *((_QWORD *)v29 + 10);
                v24.LowPart = v59.LowPart;
              }
              else
              {
                v31 = 0LL;
              }
              auto_rc<DMMVIDPN const>::reset(&v61, v31);
              if ( v61 )
              {
                v33 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
                v63 = (DMMVIDPNTOPOLOGY *)(v61 + 96);
                while ( 1 )
                {
                  v57 = -1;
                  v34 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v33, v28, v21, &v57);
                  v15 = v34;
                  if ( v34 < 0 )
                  {
                    v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v36, v35, v37, v38);
                    v52 = v58;
                    v51[3] = v21;
                    v51[4] = v52;
                    v51[5] = v33;
                    v51[6] = v15;
                    goto LABEL_50;
                  }
                  if ( v57 == -1 )
                    break;
                  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v29 + 12) + 72LL));
                  v39 = *((_QWORD *)v29 + 12);
                  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v39, v57);
                  if ( TargetById && *((_BYTE *)TargetById + 396) )
                  {
                    if ( v39 )
                      ReferenceCounted::Release((ReferenceCounted *)(v39 + 64));
                  }
                  else
                  {
                    if ( v39 )
                      ReferenceCounted::Release((ReferenceCounted *)(v39 + 64));
                    psz = pszDest;
                    v56[0] = 0;
                    if ( v19 && v19 != v18 )
                    {
                      LODWORD(v15) = RtlStringCchCopyW(pszDest, v19, pszSrc);
                      if ( (_DWORD)v15 == -2147483643 )
                        LODWORD(v15) = -1073741789;
                      if ( (int)v15 < 0 )
                        goto LABEL_50;
                      --v19;
                      ++psz;
                    }
                    LODWORD(v15) = AppendMonitorId(v57, &v59, v29, v19, v56, psz);
                    if ( (int)v15 < 0 )
                      goto LABEL_50;
                    v19 -= v56[0];
                    pszDest = (NTSTRSAFE_PWSTR)&psz[v56[0]];
                  }
                  v33 = v63;
                  ++v21;
                  v28 = v58;
                }
                auto_rc<DMMVIDPN const>::reset(&v61, 0LL);
                DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v62 + 40));
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
                v21 = 0LL;
                PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, PrimaryDisplaySource);
                if ( PrimaryDisplaySource )
                  continue;
                v3 = a3;
                goto LABEL_33;
              }
              v53 = WdLogNewEntry5_WdError(v32);
              *(_QWORD *)(v53 + 24) = v59.HighPart;
              *(_QWORD *)(v53 + 32) = v24.LowPart;
              WdLogEvent5_WdError(v53);
              LODWORD(v15) = -1071774884;
LABEL_50:
              auto_rc<DMMVIDPN const>::reset(&v61, 0LL);
              DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v62 + 40));
            }
            else
            {
              v54 = WdLogNewEntry5_WdError(v26);
              *(_QWORD *)(v54 + 24) = v59.HighPart;
              *(_QWORD *)(v54 + 32) = v24.LowPart;
              WdLogEvent5_WdError(v54);
              LODWORD(v15) = -1071774923;
            }
          }
          break;
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65);
        goto LABEL_34;
      }
LABEL_33:
      v3->Length = 2 * (v18 - v19);
LABEL_34:
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v67);
      return (unsigned int)v15;
    }
    v46 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v46 + 24) = v11;
    WdLogEvent5_WdError(v46);
    return 3221225506LL;
  }
  else
  {
    v45 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v45 + 24) = 351LL;
    WdLogEvent5_WdError(v45);
    return -1073741811LL;
  }
}
