/*
 * XREFs of DmmGetTargetIdFromCcdMonitorId @ 0x1C005E9E4
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C006063C (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0001524 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C0001594 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00048C4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C00A0070 (MonitorGetCCDMonitorID.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const void **a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        DXGADAPTER *a6,
        bool *a7)
{
  DXGADAPTER *v9; // rsi
  _DWORD *v10; // rax
  bool *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // r14
  bool i; // zf
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // r14
  __int64 v26; // r12
  int CCDMonitorID; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  __int64 v36; // rcx
  _QWORD *v37; // rax
  __int64 v38; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+20h] [rbp-40h] BYREF
  void **v42; // [rsp+28h] [rbp-38h] BYREF
  __int128 v43; // [rsp+30h] [rbp-30h]
  void **v44; // [rsp+40h] [rbp-20h]
  void *Source2; // [rsp+48h] [rbp-18h]
  __int64 v46; // [rsp+50h] [rbp-10h]
  int v47; // [rsp+58h] [rbp-8h]
  char v48; // [rsp+A8h] [rbp+48h] BYREF
  int v49; // [rsp+B0h] [rbp+50h] BYREF

  v49 = a3;
  v9 = this;
  if ( a2 )
  {
    if ( a4 )
    {
      v10 = a5;
      if ( a5 )
      {
        this = a6;
        if ( a6 )
        {
          v11 = a7;
          if ( a7 )
          {
            *a4 = -1;
            *v10 = -2;
            *v11 = 0;
            v12 = *(unsigned __int16 *)a2;
            v42 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
            *(_BYTE *)this = 0;
            v44 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
            v43 = 0LL;
            Source2 = 0LL;
            v46 = 0LL;
            v47 = 3;
            DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v42, v12 + 2);
            if ( Source2 )
            {
              if ( v9 )
              {
                if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9) )
                {
                  v18 = WdLogNewEntry5_WdAssertion(v17);
                  WdLogEvent5_WdAssertion(v18);
                }
                v19 = *((_QWORD *)v9 + 248);
                if ( v19 )
                {
                  v20 = *(_QWORD *)(v19 + 112);
                  if ( v20 )
                  {
                    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v41, *(_QWORD *)(v19 + 112));
                    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v20 + 96) + 72LL));
                    v22 = *(_QWORD **)(v20 + 96);
                    v49 = 0;
                    v23 = v22 + 3;
                    if ( (_QWORD *)*v23 != v23 )
                    {
                      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v23 - 8LL);
                      for ( i = NextTarget == 0LL; !i; i = NextTarget == 0LL )
                      {
                        v26 = *((_QWORD *)NextTarget + 12);
                        if ( !*((_BYTE *)NextTarget + 396) )
                        {
                          if ( v26 )
                          {
                            CCDMonitorID = MonitorGetCCDMonitorID(
                                             *((_QWORD *)NextTarget + 12),
                                             (unsigned int)v46 >> 1,
                                             Source2);
                            v15 = CCDMonitorID;
                            if ( CCDMonitorID != -2147483643 && CCDMonitorID != -1073741789 )
                            {
                              if ( CCDMonitorID < 0 )
                              {
                                v38 = WdLogNewEntry5_WdWarning(v29, v28, v30, v31);
                                *(_QWORD *)(v38 + 24) = v26;
                                *(_QWORD *)(v38 + 32) = v15;
                                WdLogEvent5_WdWarning(v38);
                                goto LABEL_34;
                              }
                              if ( RtlCompareMemory(a2[1], Source2, *(unsigned __int16 *)a2) == *(unsigned __int16 *)a2 )
                              {
                                if ( !v49 )
                                {
                                  v32 = a5;
                                  *a4 = *((_DWORD *)NextTarget + 6);
                                  v33 = *((_DWORD *)NextTarget + 18);
                                  LOBYTE(v49) = 1;
                                  *v32 = v33;
                                  v34 = (unsigned int)*a4;
                                  v48 = 1;
                                  v35 = IsVirtualizationDisabledForTarget(v9, v34, &v49, &v48);
                                  v15 = v35;
                                  if ( v35 < 0 )
                                  {
                                    v37 = (_QWORD *)WdLogNewEntry5_WdError(v36);
                                    v37[3] = v9;
                                    v37[4] = (unsigned int)*a4;
                                    v37[5] = v15;
                                    WdLogEvent5_WdError(v37);
                                  }
                                  else
                                  {
                                    i = v48 == 0;
                                    *(_BYTE *)a6 = (_BYTE)v49 == 0;
                                    *a7 = i;
                                  }
                                  goto LABEL_34;
                                }
                                --v49;
                              }
                            }
                          }
                        }
                        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                       (DMMVIDEOPRESENTTARGETSET *)v22,
                                       NextTarget);
                      }
                    }
                    LODWORD(v15) = -1073741275;
LABEL_34:
                    if ( v22 )
                      ReferenceCounted::Release((ReferenceCounted *)(v22 + 8));
                    DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v41 + 40));
                  }
                  else
                  {
                    v21 = WdLogNewEntry5_WdError(v17);
                    *(_QWORD *)(v21 + 24) = v9;
                    WdLogEvent5_WdError(v21);
                    LODWORD(v15) = -1071774923;
                  }
                  goto LABEL_37;
                }
                v16 = WdLogNewEntry5_WdError(v17);
                *(_QWORD *)(v16 + 24) = v9;
              }
              else
              {
                v16 = WdLogNewEntry5_WdError(v13);
                *(_QWORD *)(v16 + 24) = 0LL;
              }
              WdLogEvent5_WdError(v16);
              LODWORD(v15) = -1071775742;
            }
            else
            {
              v14 = WdLogNewEntry5_WdError(v13);
              *(_QWORD *)(v14 + 24) = ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 2;
              *(_QWORD *)(v14 + 32) = v9;
              WdLogEvent5_WdError(v14);
              LODWORD(v15) = -1073741801;
            }
LABEL_37:
            DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v42);
            return (unsigned int)v15;
          }
        }
      }
    }
  }
  v40 = (_QWORD *)WdLogNewEntry5_WdError(this);
  v40[5] = a5;
  v40[3] = a2;
  v40[4] = a4;
  WdLogEvent5_WdError(v40);
  return 3221225485LL;
}
