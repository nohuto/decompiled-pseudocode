/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C0174088 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C017FDEC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0004CDC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0005DCC (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0008180 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00081B0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z @ 0x1C000E178 (-reset@-$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0089F34 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00CC220 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  _DWORD *v5; // rdi
  PVOID v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
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
  __int64 v35; // rcx
  int *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  struct DMMVIDPNTARGET *v56; // [rsp+30h] [rbp-48h]
  struct DMMVIDPNSOURCE *v57; // [rsp+38h] [rbp-40h]
  void *v58; // [rsp+90h] [rbp+18h] BYREF
  struct DMMVIDPNPRESENTPATH *v59; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v58 = 0LL;
  v5 = 0LL;
  v6 = operator new[](0x1D80uLL, 0x4B677844u, PagedPool);
  v8 = v6;
  if ( !v6 )
  {
    v45 = WdLogNewEntry5_WdLowResource(v7);
    WdLogEvent5_WdLowResource(v45);
    v2 = -1073741801;
    goto LABEL_13;
  }
  memset(v6, 0, 0x1D80uLL);
  auto_ptr<_VIDPN_LKG_TOPOLOGY>::reset(&v58, v8);
  v11 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v11 + 8) )
  {
    v46 = WdLogNewEntry5_WdAssertion(v10, v9, v12, v13);
    WdLogEvent5_WdAssertion(v46);
  }
  v5 = v58;
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) + 16LL) + 176LL),
              L"VidPnLkgTopology",
              v58,
              7552LL) < 0 )
  {
    v47 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
    WdLogEvent5_WdWarning(v47);
LABEL_29:
    v2 = -1073741275;
    goto LABEL_13;
  }
  if ( (_DWORD)v3 != -3 )
  {
    v48 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(this, v3);
    v18 = 0x80000000LL;
    v19 = v48;
    if ( (int)(v48 + 0x80000000) < 0 || v48 == -1071774919 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPaths(this) < 0 )
  {
LABEL_32:
    v49 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    WdLogEvent5_WdAssertion(v49);
  }
LABEL_7:
  v22 = 0;
  v23 = v5 + 12;
  LODWORD(v58) = 0;
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
        v50 = WdLogNewEntry5_WdDmmEvent(v19);
        *(_QWORD *)(v50 + 24) = v3;
        WdLogEvent5_WdDmmEvent(v50);
        goto LABEL_29;
      }
    }
    v27 = 0;
    if ( *v23 )
      break;
LABEL_10:
    ++v24;
    v23 += 118;
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
    v59 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v57 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v24);
    if ( !v57 )
      break;
    v31 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v56 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v31 + 312), v23[v28 + 2]);
    if ( !v56 )
    {
      v54 = WdLogNewEntry5_WdError(v32);
      *(_QWORD *)(v54 + 24) = (unsigned int)v23[v28 + 2];
      WdLogEvent5_WdError(v54);
      v2 = -1071774971;
      goto LABEL_42;
    }
    v33 = (DMMVIDPNPRESENTPATH *)operator new[](0xD0uLL, 0x4E506456u, PagedPool);
    if ( v33 )
      v34 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
              v33,
              v57,
              v56,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v23[v28 + 22],
              v23[v28 + 25]);
    else
      v34 = 0LL;
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v59,
      (__int64 (__fastcall ***)(_QWORD, __int64))v34);
    v36 = (int *)v59;
    if ( !v59 )
    {
      v53 = WdLogNewEntry5_WdLowResource(v35);
      *(_QWORD *)(v53 + 24) = this;
      WdLogEvent5_WdLowResource(v53);
      v2 = -1073741801;
      goto LABEL_42;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v59 + 7))((char *)v59 + 56) )
    {
      v51 = WdLogNewEntry5_WdDmmEvent(v37);
      *(_QWORD *)(v51 + 24) = v36[16];
      WdLogEvent5_WdDmmEvent(v51);
LABEL_38:
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v59);
      v22 = (int)v58;
      goto LABEL_24;
    }
    v39 = DMMVIDPNTOPOLOGY::AddPath(this, (struct DMMVIDPNPRESENTPATH *)v36, 2LL, v38);
    v44 = v39;
    if ( v39 < 0 )
    {
      v52 = WdLogNewEntry5_WdWarning(v41, v40, v42, v43);
      *(_QWORD *)(v52 + 24) = v44;
      WdLogEvent5_WdWarning(v52);
      goto LABEL_38;
    }
    v22 = 1;
    v59 = 0LL;
    LODWORD(v58) = 1;
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v59);
LABEL_24:
    if ( ++v27 >= *v23 )
      goto LABEL_10;
  }
  v55 = WdLogNewEntry5_WdError(v30);
  *(_QWORD *)(v55 + 24) = v24;
  WdLogEvent5_WdError(v55);
  v2 = -1071774972;
LABEL_42:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v59);
LABEL_13:
  operator delete(v5);
  return v2;
}
