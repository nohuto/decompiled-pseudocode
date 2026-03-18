/*
 * XREFs of ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x1C0089E20
 * Callers:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0089D68 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     ?Functionalize@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A118 (-Functionalize@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C008AB70 (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ @ 0x1C008ADF0 (-_FillPathsActiveFlags@CCD_TOPOLOGY@@AEAAJXZ.c)
 *     ?_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z @ 0x1C00B68E0 (-_FillTopology@CCD_BTL@@AEAAJPEAVCCD_TOPOLOGY@@PEAU_D3DKMT_AUGMENT_CDSJ@@K@Z.c)
 *     ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B88A0 (-_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@C.c)
 *     ?_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z @ 0x1C00B89E4 (-_GetOverflowTopology@CCD_RECENT_TOPOLOGY_RETRIEVER@@AEAAPEAVCCD_TOPOLOGY@@G@Z.c)
 *     ?HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z @ 0x1C00DB89C (-HMDDisplayOnOff@@YAJAEBU_LUID@@IW4_HMD_POWER_REQUEST@@@Z.c)
 *     ?RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z @ 0x1C00DB948 (-RetrieveActiveTopologyNoRetryNeeded@CCD_BTL@@SAJ_N00PEAVCCD_TOPOLOGY@@@Z.c)
 *     ?DisableDWMVirtualModeOnVidPnSource@@YAJII@Z @ 0x1C00DE56C (-DisableDWMVirtualModeOnVidPnSource@@YAJII@Z.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::Reserve(CCD_TOPOLOGY *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // r14
  __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // r15d
  _OWORD *v10; // rbp
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _QWORD *v22; // rcx
  __int64 v23; // rax
  unsigned __int16 v24; // ax
  __int64 v25; // rax
  unsigned __int16 v26; // ax
  __int64 v27; // rax
  _OWORD *v28; // rax
  _OWORD *v29; // rcx
  __int64 v30; // r8
  __int128 v31; // xmm1
  _BYTE v32[272]; // [rsp+20h] [rbp-128h] BYREF

  v4 = 0;
  v5 = a2;
  if ( *((_BYTE *)this + 72) )
  {
    v7 = *((_QWORD *)this + 8);
    if ( v7 )
      v8 = *(_WORD *)(v7 + 22);
    else
      v8 = 0;
    if ( v8 < (unsigned __int16)a2
      && (v9 = (unsigned __int16)a2,
          (v10 = operator new(216LL * ((unsigned __int16)a2 - 1) + 264, 0x63644356u, PagedPool)) != 0LL) )
    {
      if ( v8 )
      {
        v28 = (_OWORD *)*((_QWORD *)this + 8);
        v29 = v10;
        v30 = 2LL;
        do
        {
          *v29 = *v28;
          v29[1] = v28[1];
          v29[2] = v28[2];
          v29[3] = v28[3];
          v29[4] = v28[4];
          v29[5] = v28[5];
          v29[6] = v28[6];
          v29 += 8;
          v31 = v28[7];
          v28 += 8;
          *(v29 - 1) = v31;
          --v30;
        }
        while ( v30 );
        *(_QWORD *)v29 = *(_QWORD *)v28;
        memmove((char *)v10 + 264, (const void *)(*((_QWORD *)this + 8) + 264LL), 216LL * (v8 - 1));
      }
      else
      {
        memset(v32, 0, 0x108uLL);
        v11 = v32;
        v12 = v10;
        v13 = 2LL;
        do
        {
          v14 = v11[1];
          *v12 = *v11;
          v15 = v11[2];
          v12[1] = v14;
          v16 = v11[3];
          v12[2] = v15;
          v17 = v11[4];
          v12[3] = v16;
          v18 = v11[5];
          v12[4] = v17;
          v19 = v11[6];
          v12[5] = v18;
          v20 = v11[7];
          v11 += 8;
          v12[6] = v19;
          v12 += 8;
          *(v12 - 1) = v20;
          --v13;
        }
        while ( v13 );
        *(_QWORD *)v12 = *(_QWORD *)v11;
        *((_DWORD *)v10 + 9) = 0;
        *((_QWORD *)v10 + 5) = 0LL;
      }
      *((_WORD *)v10 + 11) = v5;
      memset((char *)v10 + 216 * v8 + 48, 0, 216LL * (v9 - v8));
      operator delete(*((void **)this + 8));
      *((_QWORD *)this + 8) = v10;
      return *((unsigned __int16 *)v10 + 11);
    }
    else
    {
      return v8;
    }
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v22[3] = this;
    v22[4] = *((_QWORD *)this + 8);
    v23 = *((_QWORD *)this + 8);
    if ( v23 )
      v24 = *(_WORD *)(v23 + 20);
    else
      v24 = 0;
    v22[5] = v24;
    v25 = *((_QWORD *)this + 8);
    if ( v25 )
      v26 = *(_WORD *)(v25 + 22);
    else
      v26 = 0;
    v22[6] = v26;
    v22[7] = v5;
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
      return *(unsigned __int16 *)(v27 + 22);
    return v4;
  }
}
