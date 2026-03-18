/*
 * XREFs of ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C0163084
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00C4FF0 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0163320 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
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
        unsigned int (*a10)[16])
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int *v22; // rdi
  unsigned int *v23; // rdi
  __int64 i; // rcx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  _QWORD *v28; // rax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v39; // [rsp+28h] [rbp-B0h]
  unsigned __int16 v40; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v41; // [rsp+50h] [rbp-88h] BYREF
  struct D3DKMDT_HVIDPN__ *v42; // [rsp+58h] [rbp-80h]
  unsigned int Src[16]; // [rsp+60h] [rbp-78h] BYREF

  v42 = a1;
  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v13 + 24) = 2977LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2978LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !a3 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v15 + 24) = 2979LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 2980LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( !a5 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 2981LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( !a6 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 2982LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( a7 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v19 + 24) = 2983LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !a9 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v20 + 24) = 2984LL;
    WdLogEvent5_WdAssertion(v20);
  }
  *a9 = 0LL;
  if ( a10 )
  {
    v21 = 16LL;
    v22 = (unsigned int *)a10;
    while ( v21 )
    {
      *v22++ = -1;
      --v21;
    }
  }
  v23 = Src;
  v41 = 0LL;
  for ( i = 16LL; i; --i )
    *v23++ = -1;
  v25 = AugmentVidPnTopologyOnNoLkg(a3, a4, a5, a6, a7, v39, v40, a8, &v41, Src);
  v27 = v25;
  if ( v25 >= 0 )
  {
    if ( !v41 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v30 + 24) = 3047LL;
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
      v37 = WdLogNewEntry5_WdAssertion(v33);
      *(_QWORD *)(v37 + 24) = 3062LL;
      WdLogEvent5_WdAssertion(v37);
    }
    *a9 = v41;
    if ( a10 )
      memmove(a10, Src, 0x40uLL);
    return 0LL;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
    v28[3] = v42;
    v28[4] = a7;
    v28[5] = a5;
    v28[6] = v27;
    WdLogEvent5_WdDmmEvent(v28);
    return (unsigned int)v27;
  }
}
