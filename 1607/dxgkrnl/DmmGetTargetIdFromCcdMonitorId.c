/*
 * XREFs of DmmGetTargetIdFromCcdMonitorId @ 0x1C00B5ED0
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C00B6368 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000192C (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C000A244 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C000A298 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     MonitorGetCCDMonitorID @ 0x1C00B62B8 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const void **a2,
        int a3,
        unsigned int *a4,
        DXGADAPTER *a5,
        _DWORD *a6,
        bool *a7,
        bool *a8)
{
  DXGADAPTER *v10; // rsi
  _DWORD *v11; // rax
  bool *v12; // rdx
  bool *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  _QWORD *v19; // rbx
  _QWORD *v20; // r14
  const struct DMMVIDEOPRESENTTARGET *i; // r14
  __int64 v22; // r12
  int CCDMonitorID; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  DXGADAPTER *v29; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // eax
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  __int64 v43; // [rsp+20h] [rbp-40h] BYREF
  void **v44; // [rsp+28h] [rbp-38h] BYREF
  __int128 v45; // [rsp+30h] [rbp-30h]
  void **v46; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v48; // [rsp+50h] [rbp-10h]
  int v49; // [rsp+58h] [rbp-8h]
  char v50; // [rsp+A8h] [rbp+48h] BYREF
  int v51; // [rsp+B0h] [rbp+50h] BYREF

  v51 = a3;
  v10 = this;
  if ( a2 )
  {
    if ( a4 )
    {
      this = a5;
      if ( a5 )
      {
        v11 = a6;
        if ( a6 )
        {
          v12 = a7;
          if ( a7 )
          {
            v13 = a8;
            if ( a8 )
            {
              *a4 = -1;
              *v12 = 0;
              *(_DWORD *)this = -2;
              *v11 = -2;
              v14 = *(unsigned __int16 *)a2;
              v44 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
              *v13 = 0;
              v46 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
              v45 = 0LL;
              Source2 = 0LL;
              v48 = 0LL;
              v49 = 3;
              DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v44, v14 + 2);
              if ( Source2 )
              {
                if ( v10 )
                {
                  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
                  {
                    v38 = WdLogNewEntry5_WdAssertion(v16);
                    WdLogEvent5_WdAssertion(v38);
                  }
                  v17 = *((_QWORD *)v10 + 266);
                  if ( v17 )
                  {
                    v18 = *(_QWORD *)(v17 + 88);
                    if ( v18 )
                    {
                      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v43, *(_QWORD *)(v17 + 88));
                      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
                      v19 = *(_QWORD **)(v18 + 96);
                      v51 = 0;
                      v20 = v19 + 3;
                      if ( (_QWORD *)*v20 != v20 )
                      {
                        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(*v20 - 8LL);
                              i;
                              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, i) )
                        {
                          v22 = *((_QWORD *)i + 12);
                          if ( !*((_BYTE *)i + 396) )
                          {
                            if ( v22 )
                            {
                              CCDMonitorID = MonitorGetCCDMonitorID(
                                               *((_QWORD *)i + 12),
                                               (unsigned int)v48 >> 1,
                                               Source2);
                              v28 = CCDMonitorID;
                              if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
                              {
                                if ( CCDMonitorID < 0 )
                                {
                                  v41 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
                                  *(_QWORD *)(v41 + 24) = v22;
                                  *(_QWORD *)(v41 + 32) = v28;
                                  WdLogEvent5_WdWarning(v41);
                                  goto LABEL_24;
                                }
                                if ( RtlCompareMemory(a2[1], Source2, *(unsigned __int16 *)a2) == *(unsigned __int16 *)a2 )
                                {
                                  if ( !v51 )
                                  {
                                    v29 = a5;
                                    *a4 = *((_DWORD *)i + 6);
                                    v30 = *((_DWORD *)i + 18);
                                    LOBYTE(v51) = 1;
                                    *(_DWORD *)v29 = v30;
                                    v31 = *((_DWORD *)i + 19);
                                    v50 = 1;
                                    *a6 = v31;
                                    v32 = IsVirtualizationDisabledForTarget(
                                            (__int64)v10,
                                            *a4,
                                            (bool *)&v51,
                                            (bool *)&v50);
                                    v28 = v32;
                                    if ( v32 < 0 )
                                    {
                                      v40 = (_QWORD *)WdLogNewEntry5_WdError(v33);
                                      v40[3] = v10;
                                      v40[4] = *a4;
                                      v40[5] = v28;
                                      WdLogEvent5_WdError(v40);
                                    }
                                    else
                                    {
                                      v34 = v50 == 0;
                                      *a7 = (_BYTE)v51 == 0;
                                      *a8 = v34;
                                    }
                                    goto LABEL_24;
                                  }
                                  --v51;
                                }
                              }
                            }
                          }
                        }
                      }
                      LODWORD(v28) = -1073741275;
LABEL_24:
                      if ( v19 )
                        ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
                      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v43 + 40));
                    }
                    else
                    {
                      v39 = WdLogNewEntry5_WdError(v16);
                      *(_QWORD *)(v39 + 24) = v10;
                      WdLogEvent5_WdError(v39);
                      LODWORD(v28) = -1071774923;
                    }
                    goto LABEL_27;
                  }
                  v36 = WdLogNewEntry5_WdError(v16);
                  *(_QWORD *)(v36 + 24) = v10;
                }
                else
                {
                  v36 = WdLogNewEntry5_WdError(v15);
                  *(_QWORD *)(v36 + 24) = 0LL;
                }
                WdLogEvent5_WdError(v36);
                LODWORD(v28) = -1071775742;
              }
              else
              {
                v37 = WdLogNewEntry5_WdError(v15);
                *(_QWORD *)(v37 + 24) = ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 2;
                *(_QWORD *)(v37 + 32) = v10;
                WdLogEvent5_WdError(v37);
                LODWORD(v28) = -1073741801;
              }
LABEL_27:
              DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v44);
              return (unsigned int)v28;
            }
          }
        }
      }
    }
  }
  v42 = (_QWORD *)WdLogNewEntry5_WdError(this);
  v42[5] = a5;
  v42[6] = a6;
  v42[3] = a2;
  v42[4] = a4;
  WdLogEvent5_WdError(v42);
  return 3221225485LL;
}
