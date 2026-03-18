/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY03I@Z @ 0x1C013A37C
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY03IPEAE@Z @ 0x1C00D3A7C (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C013A5E8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 */

__int64 __fastcall AugmentVidPnTopology(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        void *a5,
        const struct _DXGDMM_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int64 *const a9,
        unsigned int (*a10)[4])
{
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rsi
  _QWORD *v28; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // [rsp+28h] [rbp-80h]
  unsigned __int16 v40; // [rsp+30h] [rbp-78h]
  unsigned __int64 v41; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v42[4]; // [rsp+58h] [rbp-50h] BYREF

  if ( !a1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 2902LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 2903LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a3 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 2904LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a4 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = 2905LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a5 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 2906LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( !a6 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 2907LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( a7 == -1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v20 + 24) = 2908LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !a9 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 2909LL;
    WdLogEvent5_WdAssertion(v21);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    *(_QWORD *)a10 = -1LL;
    *(_QWORD *)&(*a10)[2] = -1LL;
  }
  v41 = 0LL;
  memset(v42, 255, sizeof(v42));
  v22 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v39, v40, a8, &v41, v42);
  v27 = v22;
  if ( v22 >= 0 )
  {
    if ( !v41 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
      *(_QWORD *)(v30 + 24) = 2972LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a4)(a3, a7, &v41);
    v36 = v31;
    if ( v31 >= 0 )
    {
      v38 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      *(_QWORD *)(v38 + 24) = a7;
      *(_QWORD *)(v38 + 32) = v36;
      WdLogEvent5_WdWarning(v38);
    }
    else if ( !v41 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v33, v32, v34, v35);
      *(_QWORD *)(v37 + 24) = 2987LL;
      WdLogEvent5_WdAssertion(v37);
    }
    *a9 = v41;
    if ( a10 )
      *(_OWORD *)a10 = *(_OWORD *)v42;
    return 0LL;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v24);
    v28[3] = a1;
    v28[4] = a7;
    v28[5] = a5;
    v28[6] = v27;
    WdLogEvent5_WdDmmEvent(v28);
    return (unsigned int)v27;
  }
}
