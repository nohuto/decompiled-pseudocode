/*
 * XREFs of ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C0090C08
 * Callers:
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FD54 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0006778 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?reset@?$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z @ 0x1C000CFC8 (-reset@-$auto_ptr@U_VIDPN_LKG_TOPOLOGY@@@@QEAAXPEAU_VIDPN_LKG_TOPOLOGY@@@Z.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C002B8AC (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     DpiReadPnpRegistryValue @ 0x1C005CD60 (DpiReadPnpRegistryValue.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiWritePnpRegistryValue @ 0x1C00C67A0 (DpiWritePnpRegistryValue.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SaveAsLkg(DMMVIDPNTOPOLOGY *this)
{
  unsigned int *v2; // rbx
  PVOID v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  int PnpRegistryValue; // eax
  __int64 v12; // rdi
  unsigned int *v13; // rax
  __int64 v14; // rdx
  __int64 Container; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r12
  char *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // r14
  DMMVIDPNSOURCEMODE *v24; // rcx
  int v25; // edx
  int v26; // edx
  __int64 v27; // r14
  __int64 v28; // r15
  int v29; // r13d
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rcx
  unsigned int *v34; // rdx
  unsigned int i; // r9d
  DMMVIDPNTOPOLOGY *v36; // rsi
  __int64 v37; // rdi
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rsi
  unsigned int v44; // edi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned int v54; // r10d
  unsigned int v55; // r8d
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // [rsp+30h] [rbp-18h]
  void *v64; // [rsp+98h] [rbp+50h] BYREF
  __int64 v65; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v66; // [rsp+A8h] [rbp+60h] BYREF

  v2 = 0LL;
  v64 = 0LL;
  v3 = operator new[](0x6B80uLL, 0x4B677844u, PagedPool);
  if ( !v3 )
  {
    v46 = WdLogNewEntry5_WdLowResource(v5, v4, v6, v7);
    WdLogEvent5_WdLowResource(v46);
    v44 = -1073741801;
    goto LABEL_40;
  }
  auto_ptr<_VIDPN_LKG_TOPOLOGY>::reset(&v64, v3);
  v9 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v9 + 8) )
  {
    v47 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v47);
  }
  v10 = *(_QWORD *)(v9 + 8);
  v2 = (unsigned int *)v64;
  PnpRegistryValue = DpiReadPnpRegistryValue(
                       *(_QWORD *)(*(_QWORD *)(v10 + 16) + 176LL),
                       L"VidPnLkgTopology",
                       (char *)v64,
                       0x6B80u,
                       1u);
  v12 = PnpRegistryValue;
  if ( PnpRegistryValue < 0 )
  {
    v48 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v48 + 24) = v12;
    WdLogEvent5_WdDmmEvent(v48);
    memset(v2, 0, 0x6B80uLL);
  }
  v13 = v2;
  v14 = 16LL;
  do
  {
    *v13 = 0;
    v13 += 430;
    --v14;
  }
  while ( v14 );
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v17 = (_QWORD *)((char *)this + 24);
  v62 = Container;
  if ( (_QWORD *)*v17 == v17 || (v18 = *v17 - 8LL) == 0 )
  {
LABEL_35:
    v37 = *(_QWORD *)(Container + 48);
    if ( !*(_QWORD *)(v37 + 8) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v59);
    }
    v38 = DpiWritePnpRegistryValue(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 + 8) + 16LL) + 176LL),
            L"VidPnLkgTopology",
            v2,
            27520LL,
            1);
    v43 = v38;
    v44 = -1073741431;
    if ( v38 == -1073741431 )
    {
      v60 = WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
      *(_QWORD *)(v60 + 24) = v2;
      WdLogEvent5_WdWarning(v60);
    }
    else if ( v38 < 0 )
    {
      v61 = WdLogNewEntry5_WdError(v40);
      *(_QWORD *)(v61 + 24) = v2;
      *(_QWORD *)(v61 + 32) = v43;
      WdLogEvent5_WdError(v61);
      v44 = v43;
    }
    else
    {
      v44 = 0;
    }
    goto LABEL_40;
  }
  while ( 1 )
  {
    v19 = *(_QWORD *)(v18 + 88);
    if ( !v19 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v49);
    }
    v20 = *(unsigned int *)(v19 + 24);
    if ( (unsigned int)v20 >= 0x10 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v50);
    }
    v21 = (char *)&v2[430 * v20];
    if ( *(_DWORD *)v21 )
      goto LABEL_21;
    *(_DWORD *)v21 = 1;
    *((_DWORD *)v21 + 1) = 1;
    *((_DWORD *)v21 + 12) = 0;
    v22 = *(_QWORD *)(v19 + 104);
    v65 = 0LL;
    if ( !v22 )
    {
      v23 = 0LL;
LABEL_45:
      v51 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v51);
      goto LABEL_17;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 96));
    v23 = *(_QWORD *)(v19 + 104);
    v2 = (unsigned int *)v64;
    if ( !v23 )
      goto LABEL_45;
LABEL_17:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v65, v23);
    v24 = *(DMMVIDPNSOURCEMODE **)(v65 + 144);
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 + 18);
      *((_DWORD *)v21 + 2) = v25;
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
          v56 = WdLogNewEntry5_WdError(v24);
          WdLogEvent5_WdError(v56);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v65, 0LL);
          goto LABEL_60;
        }
        *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v21 + 3) = *DMMVIDPNSOURCEMODE::GetTextInfo(v24);
      }
      else
      {
        *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v21 + 12) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v24);
      }
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v65, 0LL);
LABEL_21:
    v27 = *((unsigned int *)v21 + 12);
    if ( (unsigned int)v27 >= 0x10 )
      break;
    v28 = *(_QWORD *)(v18 + 96);
    if ( !v28 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v52);
    }
    v29 = *(_DWORD *)(v28 + 24);
    v66 = 0LL;
    v30 = 104 * v27;
    *(_DWORD *)&v21[v30 + 56] = v29;
    *(_DWORD *)&v21[v30 + 140] = *(_DWORD *)(v18 + 112);
    *(_DWORD *)&v21[v30 + 144] = *(_DWORD *)(v18 + 116);
    *(_DWORD *)&v21[v30 + 136] = *(_DWORD *)(v18 + 104);
    *(_WORD *)&v21[v30 + 148] = *(_WORD *)(v18 + 108);
    v31 = *(_QWORD *)(v28 + 104);
    if ( !v31 )
    {
      v32 = 0LL;
LABEL_49:
      v53 = WdLogNewEntry5_WdAssertion(v16);
      WdLogEvent5_WdAssertion(v53);
      goto LABEL_26;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v31 + 96));
    v32 = *(_QWORD *)(v28 + 104);
    v2 = (unsigned int *)v64;
    if ( !v32 )
      goto LABEL_49;
LABEL_26:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v66, v32);
    v33 = *(_QWORD *)(v66 + 144);
    if ( v33 )
    {
      *(_DWORD *)&v21[v30 + 64] = *(_DWORD *)(v33 + 24);
      *(_OWORD *)&v21[v30 + 72] = *(_OWORD *)(v33 + 72);
      *(_OWORD *)&v21[v30 + 88] = *(_OWORD *)(v33 + 88);
      *(_OWORD *)&v21[v30 + 104] = *(_OWORD *)(v33 + 104);
      *(_QWORD *)&v21[v30 + 120] = *(_QWORD *)(v33 + 120);
    }
    ++*((_DWORD *)v21 + 12);
    v34 = v2 + 12;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(v34 - 11) && i != (_DWORD)v20 )
      {
        v54 = *v34;
        if ( *v34 > 0x10 )
        {
          v57 = WdLogNewEntry5_WdError(v33);
          *(_QWORD *)(v57 + 24) = v20;
          WdLogEvent5_WdError(v57);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v66, 0LL);
          goto LABEL_60;
        }
        v55 = 0;
        if ( v54 )
        {
          while ( 1 )
          {
            v33 = 104LL * v55;
            if ( *(unsigned int *)((char *)v34 + v33 + 8) == v29 )
              break;
            if ( ++v55 >= v54 )
              goto LABEL_30;
          }
          *(v34 - 11) = 0;
        }
      }
LABEL_30:
      v34 += 430;
    }
    v36 = *(DMMVIDPNTOPOLOGY **)(v18 + 8);
    if ( v36 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v18 = 0LL;
    else
      v18 = (__int64)v36 - 8;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v66, 0LL);
    if ( !v18 )
    {
      Container = v62;
      goto LABEL_35;
    }
  }
  v58 = WdLogNewEntry5_WdError(v16);
  *(_QWORD *)(v58 + 24) = v20;
  WdLogEvent5_WdError(v58);
LABEL_60:
  v44 = -1073741823;
LABEL_40:
  operator delete(v2);
  return v44;
}
