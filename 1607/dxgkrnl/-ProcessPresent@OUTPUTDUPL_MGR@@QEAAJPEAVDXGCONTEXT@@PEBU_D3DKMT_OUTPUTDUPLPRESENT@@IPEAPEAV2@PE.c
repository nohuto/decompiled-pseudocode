/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00DE3E0
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00A9CE0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C017D9B4 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C0077F6C (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00AEF28 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C00DE348 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C00DE520 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C017C80C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C017CD6C (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C018209C (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct COREDEVICEACCESS *a6)
{
  unsigned int v8; // edi
  __int64 v9; // r13
  __int64 ActiveContextCount; // r14
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // r12
  __int64 v15; // r13
  OUTPUTDUPL_CONTEXT **v16; // r14
  unsigned int v17; // ebp
  __int64 v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  OUTPUTDUPL_MGR *v25; // rcx
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // [rsp+30h] [rbp-108h]
  _BYTE v35[24]; // [rsp+48h] [rbp-F0h] BYREF
  _QWORD v36[16]; // [rsp+60h] [rbp-D8h] BYREF

  v8 = 0;
  v9 = a4;
  ActiveContextCount = (unsigned int)OUTPUTDUPL_MGR::QueryActiveContextCount(this, a3->VidPnSourceId);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v20 + 24) = 5679LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *((_QWORD *)a2 + 37) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v21 + 24) = 5680LL;
    WdLogEvent5_WdAssertion(v21);
  }
  LODWORD(v12) = 0;
  if ( (_DWORD)ActiveContextCount )
  {
    memset(v36, 0, 8 * ActiveContextCount);
    *((_DWORD *)a2 + 76) = ActiveContextCount;
    *((_QWORD *)a2 + 37) = v36;
  }
  v13 = 0LL;
  if ( (_DWORD)ActiveContextCount )
  {
    while ( 1 )
    {
      v22 = DXGCONTEXT::AcquireDmaBuffer(a2, (struct _VIDMM_DMA_BUFFER **)&v36[v13], a6, 1);
      v12 = v22;
      if ( v22 < 0 )
        break;
      v13 = (unsigned int)(v13 + 1);
      if ( (unsigned int)v13 >= (unsigned int)ActiveContextCount )
        goto LABEL_8;
    }
    v23 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v23 + 24) = v12;
    WdLogEvent5_WdError(v23);
    DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  }
LABEL_8:
  if ( (int)v12 < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v24 + 24) = a2;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v12;
  }
  v14 = 3 * v9;
  v15 = *((_QWORD *)this + 2);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v35, *(struct DXGFASTMUTEX *const *)(v15 + 8 * v14));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  v16 = *(OUTPUTDUPL_CONTEXT ***)(v15 + 8 * v14 + 8);
  v17 = 0;
  v18 = 1LL;
  v32 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_12;
  while ( 1 )
  {
    if ( !*v16 || !*((_DWORD *)*v16 + 79) )
      goto LABEL_11;
    if ( (_DWORD)v18 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        LODWORD(v12) = OUTPUTDUPL_MGR::LogPresentParams(v25, a3, *(struct AUTOEXPANDALLOCATION **)(v15 + 8 * v14 + 16));
        if ( (int)v12 < 0 )
          goto LABEL_33;
      }
      v32 = 0;
    }
    v27 = OUTPUTDUPL_CONTEXT::ProcessPresent(*v16, a2, a3, *(struct AUTOEXPANDALLOCATION **)(v15 + 8 * v14 + 16), a5);
    LODWORD(v12) = v27;
    if ( v27 == -1071775486 )
    {
      LODWORD(v12) = 259;
      *((_DWORD *)*v16 + 70) = 1;
LABEL_30:
      v8 = 259;
      goto LABEL_31;
    }
    if ( v27 < 0 )
      break;
    if ( v27 == 259 )
      goto LABEL_30;
LABEL_31:
    v18 = v32;
LABEL_11:
    ++v17;
    ++v16;
    if ( v17 >= *((_DWORD *)this + 2) )
      goto LABEL_12;
  }
  v8 = v27;
LABEL_33:
  v28 = WdLogNewEntry5_WdError(v26);
  *(_QWORD *)(v28 + 24) = a2;
  WdLogEvent5_WdError(v28);
LABEL_12:
  if ( v35[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v35);
  if ( (int)v12 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v18);
    *(_QWORD *)(v29 + 24) = a4;
    WdLogEvent5_WdError(v29);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList((OUTPUTDUPL_CONTEXT **)this, a4, 0LL, 0, 0, 7);
    if ( v8 != (_DWORD)v12 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v31 + 24) = 1090LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( v8 != -1073741130 )
      v8 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v8;
}
