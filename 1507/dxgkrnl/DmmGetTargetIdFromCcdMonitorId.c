/*
 * XREFs of DmmGetTargetIdFromCcdMonitorId @ 0x1C009C3C4
 * Callers:
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C009D610 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0004F50 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?Initialize@?$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C0008634 (-Initialize@-$AutoBuffer@G@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ??1?$AutoBuffer@G@DMM@@UEAA@XZ @ 0x1C00086A4 (--1-$AutoBuffer@G@DMM@@UEAA@XZ.c)
 *     ?IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C008EA64 (-IsTargetSupportVirtualMode@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 *     MonitorGetCCDMonitorID @ 0x1C0099B70 (MonitorGetCCDMonitorID.c)
 */

__int64 __fastcall DmmGetTargetIdFromCcdMonitorId(
        DXGADAPTER *this,
        const void **a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned __int8 *a6)
{
  _DWORD *v6; // r12
  unsigned __int8 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rbx
  _QWORD *v20; // rsi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rsi
  __int64 v22; // r13
  int CCDMonitorID; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int8 IsTargetSupportVirtualMode; // al
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  void **v40; // [rsp+20h] [rbp-40h] BYREF
  __int128 v41; // [rsp+28h] [rbp-38h]
  void **v42; // [rsp+38h] [rbp-28h]
  void *Source2; // [rsp+40h] [rbp-20h]
  __int64 v44; // [rsp+48h] [rbp-18h]
  int v45; // [rsp+50h] [rbp-10h]
  __int64 v46; // [rsp+A8h] [rbp+48h] BYREF
  int v47; // [rsp+B0h] [rbp+50h]

  v47 = a3;
  v6 = a5;
  if ( !a2 || !a4 || !a5 || (v10 = a6) == 0LL )
  {
    v39 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v39[3] = a2;
    v39[4] = a4;
    v39[5] = v6;
    WdLogEvent5_WdError(v39);
    return 3221225485LL;
  }
  *a4 = -1;
  *v10 = 0;
  *v6 = -2;
  v11 = *(unsigned __int16 *)a2;
  v40 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `SetElement'};
  Source2 = 0LL;
  v42 = &DMM::AutoBuffer<unsigned short>::`vftable'{for `NonReferenceCounted'};
  v41 = 0LL;
  v44 = 0LL;
  v45 = 3;
  DMM::AutoBuffer<unsigned short>::Initialize((__int64)&v40, v11 + 2);
  if ( !Source2 )
  {
    v35 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v35 + 24) = ((unsigned __int64)*(unsigned __int16 *)a2 >> 1) + 2;
    *(_QWORD *)(v35 + 32) = this;
    WdLogEvent5_WdError(v35);
    LODWORD(v28) = -1073741801;
    goto LABEL_23;
  }
  if ( !this )
  {
    v34 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v34 + 24) = 0LL;
    goto LABEL_25;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v36 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v36);
  }
  v17 = *((_QWORD *)this + 247);
  if ( !v17 )
  {
    v34 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v34 + 24) = this;
LABEL_25:
    WdLogEvent5_WdError(v34);
    LODWORD(v28) = -1071775742;
    goto LABEL_23;
  }
  v18 = *(_QWORD *)(v17 + 88);
  if ( !v18 )
  {
    v37 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v37 + 24) = this;
    WdLogEvent5_WdError(v37);
    LODWORD(v28) = -1071774923;
    goto LABEL_23;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v46, *(_QWORD *)(v17 + 88));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v18 + 96) + 72LL));
  v19 = *(_QWORD **)(v18 + 96);
  v47 = 0;
  v20 = v19 + 3;
  if ( (_QWORD *)*v20 == v20 || (NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(*v20 - 8LL)) == 0LL )
  {
LABEL_26:
    LODWORD(v28) = -1073741275;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)NextTarget + 12);
    if ( !v22 )
      goto LABEL_31;
    CCDMonitorID = MonitorGetCCDMonitorID(
                     *((struct HDXGMONITOR__ **)NextTarget + 12),
                     (unsigned int)v44 >> 1,
                     (unsigned __int16 *)Source2);
    v28 = CCDMonitorID;
    if ( CCDMonitorID == -2147483643 || CCDMonitorID == -1073741789 )
      goto LABEL_31;
    if ( CCDMonitorID < 0 )
      break;
    if ( RtlCompareMemory(a2[1], Source2, *(unsigned __int16 *)a2) == *(unsigned __int16 *)a2 )
    {
      LODWORD(v28) = v47;
      if ( !v47 )
      {
        *a4 = *((_DWORD *)NextTarget + 6);
        *v6 = *((_DWORD *)NextTarget + 18);
        IsTargetSupportVirtualMode = DMMVIDEOPRESENTTARGET::IsTargetSupportVirtualMode(NextTarget, v29, v30, v31);
        *a6 = IsTargetSupportVirtualMode;
        goto LABEL_20;
      }
      --v47;
    }
LABEL_31:
    NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v19, NextTarget);
    if ( !NextTarget )
      goto LABEL_26;
  }
  v38 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
  *(_QWORD *)(v38 + 24) = v22;
  *(_QWORD *)(v38 + 32) = v28;
  WdLogEvent5_WdWarning(v38);
LABEL_20:
  if ( v19 )
    ReferenceCounted::Release((ReferenceCounted *)(v19 + 8));
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v46 + 40));
LABEL_23:
  DMM::AutoBuffer<unsigned short>::~AutoBuffer<unsigned short>(&v40);
  return (unsigned int)v28;
}
