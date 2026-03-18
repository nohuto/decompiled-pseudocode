/*
 * XREFs of DmmGetMultisamplingMethodSetFromClientVidPnSource @ 0x1C0176248
 * Callers:
 *     DxgkGetMultisampleMethodList @ 0x1C013BF40 (DxgkGetMultisampleMethodList.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C000741C (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C000D778 (-FindBestMatch@DMMVIDPNSOURCEMODESET@@QEAAPEBVDMMVIDPNSOURCEMODE@@IIW4_D3DDDIFORMAT@@W4_D3DKMDT_.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall DmmGetMultisamplingMethodSetFromClientVidPnSource(
        DXGADAPTER *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        enum _D3DDDIFORMAT a5,
        unsigned __int64 a6,
        void *a7,
        struct D3DKMDT_HVIDPN__ *a8)
{
  __int64 v8; // r15
  struct D3DKMDT_HVIDPN__ *v10; // r12
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  struct VIDPN_MGR *v19; // r13
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rax
  struct D3DKMDT_HVIDPN__ *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  DMMVIDPNSOURCEMODESET *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rax
  const struct DMMVIDPNSOURCEMODE *BestMatch; // rax
  __int64 v37; // rcx
  _QWORD *v38; // rax
  int v39; // eax
  __int64 v40; // rcx
  __int64 v41; // r9
  _QWORD *v42; // rax
  struct D3DKMDT_HVIDPN__ *v43; // rdx
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r13
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  DMMVIDPNSOURCEMODESET *v60; // [rsp+30h] [rbp-10h] BYREF
  __int64 v61; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v62; // [rsp+80h] [rbp+40h] BYREF
  int v63; // [rsp+84h] [rbp+44h]
  unsigned int v64; // [rsp+90h] [rbp+50h]
  unsigned int v65; // [rsp+98h] [rbp+58h]

  v65 = a4;
  v64 = a3;
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
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    WdLogEvent5_WdAssertion(v17);
  }
  v18 = *((_QWORD *)this + 247);
  if ( !v18 )
  {
    v11 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v11 + 24) = this;
    goto LABEL_7;
  }
  v19 = *(struct VIDPN_MGR **)(v18 + 88);
  if ( v19 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v61, *(_QWORD *)(v18 + 88));
    a8 = 0LL;
    ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                               v19,
                                               (__int64 *)&a8,
                                               v21,
                                               v22);
    v25 = ClientVidPnFromLastClientCommitedVidPn;
    if ( ClientVidPnFromLastClientCommitedVidPn >= 0 )
    {
      v27 = a8;
      v28 = IndexedSet<DMMVIDPNSOURCE>::FindById(*((_QWORD *)a8 + 38), v8);
      v30 = v28;
      if ( v28 )
      {
        v32 = *(_QWORD *)(v28 + 104);
        if ( v32 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v32 + 96));
          v33 = *(DMMVIDPNSOURCEMODESET **)(v30 + 104);
          v27 = a8;
        }
        else
        {
          v33 = 0LL;
        }
        v34 = *((_QWORD *)v33 + 18);
        v60 = v33;
        if ( v34 )
        {
          BestMatch = DMMVIDPNSOURCEMODESET::FindBestMatch(
                        v33,
                        v64,
                        v65,
                        a5,
                        (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(v34 + 72));
          if ( BestMatch )
          {
            v39 = DMMVIDPNSOURCEMODESET::PinMode(v33, *((_DWORD *)BestMatch + 6));
            v25 = v39;
            if ( v39 >= 0 )
            {
              v63 = -1;
              v62 = v8;
              if ( v27 == (struct D3DKMDT_HVIDPN__ *)-88LL )
                v43 = 0LL;
              else
                v43 = v27;
              LOBYTE(v41) = 1;
              v44 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)v19, v43, 3LL, v41, &v62);
              v49 = v44;
              if ( v44 >= 0 )
              {
                v52 = *(_QWORD *)(v30 + 168) >> 3;
                if ( v10 )
                  *(_QWORD *)v10 = 8 * v52;
                v53 = a6;
                if ( a6 >= v52 )
                {
                  if ( a7 )
                    memmove(a7, *(const void **)(v30 + 160), 8 * v52);
                  LODWORD(v25) = 0;
                }
                else
                {
                  v54 = WdLogNewEntry5_WdDmmEvent(v46);
                  *(_QWORD *)(v54 + 24) = v53;
                  *(_QWORD *)(v54 + 32) = v52;
                  WdLogEvent5_WdDmmEvent(v54);
                  if ( !v10 )
                  {
                    v59 = WdLogNewEntry5_WdAssertion(v56, v55, v57, v58);
                    WdLogEvent5_WdAssertion(v59);
                  }
                  LODWORD(v25) = -1073741789;
                }
              }
              else
              {
                if ( v44 == -1071774970 )
                {
                  v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v46, v45, v47, v48);
                  v50[3] = v27;
                  v50[4] = v8;
                  v50[5] = this;
                  WdLogEvent5_WdWarning(v50);
                }
                else
                {
                  v51 = (_QWORD *)WdLogNewEntry5_WdError(v46);
                  v51[3] = v64;
                  v51[4] = v65;
                  v51[5] = a5;
                  v51[6] = v8;
                  v51[7] = v49;
                  WdLogEvent5_WdError(v51);
                }
                LODWORD(v25) = v49;
              }
            }
            else
            {
              v42 = (_QWORD *)WdLogNewEntry5_WdError(v40);
              v42[4] = v64;
              v42[5] = v65;
              v42[6] = a5;
              v42[3] = v8;
              v42[7] = v25;
              WdLogEvent5_WdError(v42);
            }
          }
          else
          {
            v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v37);
            v38[3] = v64;
            v38[4] = v65;
            v38[5] = a5;
            v38[6] = v8;
            v38[7] = this;
            WdLogEvent5_WdDmmEvent(v38);
            LODWORD(v25) = -1071774970;
          }
        }
        else
        {
          v35 = WdLogNewEntry5_WdError(v29);
          *(_QWORD *)(v35 + 24) = v30;
          WdLogEvent5_WdError(v35);
          LODWORD(v25) = 1075708679;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v60, 0LL);
      }
      else
      {
        v31 = WdLogNewEntry5_WdError(v29);
        *(_QWORD *)(v31 + 24) = v8;
        WdLogEvent5_WdError(v31);
        LODWORD(v25) = -1071774972;
      }
    }
    else
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v24);
      *(_QWORD *)(v26 + 24) = v25;
      WdLogEvent5_WdDmmEvent(v26);
    }
    auto_rc<DMMVIDPN>::reset((__int64 *)&a8, 0LL);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v61 + 40));
    return (unsigned int)v25;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdError(v20);
    return 3223192373LL;
  }
}
