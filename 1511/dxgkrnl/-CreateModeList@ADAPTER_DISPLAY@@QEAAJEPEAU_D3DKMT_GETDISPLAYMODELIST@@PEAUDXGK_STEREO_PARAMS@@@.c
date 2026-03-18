/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0126140
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000A1C4 (DxgkLogCodePointPacket.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0140988 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct DXGK_STEREO_PARAMS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rax
  struct DXGK_STEREO_PARAMS *v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  _BYTE v28[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v29[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v30; // [rsp+50h] [rbp-18h]

  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 23091LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 26) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 23092LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3->pModeList )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 23093LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqq((__int64)this, &EventStartRebuildModeCache, (__int64)a3, this, a3->VidPnSourceId, 0);
  v11 = (void *)*((_QWORD *)this + 2);
  v29[0] = 0LL;
  v29[1] = 0LL;
  v30 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v11,
                                           a2,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v29 & -(__int64)(*((_QWORD *)this + 28) != 0LL)),
                                           a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, (ADAPTER_DISPLAY *)((char *)this + 160));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  v13 = *((_QWORD *)this + 28);
  if ( v13 )
  {
    v14 = *(void **)(v13 + 24LL * a3->VidPnSourceId + 8);
    if ( v14 )
      operator delete(v14);
    v15 = v30;
    v16 = 3LL * a3->VidPnSourceId;
    v17 = *((_QWORD *)this + 28);
    *(_OWORD *)(v17 + 8 * v16) = *(_OWORD *)v29;
    *(_QWORD *)(v17 + 8 * v16 + 16) = v15;
  }
  else if ( v29[1] )
  {
    operator delete(v29[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v28);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v21, v20, v22, v23);
    v24[3] = this;
    v24[4] = a3->VidPnSourceId;
    v24[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v24);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v27) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v26) = a3->VidPnSourceId;
    Template_pqq(v18, &EventEndRebuildModeCache, v19, this, v26, v27);
  }
  DxgkLogCodePointPacket(0x1Du, a3->VidPnSourceId, ActiveVidPnBasedDisplayModeList, 0);
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
