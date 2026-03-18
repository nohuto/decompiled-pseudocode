/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_ @ 0x1C009D960
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004E90 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00285FC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0096618 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C009D610 (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveAdaptersCallback_(
        struct DXGADAPTER *a1,
        CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // rax
  int v13; // r15d
  unsigned int v14; // r14d
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r12
  struct VIDPN_MGR *v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v22; // rcx
  __int64 v23; // r15
  int v24; // r15d
  unsigned int v25; // r14d
  int v26; // eax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _BYTE v31[64]; // [rsp+20h] [rbp-40h] BYREF
  struct DMMVIDPN *v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
  v9 = 0;
  if ( v4 < 0 )
  {
    if ( v4 == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = a1;
      v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
      v10[5] = *((unsigned int *)a1 + 63);
      v10[6] = this;
    }
    else
    {
      v9 = v4;
    }
    goto LABEL_4;
  }
  if ( !*((_BYTE *)a1 + 1909) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v12 = *((_QWORD *)a1 + 247);
    if ( v12 )
    {
      if ( *((_BYTE *)this + 16) || *(_BYTE *)(v12 + 133) )
      {
        v18 = *(struct VIDPN_MGR **)(v12 + 88);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v33, (__int64)v18);
        v32 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(
                                                   v18,
                                                   (__int64 *)&v32,
                                                   v19,
                                                   v20);
        v23 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v28 = (_QWORD *)WdLogNewEntry5_WdError(v22);
          v28[3] = v23;
          v28[4] = v18;
          v28[5] = *((_QWORD *)this + 1);
          v28[6] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
          v28[7] = *((unsigned int *)a1 + 63);
          WdLogEvent5_WdError(v28);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
          v9 = v23;
          goto LABEL_4;
        }
        v24 = 0;
        v25 = 0;
        if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
        {
LABEL_24:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
          DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
LABEL_16:
          v9 = -2147483622;
          goto LABEL_4;
        }
        do
        {
          if ( (*(_DWORD *)(216LL * v25 + *((_QWORD *)this + 1) + 48) & 0x2000) == 0 )
          {
            v26 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v25, v32);
            v17 = v26;
            if ( v26 == -1073741275 )
            {
              ++v24;
            }
            else if ( v26 < 0 )
            {
              v29 = (_QWORD *)WdLogNewEntry5_WdError(v27);
              v29[3] = v17;
              v29[4] = a1;
              v29[5] = *((_QWORD *)this + 1);
              v29[6] = *(_QWORD *)this;
              v29[7] = v25;
              WdLogEvent5_WdError(v29);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
              DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
LABEL_32:
              v9 = v17;
              goto LABEL_4;
            }
          }
          ++v25;
        }
        while ( v25 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v24 )
          goto LABEL_24;
        auto_rc<DMMVIDPN>::reset((__int64 *)&v32, 0LL);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v33 + 40));
      }
      v13 = 0;
      v14 = 0;
      if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
      {
        do
        {
          if ( (*(_DWORD *)(216LL * v14 + *((_QWORD *)this + 1) + 48) & 0x2000) == 0 )
          {
            v15 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter((CCD_SET_STRING_ID **)this, a1, v14, 0LL);
            v17 = v15;
            if ( v15 == -1073741275 )
            {
              ++v13;
            }
            else if ( v15 < 0 )
            {
              v30 = (_QWORD *)WdLogNewEntry5_WdError(v16);
              v30[3] = v17;
              v30[4] = a1;
              v30[5] = *((_QWORD *)this + 1);
              v30[6] = *(_QWORD *)this;
              v30[7] = v14;
              WdLogEvent5_WdError(v30);
              goto LABEL_32;
            }
          }
          ++v14;
        }
        while ( v14 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( v13 )
          goto LABEL_4;
      }
      goto LABEL_16;
    }
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
  return v9;
}
