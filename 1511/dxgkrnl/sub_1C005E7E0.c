/*
 * XREFs of sub_1C005E7E0 @ 0x1C005E7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0004934 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@Z @ 0x1C006063C (-_ResolveCloneGroupOnAdapter@CCD_BTL_CLONE_GROUP_RESOLVER@@AEAAJPEAVDXGADAPTER@@IPEAVDMMVIDPN@@@.c)
 *     ?CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008DC58 (-CreateClientVidPnFromLastClientCommitedVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 */

__int64 __fastcall sub_1C005E7E0(struct DXGADAPTER *a1, CCD_BTL_CLONE_GROUP_RESOLVER *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v12; // rax
  struct VIDPN_MGR *v13; // r14
  int ClientVidPnFromLastClientCommitedVidPn; // eax
  __int64 v15; // rcx
  __int64 v16; // r15
  int v17; // r15d
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r12
  int v22; // r15d
  unsigned int v23; // r14d
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _BYTE v29[64]; // [rsp+20h] [rbp-40h] BYREF
  struct DMMVIDPN *v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
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
  if ( !*((_BYTE *)a1 + 1917) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    v12 = *((_QWORD *)a1 + 248);
    if ( v12 )
    {
      if ( *((_BYTE *)this + 16) || *(_BYTE *)(v12 + 158) )
      {
        v13 = *(struct VIDPN_MGR **)(v12 + 112);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v31, (__int64)v13);
        v30 = 0LL;
        ClientVidPnFromLastClientCommitedVidPn = VIDPN_MGR::CreateClientVidPnFromLastClientCommitedVidPn(v13);
        v16 = ClientVidPnFromLastClientCommitedVidPn;
        if ( ClientVidPnFromLastClientCommitedVidPn < 0 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v26[3] = v16;
          v26[4] = v13;
          v26[5] = *((_QWORD *)this + 1);
          v26[6] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
          v26[7] = *((unsigned int *)a1 + 63);
          WdLogEvent5_WdError(v26);
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v31 + 40));
          v9 = v16;
          goto LABEL_4;
        }
        v17 = 0;
        v18 = 0;
        if ( !*(_WORD *)(*(_QWORD *)this + 32LL) )
        {
LABEL_17:
          auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
          DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v31 + 40));
          goto LABEL_18;
        }
        do
        {
          if ( (*(_DWORD *)(216LL * v18 + *((_QWORD *)this + 1) + 48) & 0x2000) == 0 )
          {
            v19 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v18, v30);
            v21 = v19;
            if ( v19 == -1073741275 )
            {
              ++v17;
            }
            else if ( v19 < 0 )
            {
              v27 = (_QWORD *)WdLogNewEntry5_WdError(v20);
              v27[3] = v21;
              v27[4] = a1;
              v27[5] = *((_QWORD *)this + 1);
              v27[6] = *(_QWORD *)this;
              v27[7] = v18;
              WdLogEvent5_WdError(v27);
              auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
              DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v31 + 40));
LABEL_35:
              v9 = v21;
              goto LABEL_4;
            }
          }
          ++v18;
        }
        while ( v18 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v17 )
          goto LABEL_17;
        auto_rc<DMMVIDPN>::reset((__int64 *)&v30, 0LL);
        DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v31 + 40));
      }
      v22 = 0;
      v23 = 0;
      if ( *(_WORD *)(*(_QWORD *)this + 32LL) )
      {
        do
        {
          if ( (*(_DWORD *)(216LL * v23 + *((_QWORD *)this + 1) + 48) & 0x2000) == 0 )
          {
            v24 = CCD_BTL_CLONE_GROUP_RESOLVER::_ResolveCloneGroupOnAdapter(this, a1, v23, 0LL);
            v21 = v24;
            if ( v24 == -1073741275 )
            {
              ++v22;
            }
            else if ( v24 < 0 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdError(v25);
              v28[3] = v21;
              v28[4] = a1;
              v28[5] = *((_QWORD *)this + 1);
              v28[6] = *(_QWORD *)this;
              v28[7] = v23;
              WdLogEvent5_WdError(v28);
              goto LABEL_35;
            }
          }
          ++v23;
        }
        while ( v23 < *(unsigned __int16 *)(*(_QWORD *)this + 32LL) );
        if ( !v22 )
          goto LABEL_18;
        goto LABEL_4;
      }
LABEL_18:
      v9 = -2147483622;
    }
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v29);
  return v9;
}
