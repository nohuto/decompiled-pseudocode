/*
 * XREFs of ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0158AF0
 * Callers:
 *     OutputDuplPresent @ 0x1C015A6B4 (OutputDuplPresent.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007D6C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00208C8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 */

__int64 __fastcall OutputDuplPresentInternal(
        struct DXGADAPTER *a1,
        struct DXGCONTEXT *a2,
        struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        struct DXGCONTEXT **a4)
{
  struct DXGADAPTER **v8; // rbx
  struct DXGADAPTER **v9; // rax
  __int64 v10; // rcx
  int OutputDuplManager; // ebx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029 Value; // eax
  DXGADAPTER **v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  DXGADAPTER *v25; // [rsp+38h] [rbp-29h] BYREF
  struct OUTPUTDUPL_MGR *v26; // [rsp+40h] [rbp-21h] BYREF
  char v27; // [rsp+48h] [rbp-19h]
  _BYTE v28[80]; // [rsp+58h] [rbp-9h] BYREF
  DXGADAPTER *v29; // [rsp+D8h] [rbp+77h] BYREF

  v25 = 0LL;
  v29 = 0LL;
  if ( (a3->Flags.Value & 2) != 0 )
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr((__int64)a1);
  }
  else
  {
    v8 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v29);
    v9 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v25);
    OutputDuplManager = FindOutputDuplManager(a1, a3->VidPnSourceId, v9, v8, &v26);
    if ( OutputDuplManager < 0 )
      goto LABEL_19;
    RemoteOutputDuplMgr = v26;
  }
  if ( !RemoteOutputDuplMgr )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 2585LL;
    WdLogEvent5_WdAssertion(v13);
    OutputDuplManager = -1073741275;
    goto LABEL_19;
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)RemoteOutputDuplMgr + 13) )
  {
    v14 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v14 + 24) = a3->VidPnSourceId;
    WdLogEvent5_WdError(v14);
    OutputDuplManager = -1073741811;
    goto LABEL_19;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
    (DXGADAPTERSTOPRESETLOCKSHARED *)&v26,
    *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL),
    1);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, *((_QWORD *)a2 + 2), 2, v15, 0);
  OutputDuplManager = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
  if ( OutputDuplManager >= 0 )
  {
    Value = (struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS::$A409EE896D278F5C017A650FBAD844EC::$1BE8774737E2D873D5DADE2689676029)a3->Flags.Value;
    if ( (*(_BYTE *)&Value & 2) != 0 || (*(_BYTE *)&Value & 8) != 0 )
      goto LABEL_16;
    v17 = (DXGADAPTER **)*((_QWORD *)v29 + 248);
    if ( !v17 )
    {
      v18 = WdLogNewEntry5_WdError(0LL);
      *(_QWORD *)(v18 + 24) = v29 != 0LL;
      WdLogEvent5_WdError(v18);
      OutputDuplManager = -1073741811;
      goto LABEL_17;
    }
    if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(v17, *((const struct DXGDEVICE **)a2 + 2), a3->VidPnSourceId) )
    {
LABEL_16:
      OutputDuplManager = OUTPUTDUPL_MGR::ProcessPresent(
                            RemoteOutputDuplMgr,
                            a2,
                            a3,
                            a3->VidPnSourceId,
                            a4,
                            (struct COREDEVICEACCESS *)v28);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = a2;
      *(_QWORD *)(v23 + 32) = a3->VidPnSourceId;
      WdLogEvent5_WdWarning(v23);
      OutputDuplManager = -1071775744;
    }
  }
LABEL_17:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v28);
  if ( v27 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v26);
LABEL_19:
  if ( v29 )
    DXGADAPTER::ReleaseReference(v29);
  v29 = 0LL;
  if ( v25 )
    DXGADAPTER::ReleaseReference(v25);
  return (unsigned int)OutputDuplManager;
}
