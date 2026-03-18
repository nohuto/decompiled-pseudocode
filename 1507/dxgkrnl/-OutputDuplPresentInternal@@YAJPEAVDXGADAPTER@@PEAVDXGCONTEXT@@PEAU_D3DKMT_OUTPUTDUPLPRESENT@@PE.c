/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC
 * Callers:
 *     OutputDuplPresent @ 0x1C01563D4 (OutputDuplPresent.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0005940 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000682C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000FAF4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     ??1DXGADAPTER_REFERENCE@@QEAA@XZ @ 0x1C00209B4 (--1DXGADAPTER_REFERENCE@@QEAA@XZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00209D4 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C011EDDC (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C01488F0 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C01492B0 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  struct DXGADAPTER **v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int OutputDuplManager; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r9
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 v23; // eax
  DXGADAPTER **v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned int ActiveContextCount; // eax
  __int64 v32; // rcx
  __int64 v33; // rax
  DXGADAPTER *v35; // [rsp+30h] [rbp-D0h] BYREF
  DXGADAPTER *v36; // [rsp+38h] [rbp-C8h] BYREF
  OUTPUTDUPL_MGR *v37[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v38[80]; // [rsp+50h] [rbp-B0h] BYREF
  struct _VIDMM_DMA_BUFFER *v39; // [rsp+A0h] [rbp-60h] BYREF

  Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
  v36 = 0LL;
  v35 = 0LL;
  if ( (*(_BYTE *)&Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4);
LABEL_5:
    if ( !RemoteOutputDuplMgr )
    {
      v20 = WdLogNewEntry5_WdAssertion(v15, v14, v17, v18);
      *(_QWORD *)(v20 + 24) = 2601LL;
      WdLogEvent5_WdAssertion(v20);
      OutputDuplManager = -1073741275;
      goto LABEL_20;
    }
    if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
    {
      v21 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v21 + 24) = a3->VidPnSourceId;
      WdLogEvent5_WdError(v21);
      OutputDuplManager = -1073741811;
      goto LABEL_20;
    }
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v37,
      *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL),
      1);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, *((_QWORD *)a2 + 2), 2, v22, 0);
    OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38);
    if ( OutputDuplManager >= 0 )
    {
      v23 = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
      if ( (*(_BYTE *)&v23 & 2) == 0 && (*(_BYTE *)&v23 & 8) == 0 )
      {
        v24 = (DXGADAPTER **)*((_QWORD *)v35 + 247);
        if ( !v24 )
        {
          v25 = WdLogNewEntry5_WdError(0LL);
          *(_QWORD *)(v25 + 24) = v35 != 0LL;
          WdLogEvent5_WdError(v25);
          OutputDuplManager = -1073741811;
          goto LABEL_19;
        }
        if ( !ADAPTER_DISPLAY::IsVidPnSourceOwner(v24, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
        {
          v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = a2;
          *(_QWORD *)(v30 + 32) = a3->VidPnSourceId;
          WdLogEvent5_WdWarning(v30);
          OutputDuplManager = -1071775744;
          goto LABEL_19;
        }
      }
      ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(RemoteOutputDuplMgr, a3->VidPnSourceId);
      OutputDuplManager = DXGCONTEXT::ReserveDmaBuffersForBlts(
                            a2,
                            (struct COREDEVICEACCESS *)v38,
                            ActiveContextCount,
                            &v39);
      if ( OutputDuplManager >= 0 )
      {
        OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(RemoteOutputDuplMgr, a2, a3, a3->VidPnSourceId, a4);
        DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
      }
      else
      {
        v33 = WdLogNewEntry5_WdError(v32);
        *(_QWORD *)(v33 + 24) = a2;
        WdLogEvent5_WdError(v33);
      }
    }
LABEL_19:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v38);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    goto LABEL_20;
  }
  v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35, (__int64)a2, (__int64)a3, (__int64)a4);
  v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v36, v10, v11, v12);
  OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v13, v9, v37);
  if ( OutputDuplManager >= 0 )
  {
    RemoteOutputDuplMgr = v37[0];
    goto LABEL_5;
  }
LABEL_20:
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v35);
  DXGADAPTER_REFERENCE::~DXGADAPTER_REFERENCE(&v36);
  return (unsigned int)OutputDuplManager;
}
