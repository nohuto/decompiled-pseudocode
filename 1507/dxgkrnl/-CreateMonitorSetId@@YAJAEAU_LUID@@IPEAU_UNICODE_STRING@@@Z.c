/*
 * XREFs of ?CreateMonitorSetId@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005F000
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C005EEAC (-AllocateMonitorSetIdFromAdapterSource@@YAJAEAU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00012D4 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C00089F8 (RtlStringCchCopyW.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C005F29C (-AppendMonitorId@@YAJIAEAU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C00898AC (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 */

__int64 __fastcall CreateMonitorSetId(struct _LUID *a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
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
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  SESSION_VIEW *v20; // rbx
  unsigned __int16 MaximumLength; // si
  wchar_t *psz; // r12
  unsigned __int16 v23; // si
  unsigned __int16 v24; // r14
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  struct DISPLAY_SOURCE *v29; // r13
  __int64 v30; // rcx
  _QWORD *v31; // r15
  struct _LUID v32; // rbx
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // edi
  struct VIDPN_MGR *v37; // r15
  __int64 v38; // rax
  __int64 v39; // rdx
  DMMVIDPNTOPOLOGY *v40; // rax
  unsigned __int64 v41; // rbx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  unsigned __int16 v60[2]; // [rsp+30h] [rbp-49h] BYREF
  unsigned int v61; // [rsp+34h] [rbp-45h] BYREF
  unsigned int v62; // [rsp+38h] [rbp-41h]
  struct _LUID v63; // [rsp+40h] [rbp-39h] BYREF
  __int64 v64; // [rsp+48h] [rbp-31h] BYREF
  __int64 v65; // [rsp+50h] [rbp-29h] BYREF
  DMMVIDPNTOPOLOGY *i; // [rsp+58h] [rbp-21h]
  SESSION_VIEW *SessionViewFromSource; // [rsp+60h] [rbp-19h]
  _BYTE v68[104]; // [rsp+68h] [rbp-11h] BYREF
  char v70; // [rsp+F8h] [rbp+7Fh] BYREF

  v4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v49 = WdLogNewEntry5_WdError(v7);
    LODWORD(v15) = -1073741811;
    *(_QWORD *)(v49 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v49);
    return (unsigned int)v15;
  }
  Current = DXGPROCESS::GetCurrent();
  v11 = Current;
  if ( Current )
  {
    if ( !(*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    {
      v70 = 0;
      v13 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70, 0);
      v15 = v13;
      if ( v13 < 0 )
      {
        v52 = WdLogNewEntry5_WdError(v14);
        *(_QWORD *)(v52 + 24) = v15;
        WdLogEvent5_WdError(v52);
      }
      else
      {
        SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v4);
        v20 = SessionViewFromSource;
        if ( SessionViewFromSource )
        {
          if ( (a3->MaximumLength & 1) != 0 )
          {
            v54 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
            *(_QWORD *)(v54 + 24) = 384LL;
            WdLogEvent5_WdAssertion(v54);
          }
          MaximumLength = a3->MaximumLength;
          psz = a3->Buffer;
          v23 = MaximumLength >> 1;
          v24 = v23;
          PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v20);
LABEL_9:
          v29 = PrimaryDisplaySource;
          if ( PrimaryDisplaySource )
          {
            v30 = *((_QWORD *)PrimaryDisplaySource + 1);
            v31 = *(_QWORD **)(v30 + 16);
            if ( !v31 )
            {
              v55 = WdLogNewEntry5_WdAssertion(v30, v26, v27, v28);
              *(_QWORD *)(v55 + 24) = 398LL;
              WdLogEvent5_WdAssertion(v55);
            }
            if ( !v31[247] )
            {
              v48 = WdLogNewEntry5_WdAssertion(v30, v26, v27, v28);
              *(_QWORD *)(v48 + 24) = 399LL;
              WdLogEvent5_WdAssertion(v48);
            }
            v32 = *(struct _LUID *)((char *)v31 + 252);
            v63 = v32;
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v68, (struct DXGADAPTER *const)v31, 0LL);
            v33 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68);
            v15 = v33;
            if ( v33 < 0 )
            {
              v59 = (_QWORD *)WdLogNewEntry5_WdError(v34);
              v59[4] = v63.HighPart;
              v59[5] = v32.LowPart;
              v59[3] = v15;
              WdLogEvent5_WdError(v59);
            }
            else
            {
              v35 = v31[247];
              v36 = *((_DWORD *)v29 + 4);
              v62 = v36;
              v37 = *(struct VIDPN_MGR **)(v35 + 88);
              if ( v37 )
              {
                EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v65, *(_QWORD *)(v35 + 88));
                v38 = *((_QWORD *)v37 + 10);
                v64 = 0LL;
                if ( v38 )
                {
                  _InterlockedIncrement((volatile signed __int32 *)(v38 + 32));
                  v39 = *((_QWORD *)v37 + 10);
                  v32.LowPart = v63.LowPart;
                }
                else
                {
                  v39 = 0LL;
                }
                auto_rc<DMMVIDPN const>::reset(&v64, v39);
                if ( v64 )
                {
                  v40 = (DMMVIDPNTOPOLOGY *)(v64 + 96);
                  v41 = 0LL;
                  for ( i = (DMMVIDPNTOPOLOGY *)(v64 + 96); ; v40 = i )
                  {
                    v61 = -1;
                    v42 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v40, v36, v41, &v61);
                    v15 = v42;
                    if ( v42 < 0 )
                      break;
                    if ( v61 == -1 )
                    {
                      auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
                      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
                      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(SessionViewFromSource, v29);
                      goto LABEL_9;
                    }
                    v60[0] = 0;
                    if ( v24 && v24 != v23 )
                    {
                      LODWORD(v15) = RtlStringCchCopyW(psz, v24, pszSrc);
                      if ( (_DWORD)v15 == -2147483643 )
                        LODWORD(v15) = -1073741789;
                      if ( (int)v15 < 0 )
                        goto LABEL_42;
                      --v24;
                      ++psz;
                    }
                    LODWORD(v15) = AppendMonitorId(v61, &v63, v37, v24, v60, psz);
                    if ( (int)v15 < 0 )
                      goto LABEL_42;
                    v24 -= v60[0];
                    v36 = v62;
                    ++v41;
                    psz += v60[0];
                  }
                  v56 = (_QWORD *)WdLogNewEntry5_WdTrace(v44, v43, v45, v46);
                  v56[4] = v62;
                  v56[5] = i;
                  v56[3] = v41;
                  v56[6] = v15;
                }
                else
                {
                  v57 = WdLogNewEntry5_WdError(0LL);
                  *(_QWORD *)(v57 + 24) = v63.HighPart;
                  *(_QWORD *)(v57 + 32) = v32.LowPart;
                  WdLogEvent5_WdError(v57);
                  LODWORD(v15) = -1071774884;
                }
LABEL_42:
                auto_rc<DMMVIDPN const>::reset(&v64, 0LL);
                DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v65 + 40));
              }
              else
              {
                v58 = WdLogNewEntry5_WdError(v34);
                *(_QWORD *)(v58 + 24) = v63.HighPart;
                *(_QWORD *)(v58 + 32) = v32.LowPart;
                WdLogEvent5_WdError(v58);
                LODWORD(v15) = -1071774923;
              }
            }
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
          }
          else
          {
            a3->Length = 2 * (v23 - v24);
          }
        }
        else
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdError(v17);
          v53[3] = v4;
          v53[4] = a1->HighPart;
          v53[5] = a1->LowPart;
          WdLogEvent5_WdError(v53);
          LODWORD(v15) = -1073741811;
        }
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v70);
      return (unsigned int)v15;
    }
    v51 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v51 + 24) = v11;
    WdLogEvent5_WdError(v51);
    return 3221225506LL;
  }
  else
  {
    v50 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v50 + 24) = 339LL;
    WdLogEvent5_WdError(v50);
    return -1073741811LL;
  }
}
