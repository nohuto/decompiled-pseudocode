/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C0163654
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C0163320 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000AB7C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v16; // rax
  unsigned int *v17; // r12
  __int64 v18; // rax
  __int64 (__fastcall *v19)(void *const, __int64 *, __int64 *); // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  unsigned int *v24; // rdi
  __int64 (__fastcall *v25)(__int64, unsigned int *const *); // rax
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  unsigned int *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  __int64 (__fastcall *v36)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // r9
  __int64 v44; // r8
  __int64 v45; // rax
  int v46; // eax
  char v48[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v49; // [rsp+38h] [rbp-28h]
  void (__fastcall *v50)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v51; // [rsp+48h] [rbp-18h]
  int v52; // [rsp+50h] [rbp-10h]
  unsigned int v53; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v54; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v55; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 2571LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v12 + 24) = 2572LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v13 + 24) = 2573LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2574LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 2575LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v18 + 24) = 2576LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v54 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v55 = 0LL;
  v20 = v19(a2, &v54, &v55);
  v22 = v20;
  if ( v20 >= 0 )
  {
    v24 = 0LL;
    v49 = 0LL;
    v50 = 0LL;
    v25 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v55 + 8);
    v51 = 0LL;
    v52 = 0;
    v48[0] = 0;
    v26 = v25(v54, &a6);
    v22 = v26;
    if ( v26 >= 0 )
    {
      v29 = a6;
      if ( !a6 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v27);
        *(_QWORD *)(v30 + 24) = 2619LL;
        WdLogEvent5_WdAssertion(v30);
        v29 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v48,
        (__int64)v29,
        *(_QWORD *)(v55 + 24),
        v54);
      v53 = -1;
      v24 = v49;
      if ( v49 )
      {
        while ( 1 )
        {
          v35 = *v24;
          v36 = *a4;
          a6 = 0LL;
          v37 = v36(a3, v35, &a6);
          v22 = v37;
          if ( v37 == -1071774919 )
          {
            if ( a6 )
            {
              v39 = WdLogNewEntry5_WdAssertion(v38);
              *(_QWORD *)(v39 + 24) = 2644LL;
              WdLogEvent5_WdAssertion(v39);
            }
          }
          else if ( v37 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v40 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v55 + 16))(v54, v24, &a7);
          v22 = v40;
          if ( v40 < 0 )
          {
            v28 = (_QWORD *)WdLogNewEntry5_WdError(v41);
            v28[3] = v24;
            v28[4] = v54;
LABEL_36:
            v28[5] = v22;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v48,
            (__int64)a7,
            *(_QWORD *)(v55 + 24),
            v54);
          v24 = v49;
          if ( !v49 )
            goto LABEL_27;
        }
        v42 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v35,
                1LL,
                &v53);
        v22 = v42;
        if ( v42 < 0 )
        {
LABEL_35:
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v38);
          v28[3] = a3;
          v28[4] = v35;
          goto LABEL_36;
        }
        v44 = v53;
        if ( v53 == -1 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v38);
          *(_QWORD *)(v45 + 24) = 2676LL;
          WdLogEvent5_WdAssertion(v45);
          v44 = v53;
        }
        LOBYTE(v43) = a5;
        v46 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v35,
                v44,
                v43);
        v22 = v46;
        if ( v46 < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v32);
          v28[3] = v35;
          v28[4] = v53;
          v28[5] = a3;
          v28[6] = v22;
          goto LABEL_37;
        }
LABEL_27:
        if ( v53 == -1 )
          goto LABEL_38;
        *v15 = v53;
        LODWORD(v22) = 0;
        *v17 = v35;
      }
      else
      {
LABEL_38:
        LODWORD(v22) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v32, v31, v33, v34) + 24) = a3;
      }
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v28[3] = v54;
      v28[4] = v22;
LABEL_37:
      WdLogEvent5_WdError(v28);
    }
    if ( v48[0] )
      v50(v51, v24);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v23 + 24) = a2;
    *(_QWORD *)(v23 + 32) = v22;
    WdLogEvent5_WdError(v23);
  }
  return (unsigned int)v22;
}
