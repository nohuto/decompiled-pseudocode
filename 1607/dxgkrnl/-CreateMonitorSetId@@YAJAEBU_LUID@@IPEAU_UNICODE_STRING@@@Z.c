/*
 * XREFs of ?CreateMonitorSetId@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9818
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C00B9FF8 (-AllocateMonitorSetIdFromAdapterSource@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000A6B4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C000B668 (RtlStringCchCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C007FA6C (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C00B97A4 (-AppendMonitorId@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 */

__int64 __fastcall CreateMonitorSetId(const struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  struct _UNICODE_STRING *v3; // r12
  __int64 v4; // r14
  DXGGLOBAL *Global; // rax
  __int64 v7; // rcx
  DXGSESSIONDATA *SessionData; // r15
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rbx
  unsigned __int16 v20; // si
  unsigned __int16 v21; // r15
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  struct DISPLAY_SOURCE *v23; // r13
  __int64 v24; // rcx
  __int64 v25; // r12
  _QWORD *v26; // r14
  struct _LUID v27; // rbx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned int v31; // edi
  struct VIDPN_MGR *v32; // r14
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  DMMVIDPNTOPOLOGY *v36; // r13
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned __int16 *psz; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rcx
  unsigned __int16 v59[2]; // [rsp+30h] [rbp-59h] BYREF
  unsigned int v60; // [rsp+34h] [rbp-55h] BYREF
  unsigned int v61; // [rsp+38h] [rbp-51h]
  struct _LUID v62; // [rsp+40h] [rbp-49h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+48h] [rbp-41h]
  __int64 v64; // [rsp+50h] [rbp-39h] BYREF
  __int64 v65; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v66[128]; // [rsp+60h] [rbp-29h] BYREF
  char v68; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a3;
  v4 = a2;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v47 = WdLogNewEntry5_WdError(v7);
    LODWORD(v17) = -1073741811;
    *(_QWORD *)(v47 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v47);
    return (unsigned int)v17;
  }
  CurrentProcess = PsGetCurrentProcess(v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL) )
    {
      v68 = 0;
      v15 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v68, 0);
      v17 = v15;
      if ( v15 < 0 )
      {
        v50 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v50 + 24) = v17;
        WdLogEvent5_WdError(v50);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v4);
        if ( SessionViewFromSource )
        {
          if ( (v3->MaximumLength & 1) != 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v18);
            *(_QWORD *)(v52 + 24) = 379LL;
            WdLogEvent5_WdAssertion(v52);
          }
          v20 = v3->MaximumLength >> 1;
          v21 = v20;
          pszDest = v3->Buffer;
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
          v23 = PrimaryDisplaySource;
          if ( PrimaryDisplaySource )
          {
            v24 = *((_QWORD *)PrimaryDisplaySource + 1);
            v25 = 0LL;
            v26 = *(_QWORD **)(v24 + 16);
            if ( !v26 )
            {
              v53 = WdLogNewEntry5_WdAssertion(v24);
              *(_QWORD *)(v53 + 24) = 394LL;
              WdLogEvent5_WdAssertion(v53);
            }
            if ( !v26[266] )
            {
              v46 = WdLogNewEntry5_WdAssertion(v24);
              *(_QWORD *)(v46 + 24) = 395LL;
              WdLogEvent5_WdAssertion(v46);
            }
            v27 = *(struct _LUID *)((char *)v26 + 268);
            v62 = v27;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, (struct DXGADAPTER *const)v26, 0LL);
            v28 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v66);
            v17 = v28;
            if ( v28 < 0 )
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdError(v29);
              v54[4] = v62.HighPart;
              v54[5] = v27.LowPart;
              v54[3] = v17;
              WdLogEvent5_WdError(v54);
            }
            else
            {
              v30 = v26[266];
              v31 = *((_DWORD *)v23 + 4);
              v61 = v31;
              v32 = *(struct VIDPN_MGR **)(v30 + 88);
              if ( v32 )
              {
                EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, *(_QWORD *)(v30 + 88));
                v33 = *((_QWORD *)v32 + 10);
                v64 = 0LL;
                if ( v33 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v33 + 32));
                  v34 = *((_QWORD *)v32 + 10);
                  v27.LowPart = v62.LowPart;
                }
                else
                {
                  v34 = 0LL;
                }
                auto_rc<DMMVIDPN const>::reset(&v64, v34);
                if ( v64 )
                {
                  v36 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
                  while ( 1 )
                  {
                    v60 = -1;
                    v37 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v36, v31, v25, &v60);
                    v17 = v37;
                    if ( v37 < 0 )
                      break;
                    if ( v60 == -1 )
                    {
                      auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
                      v3 = a3;
                      goto LABEL_31;
                    }
                    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v32 + 12) + 72LL));
                    v42 = *((_QWORD *)v32 + 12);
                    TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v42, v60);
                    if ( TargetById && *((_BYTE *)TargetById + 396) )
                    {
                      if ( v42 )
                        ReferenceCounted::Release((ReferenceCounted *)(v42 + 64));
                    }
                    else
                    {
                      if ( v42 )
                        ReferenceCounted::Release((ReferenceCounted *)(v42 + 64));
                      psz = pszDest;
                      v59[0] = 0;
                      if ( v21 && v21 != v20 )
                      {
                        LODWORD(v17) = RtlStringCchCopyW(pszDest, v21, L"^");
                        if ( (_DWORD)v17 == -2147483643 )
                          LODWORD(v17) = -1073741789;
                        if ( (int)v17 < 0 )
                          goto LABEL_50;
                        --v21;
                        ++psz;
                      }
                      LODWORD(v17) = AppendMonitorId(v60, &v62, v32, v21, v59, psz);
                      if ( (int)v17 < 0 )
                        goto LABEL_50;
                      v21 -= v59[0];
                      pszDest = &psz[v59[0]];
                    }
                    v31 = v61;
                    ++v25;
                  }
                  v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v39, v38, v40, v41);
                  v58 = v61;
                  v57[3] = v25;
                  v57[4] = v58;
                  v57[5] = v36;
                  v57[6] = v17;
                }
                else
                {
                  v56 = WdLogNewEntry5_WdError(v35);
                  *(_QWORD *)(v56 + 24) = v62.HighPart;
                  *(_QWORD *)(v56 + 32) = v27.LowPart;
                  WdLogEvent5_WdError(v56);
                  LODWORD(v17) = -1071774884;
                }
LABEL_50:
                auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
              }
              else
              {
                v55 = WdLogNewEntry5_WdError(v29);
                *(_QWORD *)(v55 + 24) = v62.HighPart;
                *(_QWORD *)(v55 + 32) = v27.LowPart;
                WdLogEvent5_WdError(v55);
                LODWORD(v17) = -1071774923;
              }
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
          }
          else
          {
LABEL_31:
            v3->Length = 2 * (v20 - v21);
          }
        }
        else
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdError(v18);
          v51[3] = v4;
          v51[4] = a1->HighPart;
          v51[5] = a1->LowPart;
          WdLogEvent5_WdError(v51);
          LODWORD(v17) = -1073741811;
        }
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v68);
      return (unsigned int)v17;
    }
    v49 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v49 + 24) = v13;
    WdLogEvent5_WdError(v49);
    return 3221225506LL;
  }
  else
  {
    v48 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v48 + 24) = 334LL;
    WdLogEvent5_WdError(v48);
    return -1073741811LL;
  }
}
