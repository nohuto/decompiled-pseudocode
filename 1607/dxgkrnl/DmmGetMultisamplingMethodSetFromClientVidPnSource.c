/*
 * XREFs of DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C01A3FE4
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C0163DD0 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00019D8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0005ACC (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CCC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000AC70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C0081690 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085190 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        void *a7,
        struct D3DKMDT_HVIDPN__ *a8)
{
  __int64 v8; // r15
  struct D3DKMDT_HVIDPN__ *v10; // r12
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  const struct DMMVIDPN **v16; // r13
  __int64 v17; // rax
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rax
  struct D3DKMDT_HVIDPN__ *v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  DMMVIDPNSOURCEMODESET *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  struct D3DKMDT_HVIDPN__ *v37; // rdx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r13
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  unsigned __int64 v46; // rbx
  unsigned __int64 v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  DMMVIDPNSOURCEMODESET *v51; // [rsp+30h] [rbp-10h] BYREF
  __int64 v52; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v53; // [rsp+80h] [rbp+40h] BYREF
  int v54; // [rsp+84h] [rbp+44h]
  unsigned int v55; // [rsp+90h] [rbp+50h]
  unsigned int v56; // [rsp+98h] [rbp+58h]

  v56 = a4;
  v55 = a3;
  v8 = a2;
  if ( a7 )
    memset(a7, 0, 8 * a6);
  v10 = a8;
  if ( a8 )
    *(_QWORD *)a8 = 0LL;
  if ( !this )
  {
    v11 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v11 + 24) = 0LL;
LABEL_7:
    WdLogEvent5_WdError(v11);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_QWORD *)this + 266);
  if ( !v15 )
  {
    v11 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v16 = *(const struct DMMVIDPN ***)(v15 + 88);
  if ( v16 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v52, *(_QWORD *)(v15 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v16,
                                               (__int64 *)&a8);
    v20 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v22 = a8;
      v23 = IndexedSet<DMMVIDPNSOURCE>::FindById(*((_QWORD *)a8 + 38), v8);
      v25 = v23;
      if ( v23 )
      {
        v27 = *(_QWORD *)(v23 + 104);
        if ( v27 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v27 + 96));
          v28 = *(DMMVIDPNSOURCEMODESET **)(v25 + 104);
          v22 = a8;
        }
        else
        {
          v28 = 0LL;
        }
        v29 = *((_QWORD *)v28 + 18);
        v51 = v28;
        if ( v29 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v28,
                        v55,
                        v56,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v29 + 72));
          if ( BestMatch )
          {
            v34 = DMMVIDPNSOURCEMODESET::PinMode(v28, *((_DWORD *)BestMatch + 6));
            v20 = v34;
            if ( v34 >= 0 )
            {
              v54 = -1;
              v53 = v8;
              if ( v22 == (struct D3DKMDT_HVIDPN__ *)-88LL )
                v37 = 0LL;
              else
                v37 = v22;
              v38 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)v16, v37, 3, 1, &v53);
              v43 = v38;
              if ( v38 >= 0 )
              {
                v46 = *(_QWORD *)(v25 + 168) >> 3;
                if ( v10 )
                  *(_QWORD *)v10 = 8 * v46;
                v47 = a6;
                if ( a6 >= v46 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v25 + 160), 8 * v46);
                  LODWORD(v20) = 0;
                }
                else
                {
                  v48 = WdLogNewEntry5_WdDmmEvent(v40);
                  *(_QWORD *)(v48 + 24) = v47;
                  *(_QWORD *)(v48 + 32) = v46;
                  WdLogEvent5_WdDmmEvent(v48);
                  if ( !v10 )
                  {
                    v50 = WdLogNewEntry5_WdAssertion(v49);
                    WdLogEvent5_WdAssertion(v50);
                  }
                  LODWORD(v20) = -1073741789;
                }
              }
              else
              {
                if ( v38 == -1071774970 )
                {
                  v44 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41, v42);
                  v44[3] = v22;
                  v44[4] = v8;
                  v44[5] = this;
                  WdLogEvent5_WdWarning(v44);
                }
                else
                {
                  v45 = (_QWORD *)WdLogNewEntry5_WdError(v40);
                  v45[3] = v55;
                  v45[4] = v56;
                  v45[5] = a5;
                  v45[6] = v8;
                  v45[7] = v43;
                  WdLogEvent5_WdError(v45);
                }
                LODWORD(v20) = v43;
              }
            }
            else
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdError(v35);
              v36[4] = v55;
              v36[5] = v56;
              v36[6] = a5;
              v36[3] = v8;
              v36[7] = v20;
              WdLogEvent5_WdError(v36);
            }
          }
          else
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v32);
            v33[3] = v55;
            v33[4] = v56;
            v33[5] = a5;
            v33[6] = v8;
            v33[7] = this;
            WdLogEvent5_WdDmmEvent(v33);
            LODWORD(v20) = -1071774970;
          }
        }
        else
        {
          v30 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v30 + 24) = v25;
          WdLogEvent5_WdError(v30);
          LODWORD(v20) = 1075708679;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v51, 0LL);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v26 + 24) = v8;
        WdLogEvent5_WdError(v26);
        LODWORD(v20) = -1071774972;
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdDmmEvent(v19);
      *(_QWORD *)(v21 + 24) = v20;
      WdLogEvent5_WdDmmEvent(v21);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v52 + 40));
    return (unsigned int)v20;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v17 + 24) = this;
    WdLogEvent5_WdError(v17);
    return 3223192373LL;
  }
}
