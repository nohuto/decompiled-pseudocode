/*
 * XREFs of ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00800A8
 * Callers:
 *     ?SetActiveVidPn@VIDPN_MGR@@QEAAXV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0084E18 (-SetActiveVidPn@VIDPN_MGR@@QEAAXV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784 (-SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$auto_ptr@V?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@@QEAAXPEAV?$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@?$Set@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C0001DE0 (-reset@-$auto_ptr@V-$SetEnumerator@U_D3DKMDT_VIDEO_PRESENT_TARGET@@@-$Set@VDMMVIDEOPRESENTTARGET.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x1C0004248 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C00339A4 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     DpiReadPnpRegistryValue @ 0x1C00D90C0 (DpiReadPnpRegistryValue.c)
 */

__int64 __fastcall DMMVIDPNTOPOLOGY::SaveAsLkg(DMMVIDPNTOPOLOGY *this)
{
  unsigned int *ValueData; // rbx
  PVOID v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  int PnpRegistryValue; // eax
  __int64 v9; // rdi
  unsigned int *v10; // rax
  __int64 v11; // rdx
  __int64 Container; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r14
  __int64 v17; // r12
  char *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  DMMVIDPNSOURCEMODE *v21; // rcx
  int v22; // edx
  int v23; // edx
  __int64 v24; // r14
  __int64 v25; // r15
  int v26; // r13d
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rcx
  unsigned int *v31; // rdx
  unsigned int i; // r9d
  DMMVIDPNTOPOLOGY *v33; // rsi
  __int64 v34; // rdi
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rsi
  unsigned int v41; // edi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned int v51; // r10d
  unsigned int v52; // r8d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+30h] [rbp-18h]
  PVOID v62; // [rsp+98h] [rbp+50h] BYREF
  __int64 v63; // [rsp+A0h] [rbp+58h] BYREF
  __int64 v64; // [rsp+A8h] [rbp+60h] BYREF

  ValueData = 0LL;
  v62 = 0LL;
  v3 = operator new(0x6B80uLL, 0x4B677844u, PagedPool);
  if ( !v3 )
  {
    v43 = WdLogNewEntry5_WdLowResource(v4);
    WdLogEvent5_WdLowResource(v43);
    v41 = -1073741801;
    goto LABEL_42;
  }
  auto_ptr<Set<DMMVIDEOPRESENTTARGET>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_TARGET>>::reset(&v62, v3);
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    v44 = WdLogNewEntry5_WdAssertion(v5);
    WdLogEvent5_WdAssertion(v44);
  }
  v7 = *(_QWORD *)(v6 + 8);
  ValueData = (unsigned int *)v62;
  PnpRegistryValue = DpiReadPnpRegistryValue(
                       *(_QWORD *)(*(_QWORD *)(v7 + 16) + 192LL),
                       L"VidPnLkgTopology",
                       v62,
                       27520LL,
                       1);
  v9 = PnpRegistryValue;
  if ( PnpRegistryValue < 0 )
  {
    v45 = WdLogNewEntry5_WdDmmEvent();
    *(_QWORD *)(v45 + 24) = v9;
    WdLogEvent5_WdDmmEvent(v45);
    memset(ValueData, 0, 0x6B80uLL);
  }
  v10 = ValueData;
  v11 = 16LL;
  do
  {
    *v10 = 0;
    v10 += 430;
    --v11;
  }
  while ( v11 );
  Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)this + 160);
  v14 = (_QWORD *)((char *)this + 24);
  v60 = Container;
  if ( (_QWORD *)*v14 == v14 || (v15 = *v14 - 8LL) == 0 )
  {
LABEL_35:
    v34 = *(_QWORD *)(Container + 48);
    if ( !*(_QWORD *)(v34 + 8) )
    {
      v56 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v56);
    }
    v35 = RtlWriteRegistryValue(
            0,
            *(PCWSTR *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL) + 192LL) + 64LL) + 520LL),
            L"VidPnLkgTopology",
            3u,
            ValueData,
            0x6B80u);
    v40 = v35;
    if ( v35 < 0 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v57[3] = v40;
      v57[4] = 1LL;
      v57[5] = 0LL;
      v57[6] = 0LL;
      WdLogEvent5_WdEvent(v57);
    }
    v41 = -1073741431;
    if ( (_DWORD)v40 == -1073741431 )
    {
      v58 = WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
      *(_QWORD *)(v58 + 24) = ValueData;
      WdLogEvent5_WdWarning(v58);
    }
    else if ( (int)v40 < 0 )
    {
      v59 = WdLogNewEntry5_WdError(v37);
      *(_QWORD *)(v59 + 24) = ValueData;
      *(_QWORD *)(v59 + 32) = v40;
      WdLogEvent5_WdError(v59);
      v41 = v40;
    }
    else
    {
      v41 = 0;
    }
    goto LABEL_42;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v15 + 88);
    if ( !v16 )
    {
      v46 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v46);
    }
    v17 = *(unsigned int *)(v16 + 24);
    if ( (unsigned int)v17 >= 0x10 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v47);
    }
    v18 = (char *)&ValueData[430 * v17];
    if ( *(_DWORD *)v18 )
      goto LABEL_21;
    *(_DWORD *)v18 = 1;
    *((_DWORD *)v18 + 1) = 1;
    *((_DWORD *)v18 + 12) = 0;
    v19 = *(_QWORD *)(v16 + 104);
    v63 = 0LL;
    if ( !v19 )
    {
      v20 = 0LL;
LABEL_47:
      v48 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v48);
      goto LABEL_17;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v19 + 96));
    v20 = *(_QWORD *)(v16 + 104);
    ValueData = (unsigned int *)v62;
    if ( !v20 )
      goto LABEL_47;
LABEL_17:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, v20);
    v21 = *(DMMVIDPNSOURCEMODE **)(v63 + 144);
    if ( v21 )
    {
      v22 = *((_DWORD *)v21 + 18);
      *((_DWORD *)v18 + 2) = v22;
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 1 )
        {
          v53 = WdLogNewEntry5_WdError(v21);
          WdLogEvent5_WdError(v53);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
          goto LABEL_62;
        }
        *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v18 + 3) = *DMMVIDPNSOURCEMODE::GetTextInfo(v21);
      }
      else
      {
        *(struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(v18 + 12) = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(v21);
      }
    }
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v63, 0LL);
LABEL_21:
    v24 = *((unsigned int *)v18 + 12);
    if ( (unsigned int)v24 >= 0x10 )
      break;
    v25 = *(_QWORD *)(v15 + 96);
    if ( !v25 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v49);
    }
    v26 = *(_DWORD *)(v25 + 24);
    v64 = 0LL;
    v27 = 104 * v24;
    *(_DWORD *)&v18[v27 + 56] = v26;
    *(_DWORD *)&v18[v27 + 140] = *(_DWORD *)(v15 + 112);
    *(_DWORD *)&v18[v27 + 144] = *(_DWORD *)(v15 + 116);
    *(_DWORD *)&v18[v27 + 136] = *(_DWORD *)(v15 + 104);
    *(_WORD *)&v18[v27 + 148] = *(_WORD *)(v15 + 108);
    v28 = *(_QWORD *)(v25 + 104);
    if ( !v28 )
    {
      v29 = 0LL;
LABEL_51:
      v50 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v50);
      goto LABEL_26;
    }
    _InterlockedIncrement((volatile signed __int32 *)(v28 + 96));
    v29 = *(_QWORD *)(v25 + 104);
    ValueData = (unsigned int *)v62;
    if ( !v29 )
      goto LABEL_51;
LABEL_26:
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v64, v29);
    v30 = *(_QWORD *)(v64 + 144);
    if ( v30 )
    {
      *(_DWORD *)&v18[v27 + 64] = *(_DWORD *)(v30 + 24);
      *(_OWORD *)&v18[v27 + 72] = *(_OWORD *)(v30 + 72);
      *(_OWORD *)&v18[v27 + 88] = *(_OWORD *)(v30 + 88);
      *(_OWORD *)&v18[v27 + 104] = *(_OWORD *)(v30 + 104);
      *(_QWORD *)&v18[v27 + 120] = *(_QWORD *)(v30 + 120);
    }
    ++*((_DWORD *)v18 + 12);
    v31 = ValueData + 12;
    for ( i = 0; i < 0x10; ++i )
    {
      if ( *(v31 - 11) && i != (_DWORD)v17 )
      {
        v51 = *v31;
        if ( *v31 > 0x10 )
        {
          v54 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v54 + 24) = v17;
          WdLogEvent5_WdError(v54);
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v64, 0LL);
          goto LABEL_62;
        }
        v52 = 0;
        if ( v51 )
        {
          while ( 1 )
          {
            v30 = 104LL * v52;
            if ( *(unsigned int *)((char *)v31 + v30 + 8) == v26 )
              break;
            if ( ++v52 >= v51 )
              goto LABEL_30;
          }
          *(v31 - 11) = 0;
        }
      }
LABEL_30:
      v31 += 430;
    }
    v33 = *(DMMVIDPNTOPOLOGY **)(v15 + 8);
    if ( v33 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
      v15 = 0LL;
    else
      v15 = (__int64)v33 - 8;
    auto_rc<DMMVIDPNTARGETMODESET>::reset(&v64, 0LL);
    if ( !v15 )
    {
      Container = v60;
      goto LABEL_35;
    }
  }
  v55 = WdLogNewEntry5_WdError(v13);
  *(_QWORD *)(v55 + 24) = v17;
  WdLogEvent5_WdError(v55);
LABEL_62:
  v41 = -1073741823;
LABEL_42:
  operator delete(ValueData);
  return v41;
}
