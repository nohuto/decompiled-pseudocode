/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C013B22C
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C013A5E8 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C000E77C (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
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
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD *v30; // rax
  unsigned int *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  __int64 (__fastcall *v38)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // r8
  __int64 v51; // rax
  int v52; // eax
  char v54[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v55; // [rsp+38h] [rbp-28h]
  void (__fastcall *v56)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v57; // [rsp+48h] [rbp-18h]
  int v58; // [rsp+50h] [rbp-10h]
  unsigned int v59; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v60; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v61; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v11 + 24) = 2496LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2497LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 2498LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v14 + 24) = 2499LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v16 + 24) = 2500LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v18 + 24) = 2501LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v60 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v61 = 0LL;
  v20 = v19(a2, &v60, &v61);
  v22 = v20;
  if ( v20 >= 0 )
  {
    v24 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v25 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v61 + 8);
    v57 = 0LL;
    v58 = 0;
    v54[0] = 0;
    v26 = v25(v60, &a6);
    v22 = v26;
    if ( v26 >= 0 )
    {
      v31 = a6;
      if ( !a6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v27, 0LL, v28, v29);
        *(_QWORD *)(v32 + 24) = 2544LL;
        WdLogEvent5_WdAssertion(v32);
        v31 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v54,
        (__int64)v31,
        *(_QWORD *)(v61 + 24),
        v60);
      v59 = -1;
      v24 = v55;
      if ( v55 )
      {
        while ( 1 )
        {
          v37 = *v24;
          v38 = *a4;
          a6 = 0LL;
          v39 = v38(a3, v37, &a6);
          v22 = v39;
          if ( v39 == -1071774919 )
          {
            if ( a6 )
            {
              v44 = WdLogNewEntry5_WdAssertion(v41, v40, v42, v43);
              *(_QWORD *)(v44 + 24) = 2569LL;
              WdLogEvent5_WdAssertion(v44);
            }
          }
          else if ( v39 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v45 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v61 + 16))(v60, v24, &a7);
          v22 = v45;
          if ( v45 < 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v46);
            v30[3] = v24;
            v30[4] = v60;
LABEL_36:
            v30[5] = v22;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v54,
            (__int64)a7,
            *(_QWORD *)(v61 + 24),
            v60);
          v24 = v55;
          if ( !v55 )
            goto LABEL_27;
        }
        v47 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v37,
                1LL,
                &v59);
        v22 = v47;
        if ( v47 < 0 )
        {
LABEL_35:
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v41);
          v30[3] = a3;
          v30[4] = v37;
          goto LABEL_36;
        }
        v50 = v59;
        if ( v59 == -1 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v41, v48, 0xFFFFFFFFLL, v49);
          *(_QWORD *)(v51 + 24) = 2601LL;
          WdLogEvent5_WdAssertion(v51);
          v50 = v59;
        }
        LOBYTE(v49) = a5;
        v52 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v37,
                v50,
                v49);
        v22 = v52;
        if ( v52 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v34);
          v30[3] = v37;
          v30[4] = v59;
          v30[5] = a3;
          v30[6] = v22;
          goto LABEL_37;
        }
LABEL_27:
        if ( v59 == -1 )
          goto LABEL_38;
        *v15 = v59;
        LODWORD(v22) = 0;
        *v17 = v37;
      }
      else
      {
LABEL_38:
        LODWORD(v22) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v34, v33, v35, v36) + 24) = a3;
      }
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v27);
      v30[3] = v60;
      v30[4] = v22;
LABEL_37:
      WdLogEvent5_WdError(v30);
    }
    if ( v54[0] )
      v56(v57, v24);
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
