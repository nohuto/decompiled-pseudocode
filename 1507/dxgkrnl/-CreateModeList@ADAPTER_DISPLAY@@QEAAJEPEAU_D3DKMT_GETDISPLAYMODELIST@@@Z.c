/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF1B0
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00D28D8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        __int64 a4)
{
  unsigned __int8 v5; // si
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 v12; // rax
  void *v13; // rcx
  __int64 v14; // xmm1_8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  _BYTE v27[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h]

  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v7 + 24) = 22508LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v8 + 24) = 22509LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3->pModeList )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 22510LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_pqq((__int64)this, &EventStartRebuildModeCache, (__int64)a3, this, a3->VidPnSourceId, 0);
  v10 = (void *)*((_QWORD *)this + 2);
  v28[0] = 0LL;
  v28[1] = 0LL;
  v29 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v10,
                                           v5,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v28 & -(__int64)(*((_QWORD *)this + 22) != 0LL)));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (ADAPTER_DISPLAY *)((char *)this + 136));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v12 = *((_QWORD *)this + 22);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 24LL * a3->VidPnSourceId + 8);
    if ( v13 )
      operator delete(v13);
    v14 = v29;
    v15 = 3LL * a3->VidPnSourceId;
    v16 = *((_QWORD *)this + 22);
    *(_OWORD *)(v16 + 8 * v15) = *(_OWORD *)v28;
    *(_QWORD *)(v16 + 8 * v15 + 16) = v14;
  }
  else if ( v28[1] )
  {
    operator delete(v28[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v20, v19, v21, v22);
    v23[3] = this;
    v23[4] = a3->VidPnSourceId;
    v23[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v23);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v26) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v25) = a3->VidPnSourceId;
    Template_pqq(v17, &EventEndRebuildModeCache, v18, this, v25, v26);
  }
  DxgkLogCodePointPacket(0x1Du, a3->VidPnSourceId, ActiveVidPnBasedDisplayModeList, 0);
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
