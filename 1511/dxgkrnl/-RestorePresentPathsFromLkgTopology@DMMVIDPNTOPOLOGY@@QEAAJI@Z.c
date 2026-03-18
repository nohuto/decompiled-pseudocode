/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01786D0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01842B4 (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004C24 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C0008324 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0008FC0 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000C54C (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000C57C (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z @ 0x1C000CFC8 (-reset@-$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C009106C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00DC7E0 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  _DWORD *v5; // rdi
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ebx
  _DWORD *v23; // rbp
  unsigned int v24; // r14d
  __int64 v25; // rax
  unsigned int v27; // r12d
  __int64 v28; // rbx
  __int64 Container; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  DMMVIDPNPRESENTPATH *v33; // rcx
  DMMVIDPNPRESENTPATH *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  int *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // r9
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  struct DMMVIDPNTARGET *v59; // [rsp+30h] [rbp-48h]
  struct DMMVIDPNSOURCE *v60; // [rsp+38h] [rbp-40h]
  void *v61; // [rsp+90h] [rbp+18h] BYREF
  struct DMMVIDPNPRESENTPATH *v62; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v61 = 0LL;
  v5 = 0LL;
  v6 = operator new[](0x6B80uLL, 0x4B677844u, PagedPool);
  v11 = v6;
  if ( !v6 )
  {
    v48 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    WdLogEvent5_WdLowResource(v48);
    v2 = -1073741801;
    goto LABEL_13;
  }
  memset(v6, 0, 0x6B80uLL);
  auto_ptr<_VIDPN_LKG_TOPOLOGY>::reset(&v61, v11);
  v13 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v13 + 8) )
  {
    v49 = WdLogNewEntry5_WdAssertion(v12);
    WdLogEvent5_WdAssertion(v49);
  }
  v5 = v61;
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL) + 176LL),
              L"VidPnLkgTopology",
              (char *)v61,
              0x6B80u,
              1u) < 0 )
  {
    v50 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    WdLogEvent5_WdWarning(v50);
LABEL_29:
    v2 = -1073741275;
    goto LABEL_13;
  }
  if ( (_DWORD)v3 != -3 )
  {
    v51 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(this, v3);
    v18 = 0x80000000LL;
    v19 = v51;
    if ( (int)(v51 + 0x80000000) < 0 || v51 == -1071774919 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPaths(this) < 0 )
  {
LABEL_32:
    v52 = WdLogNewEntry5_WdAssertion(v19);
    WdLogEvent5_WdAssertion(v52);
  }
LABEL_7:
  v22 = 0;
  v23 = v5 + 12;
  LODWORD(v61) = 0;
  v24 = 0;
  while ( 1 )
  {
    if ( (_DWORD)v3 == -3 )
    {
      if ( !*(v23 - 11) || !*(v23 - 12) )
        goto LABEL_10;
    }
    else
    {
      if ( (_DWORD)v3 != v24 )
        goto LABEL_10;
      if ( !*(v23 - 11) )
      {
        v53 = WdLogNewEntry5_WdDmmEvent(v19);
        *(_QWORD *)(v53 + 24) = v3;
        WdLogEvent5_WdDmmEvent(v53);
        goto LABEL_29;
      }
    }
    v27 = 0;
    if ( *v23 )
      break;
LABEL_10:
    ++v24;
    v23 += 430;
    if ( v24 >= 0x10 )
    {
      if ( !v22 )
      {
        v25 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
        WdLogEvent5_WdWarning(v25);
        v2 = -1071774975;
      }
      goto LABEL_13;
    }
  }
  while ( 1 )
  {
    v28 = 26LL * v27;
    v62 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v60 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v24);
    if ( !v60 )
      break;
    v31 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v59 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v31 + 312), v23[v28 + 2]);
    if ( !v59 )
    {
      v57 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v57 + 24) = (unsigned int)v23[v28 + 2];
      WdLogEvent5_WdError(v57);
      v2 = -1071774971;
      goto LABEL_42;
    }
    v33 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
    if ( v33 )
      v34 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
              v33,
              v60,
              v59,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v23[v28 + 22],
              v23[v28 + 25]);
    else
      v34 = 0LL;
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v62,
      (__int64 (__fastcall ***)(_QWORD, __int64))v34);
    v39 = (int *)v62;
    if ( !v62 )
    {
      v56 = WdLogNewEntry5_WdLowResource(v36, v35, v37, v38);
      *(_QWORD *)(v56 + 24) = this;
      WdLogEvent5_WdLowResource(v56);
      v2 = -1073741801;
      goto LABEL_42;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v62 + 7))((char *)v62 + 56) )
    {
      v54 = WdLogNewEntry5_WdDmmEvent(v40);
      *(_QWORD *)(v54 + 24) = v39[16];
      WdLogEvent5_WdDmmEvent(v54);
LABEL_38:
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v62);
      v22 = (int)v61;
      goto LABEL_24;
    }
    v42 = DMMVIDPNTOPOLOGY::AddPath(this, (struct DMMVIDPNPRESENTPATH *)v39, 2LL, v41);
    v47 = v42;
    if ( v42 < 0 )
    {
      v55 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
      *(_QWORD *)(v55 + 24) = v47;
      WdLogEvent5_WdWarning(v55);
      goto LABEL_38;
    }
    v22 = 1;
    v62 = 0LL;
    LODWORD(v61) = 1;
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v62);
LABEL_24:
    if ( ++v27 >= *v23 )
      goto LABEL_10;
  }
  v58 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v58 + 24) = v24;
  WdLogEvent5_WdError(v58);
  v2 = -1071774972;
LABEL_42:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v62);
LABEL_13:
  operator delete(v5);
  return v2;
}
