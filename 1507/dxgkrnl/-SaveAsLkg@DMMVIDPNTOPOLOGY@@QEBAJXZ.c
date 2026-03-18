/*
 * XREFs of ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00CBE20
 * Callers:
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C00CDBEC (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0002F84 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009774 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z @ 0x1C000E178 (-reset@-$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C002BB14 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiWritePnpRegistryValue @ 0x1C00CC750 (DpiWritePnpRegistryValue.c)
 *     DpiReadPnpRegistryValue @ 0x1C00CE800 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SaveAsLkg(DMMVIDPNTOPOLOGY *this)
{
  unsigned int *v2; // rbx
  PVOID v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  int PnpRegistryValue; // eax
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int *v14; // rax
  __int64 v15; // rdx
  __int64 Container; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD *v21; // rsi
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r12
  char *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r8
  __int64 v29; // r9
  DMMVIDPNSOURCEMODE *v30; // rcx
  int v31; // edx
  __int64 v32; // rdx
  __int64 v33; // r14
  __int64 v34; // r15
  int v35; // r13d
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rcx
  unsigned int *v40; // rdx
  unsigned int i; // r9d
  DMMVIDPNTOPOLOGY *v42; // rsi
  __int64 v43; // rdi
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rsi
  unsigned int v50; // edi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r10d
  unsigned int v61; // r8d
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // [rsp+30h] [rbp-18h]
  void *v70; // [rsp+98h] [rbp+50h] BYREF
  __int64 v71; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v72; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0LL;
  v70 = 0LL;
  v3 = operator new[](0x1D80uLL, 0x4B677844u, PagedPool);
  if ( !v3 )
  {
    v52 = WdLogNewEntry5_WdLowResource(v4);
    WdLogEvent5_WdLowResource(v52);
    v50 = -1073741801;
    goto LABEL_40;
  }
  auto_ptr<_VIDPN_LKG_TOPOLOGY>::reset(&v70, v3);
  v7 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v7 + 8) )
  {
    v53 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
    WdLogEvent5_WdAssertion(v53);
  }
  v10 = *(_QWORD *)(v7 + 8);
  v2 = (unsigned int *)v70;
  PnpRegistryValue = DpiReadPnpRegistryValue(
                       *(_QWORD *)(*(_QWORD *)(v10 + 16) + 176LL),
                       L"VidPnLkgTopology",
                       v70,
                       7552LL);
  v13 = PnpRegistryValue;
  if ( PnpRegistryValue < 0 )
  {
    v54 = WdLogNewEntry5_WdDmmEvent(v12);
    *(_QWORD *)(v54 + 24) = v13;
    WdLogEvent5_WdDmmEvent(v54);
    memset(v2, 0, 0x1D80uLL);
  }
  v14 = v2;
  v15 = 16LL;
  do
  {
    *v14 = 0;
    v14 += 118;
    --v15;
  }
  while ( v15 );
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v21 = (_QWORD *)((char *)this + 24);
  v68 = Container;
  if ( (_QWORD *)*v21 == v21 || (v22 = *v21 - 8LL) == 0 )
  {
LABEL_35:
    v43 = *(_QWORD *)(Container + 48);
    if ( !*(_QWORD *)(v43 + 8) )
    {
      v65 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v65);
    }
    v44 = DpiWritePnpRegistryValue(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 8) + 16LL) + 176LL),
            L"VidPnLkgTopology",
            v2,
            7552LL,
            1);
    v49 = v44;
    v50 = -1073741431;
    if ( v44 == -1073741431 )
    {
      v66 = WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
      *(_QWORD *)(v66 + 24) = v2;
      WdLogEvent5_WdWarning(v66);
    }
    else if ( v44 < 0 )
    {
      v67 = WdLogNewEntry5_WdError(v46);
      *(_QWORD *)(v67 + 24) = v2;
      *(_QWORD *)(v67 + 32) = v49;
      WdLogEvent5_WdError(v67);
      v50 = v49;
    }
    else
    {
      v50 = 0;
    }
    goto LABEL_40;
  }
  while ( 1 )
  {
    v23 = *(_QWORD *)(v22 + 88);
    if ( !v23 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v55);
    }
    v24 = *(unsigned int *)(v23 + 24);
    if ( (unsigned int)v24 >= 0x10 )
    {
      v56 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v56);
    }
    v25 = (char *)&v2[118 * v24];
    if ( *(_DWORD *)v25 )
      goto LABEL_21;
    *(_DWORD *)v25 = 1;
    *((_DWORD *)v25 + 1) = 1;
    *((_DWORD *)v25 + 12) = 0;
    v26 = *(_QWORD *)(v23 + 104);
    v71 = 0LL;
    if ( !v26 )
    {
      v27 = 0LL;
LABEL_45:
      v57 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v57);
      goto LABEL_17;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v26 + 96));
    v27 = *(_QWORD *)(v23 + 104);
    v2 = (unsigned int *)v70;
    if ( !v27 )
      goto LABEL_45;
LABEL_17:
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v71, v27);
    v30 = *(DMMVIDPNSOURCEMODE **)(v71 + 144);
    if ( v30 )
    {
      v31 = *((_DWORD *)v30 + 18);
      *((_DWORD *)v25 + 2) = v31;
      v32 = (unsigned int)(v31 - 1);
      if ( (_DWORD)v32 )
      {
        if ( (_DWORD)v32 != 1 )
        {
          v62 = WdLogNewEntry5_WdError(v30);
          WdLogEvent5_WdError(v62);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v71, 0LL);
          goto LABEL_60;
        }
        *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v25 + 3) = *DMMVIDPNSOURCEMODE::GetTextInfo(v30, v32, v28, v29);
      }
      else
      {
        *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v25 + 12) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v30);
      }
    }
    auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v71, 0LL);
LABEL_21:
    v33 = *((unsigned int *)v25 + 12);
    if ( (unsigned int)v33 >= 4 )
      break;
    v34 = *(_QWORD *)(v22 + 96);
    if ( !v34 )
    {
      v58 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v58);
    }
    v35 = *(_DWORD *)(v34 + 24);
    v72 = 0LL;
    v36 = 104 * v33;
    *(_DWORD *)&v25[v36 + 56] = v35;
    *(_DWORD *)&v25[v36 + 140] = *(_DWORD *)(v22 + 112);
    *(_DWORD *)&v25[v36 + 144] = *(_DWORD *)(v22 + 116);
    *(_DWORD *)&v25[v36 + 136] = *(_DWORD *)(v22 + 104);
    *(_WORD *)&v25[v36 + 148] = *(_WORD *)(v22 + 108);
    v37 = *(_QWORD *)(v34 + 104);
    if ( !v37 )
    {
      v38 = 0LL;
LABEL_49:
      v59 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
      WdLogEvent5_WdAssertion(v59);
      goto LABEL_26;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v37 + 96));
    v38 = *(_QWORD *)(v34 + 104);
    v2 = (unsigned int *)v70;
    if ( !v38 )
      goto LABEL_49;
LABEL_26:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v72, v38);
    v39 = *(_QWORD *)(v72 + 144);
    if ( v39 )
    {
      *(_DWORD *)&v25[v36 + 64] = *(_DWORD *)(v39 + 24);
      *(_OWORD *)&v25[v36 + 72] = *(_OWORD *)(v39 + 72);
      *(_OWORD *)&v25[v36 + 88] = *(_OWORD *)(v39 + 88);
      *(_OWORD *)&v25[v36 + 104] = *(_OWORD *)(v39 + 104);
      *(_QWORD *)&v25[v36 + 120] = *(_QWORD *)(v39 + 120);
    }
    ++*((_DWORD *)v25 + 12);
    v40 = v2 + 12;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(v40 - 11) && i != (_DWORD)v24 )
      {
        v60 = *v40;
        if ( *v40 > 4 )
        {
          v63 = WdLogNewEntry5_WdError(v39);
          *(_QWORD *)(v63 + 24) = v24;
          WdLogEvent5_WdError(v63);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v72, 0LL);
          goto LABEL_60;
        }
        v61 = 0;
        if ( v60 )
        {
          while ( 1 )
          {
            v39 = 104LL * v61;
            if ( *(unsigned int *)((char *)v40 + v39 + 8) == v35 )
              break;
            if ( ++v61 >= v60 )
              goto LABEL_30;
          }
          *(v40 - 11) = 0;
        }
      }
LABEL_30:
      v40 += 118;
    }
    v42 = *(DMMVIDPNTOPOLOGY **)(v22 + 8);
    if ( v42 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v22 = 0LL;
    else
      v22 = (__int64)v42 - 8;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v72, 0LL);
    if ( !v22 )
    {
      Container = v68;
      goto LABEL_35;
    }
  }
  v64 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v64 + 24) = v24;
  WdLogEvent5_WdError(v64);
LABEL_60:
  v50 = -1073741823;
LABEL_40:
  operator delete(v2);
  return v50;
}
