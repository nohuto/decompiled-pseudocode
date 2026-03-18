/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00F5468
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01A20B0 (-RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z.c)
 *     ?_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C01AD9EC (-_AugmentVidPnTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDMMVIDPNTOPOLOGY@@PEAU_D3DKMT_AUGMENT_CD.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0001DE0 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@G@Z @ 0x1C0004E54 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@W4_D3DKMDT_VIDPN_PRESENT_PA.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C000A6E8 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C000A704 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000ACAC (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0080524 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00F53F8 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(DMMVIDPNTOPOLOGY *this, unsigned int a2)
{
  unsigned int v2; // esi
  __int64 v3; // r15
  _DWORD *v5; // rdi
  PVOID v6; // rax
  __int64 v7; // rcx
  void *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ebx
  _DWORD *v20; // rbp
  unsigned int v21; // r14d
  __int64 v22; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbx
  __int64 Container; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  DMMVIDPNPRESENTPATH *v30; // rcx
  DMMVIDPNPRESENTPATH *v31; // rax
  __int64 v32; // rcx
  int *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // r9
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  struct DMMVIDPNTARGET *v53; // [rsp+30h] [rbp-48h]
  struct DMMVIDPNSOURCE *v54; // [rsp+38h] [rbp-40h]
  void *v55; // [rsp+90h] [rbp+18h] BYREF
  struct DMMVIDPNPRESENTPATH *v56; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v3 = a2;
  v55 = 0LL;
  v5 = 0LL;
  v6 = operator new(0x6B80uLL, 0x4B677844u, PagedPool);
  v8 = v6;
  if ( !v6 )
  {
    v42 = WdLogNewEntry5_WdLowResource(v7);
    WdLogEvent5_WdLowResource(v42);
    v2 = -1073741801;
    goto LABEL_13;
  }
  memset(v6, 0, 0x6B80uLL);
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(&v55, v8);
  v10 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v10 + 8) )
  {
    v43 = WdLogNewEntry5_WdAssertion(v9);
    WdLogEvent5_WdAssertion(v43);
  }
  v5 = v55;
  if ( (int)DpiReadPnpRegistryValue(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL) + 192LL),
              L"VidPnLkgTopology",
              (char *)v55,
              0x6B80u,
              1u) < 0 )
  {
    v44 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    WdLogEvent5_WdWarning(v44);
LABEL_28:
    v2 = -1073741275;
    goto LABEL_13;
  }
  if ( (_DWORD)v3 != -3 )
  {
    v45 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(this, v3);
    v15 = 0x80000000LL;
    v16 = v45;
    if ( (int)(v45 + 0x80000000) < 0 || v45 == -1071774919 )
      goto LABEL_7;
    goto LABEL_31;
  }
  if ( (int)DMMVIDPNTOPOLOGY::RemoveAllPaths(this) < 0 )
  {
LABEL_31:
    v46 = WdLogNewEntry5_WdAssertion(v16);
    WdLogEvent5_WdAssertion(v46);
  }
LABEL_7:
  v19 = 0;
  v20 = v5 + 12;
  LODWORD(v55) = 0;
  v21 = 0;
  while ( 1 )
  {
    if ( (_DWORD)v3 == -3 )
    {
      if ( !*(v20 - 11) || !*(v20 - 12) )
        goto LABEL_10;
    }
    else
    {
      if ( (_DWORD)v3 != v21 )
        goto LABEL_10;
      if ( !*(v20 - 11) )
      {
        v47 = WdLogNewEntry5_WdDmmEvent(v16);
        *(_QWORD *)(v47 + 24) = v3;
        WdLogEvent5_WdDmmEvent(v47);
        goto LABEL_28;
      }
    }
    v24 = 0;
    if ( *v20 )
      break;
LABEL_10:
    ++v21;
    v20 += 430;
    if ( v21 >= 0x10 )
    {
      if ( !v19 )
      {
        v22 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
        WdLogEvent5_WdWarning(v22);
        v2 = -1071774975;
      }
      goto LABEL_13;
    }
  }
  while ( 1 )
  {
    v25 = 26LL * v24;
    v56 = 0LL;
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v54 = (struct DMMVIDPNSOURCE *)IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(Container + 304), v21);
    if ( !v54 )
      break;
    v28 = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
    v53 = (struct DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v28 + 312), v20[v25 + 2]);
    if ( !v53 )
    {
      v51 = WdLogNewEntry5_WdError(v29);
      *(_QWORD *)(v51 + 24) = (unsigned int)v20[v25 + 2];
      WdLogEvent5_WdError(v51);
      v2 = -1071774971;
      goto LABEL_42;
    }
    v30 = (DMMVIDPNPRESENTPATH *)operator new(0xD0uLL, 0x4E506456u, PagedPool);
    if ( v30 )
      v31 = DMMVIDPNPRESENTPATH::DMMVIDPNPRESENTPATH(
              v30,
              v54,
              v53,
              (enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE)v20[v25 + 22],
              v20[v25 + 25]);
    else
      v31 = 0LL;
    auto_ptr<DMMVIDPNPRESENTPATH>::reset(
      (__int64 (__fastcall ****)(_QWORD, __int64))&v56,
      (__int64 (__fastcall ***)(_QWORD, __int64))v31);
    v33 = (int *)v56;
    if ( !v56 )
    {
      v50 = WdLogNewEntry5_WdLowResource(v32);
      *(_QWORD *)(v50 + 24) = this;
      WdLogEvent5_WdLowResource(v50);
      v2 = -1073741801;
      goto LABEL_42;
    }
    if ( !(**((unsigned __int8 (__fastcall ***)(char *))v56 + 7))((char *)v56 + 56) )
    {
      v48 = WdLogNewEntry5_WdDmmEvent(v34);
      *(_QWORD *)(v48 + 24) = v33[16];
      WdLogEvent5_WdDmmEvent(v48);
LABEL_38:
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v56);
      v19 = (int)v55;
      goto LABEL_24;
    }
    v36 = DMMVIDPNTOPOLOGY::AddPath(this, (struct DMMVIDPNPRESENTPATH *)v33, 2LL, v35);
    v41 = v36;
    if ( v36 < 0 )
    {
      v49 = WdLogNewEntry5_WdWarning(v38, v37, v39, v40);
      *(_QWORD *)(v49 + 24) = v41;
      WdLogEvent5_WdWarning(v49);
      goto LABEL_38;
    }
    v19 = 1;
    v56 = 0LL;
    LODWORD(v55) = 1;
    auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v56);
LABEL_24:
    if ( ++v24 >= *v20 )
      goto LABEL_10;
  }
  v52 = WdLogNewEntry5_WdError(v27);
  *(_QWORD *)(v52 + 24) = v21;
  WdLogEvent5_WdError(v52);
  v2 = -1071774972;
LABEL_42:
  auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v56);
LABEL_13:
  operator delete(v5);
  return v2;
}
