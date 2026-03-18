/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0158D5C
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0158AF0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z @ 0x1C0124954 (-QueryActiveContextCount@OUTPUTDUPL_MGR@@QEAAII@Z.c)
 *     ?ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C014C5C8 (-ReserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJPEAVCOREDEVICEACCESS@@IPEAPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ?UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ @ 0x1C014CF30 (-UnreserveDmaBuffersForBlts@DXGCONTEXT@@QEAAJXZ.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C0157B78 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C01580D8 (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C015C7C8 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct COREDEVICEACCESS *a6)
{
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  unsigned int v9; // edi
  __int64 v10; // r14
  unsigned int ActiveContextCount; // eax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  OUTPUTDUPL_CONTEXT **v18; // r14
  unsigned int v19; // r15d
  __int64 v20; // rcx
  DXGDIAGNOSTICSWITHMUTEX **v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  unsigned int v28; // [rsp+30h] [rbp-108h]
  _BYTE v31[16]; // [rsp+40h] [rbp-F8h] BYREF
  struct DXGCONTEXT **v32; // [rsp+50h] [rbp-E8h]
  struct _VIDMM_DMA_BUFFER *v33; // [rsp+60h] [rbp-D8h] BYREF

  VidPnSourceId = a3->VidPnSourceId;
  v9 = 0;
  v32 = a5;
  v10 = a4;
  ActiveContextCount = OUTPUTDUPL_MGR::QueryActiveContextCount(this, VidPnSourceId);
  v13 = DXGCONTEXT::ReserveDmaBuffersForBlts(a2, a6, ActiveContextCount, &v33);
  if ( v13 < 0 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdError(v14);
    return (unsigned int)v13;
  }
  v16 = *((_QWORD *)this + 2);
  v17 = 3 * v10;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, *(struct DXGFASTMUTEX *const *)(v16 + 24 * v10));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  v18 = *(OUTPUTDUPL_CONTEXT ***)(v16 + 24 * v10 + 8);
  v19 = 0;
  v20 = 1LL;
  v28 = 1;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_20;
  while ( 1 )
  {
    if ( !*v18 || !*((_DWORD *)*v18 + 79) )
      goto LABEL_16;
    if ( (_DWORD)v20 )
    {
      if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
      {
        v13 = OUTPUTDUPL_MGR::LogPresentParams(v21, a3, *(void ***)(v16 + 8 * v17 + 16));
        if ( v13 < 0 )
          goto LABEL_19;
      }
      v28 = 0;
    }
    v23 = OUTPUTDUPL_CONTEXT::ProcessPresent(*v18, a2, a3, *(struct AUTOEXPANDALLOCATION **)(v16 + 8 * v17 + 16), v32);
    v13 = v23;
    if ( v23 == -1071775486 )
    {
      v13 = 259;
      *((_DWORD *)*v18 + 70) = 1;
LABEL_14:
      v9 = 259;
      goto LABEL_15;
    }
    if ( v23 < 0 )
      break;
    if ( v23 == 259 )
      goto LABEL_14;
LABEL_15:
    v20 = v28;
LABEL_16:
    ++v19;
    ++v18;
    if ( v19 >= *((_DWORD *)this + 2) )
      goto LABEL_20;
  }
  v9 = v23;
LABEL_19:
  v24 = WdLogNewEntry5_WdError(v22);
  *(_QWORD *)(v24 + 24) = a2;
  WdLogEvent5_WdError(v24);
LABEL_20:
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
  if ( v13 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v25 + 24) = a4;
    WdLogEvent5_WdError(v25);
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a4, 0LL, 0, 0, 7);
    if ( v9 != v13 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26);
      *(_QWORD *)(v27 + 24) = 1046LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( v9 != -1073741130 )
      v9 = 259;
  }
  DXGCONTEXT::UnreserveDmaBuffersForBlts(a2);
  return v9;
}
