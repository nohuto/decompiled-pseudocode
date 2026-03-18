/*
 * XREFs of ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@@Z @ 0x1C00B3C78
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C006CD00 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z @ 0x1C0124038 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C015390C (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@@Z @ 0x1C0153E6C (-LogPresentParams@OUTPUTDUPL_MGR@@AEAAJPEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@.c)
 *     ?ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTOEXPANDALLOCATION@@PEAPEAV2@@Z @ 0x1C01584B0 (-ProcessPresent@OUTPUTDUPL_CONTEXT@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@PEAVAUTO.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPresent(
        OUTPUTDUPL_MGR *this,
        struct DXGCONTEXT *a2,
        const struct _D3DKMT_OUTPUTDUPLPRESENT *a3,
        unsigned int a4,
        struct DXGCONTEXT **a5)
{
  int v8; // ebx
  unsigned int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rcx
  OUTPUTDUPL_CONTEXT **v12; // r14
  int v13; // r13d
  unsigned int v14; // r12d
  __int64 v15; // r13
  OUTPUTDUPL_MGR *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // r9
  struct DXGCONTEXT **v31; // [rsp+20h] [rbp-68h]
  __int64 v32; // [rsp+30h] [rbp-58h]
  _BYTE v33[80]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v34; // [rsp+90h] [rbp+8h]

  v34 = a4;
  v32 = *((_QWORD *)this + 2);
  v8 = 0;
  v9 = 0;
  v10 = 3LL * a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, *(struct DXGFASTMUTEX *const *)(v32 + 24LL * a4));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  v12 = *(OUTPUTDUPL_CONTEXT ***)(v32 + 8 * v10 + 8);
  v13 = 1;
  v14 = 0;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_4;
  while ( !*v12 || !*((_DWORD *)*v12 + 79) )
  {
LABEL_3:
    ++v14;
    ++v12;
    if ( v14 >= *((_DWORD *)this + 2) )
      goto LABEL_4;
  }
  if ( v13 )
  {
    if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
    {
      v15 = v34;
      v8 = OUTPUTDUPL_MGR::LogPresentParams(v17, a3, *(struct AUTOEXPANDALLOCATION **)(v32 + 24 * v34 + 16));
      if ( v8 < 0 )
      {
        v19 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v19 + 24) = a2;
        WdLogEvent5_WdError(v19);
        goto LABEL_5;
      }
    }
    v13 = 0;
  }
  v20 = OUTPUTDUPL_CONTEXT::ProcessPresent(*v12, a2, a3, *(struct AUTOEXPANDALLOCATION **)(v32 + 24 * v34 + 16), a5);
  v8 = v20;
  if ( v20 >= 0 )
  {
    v11 = 259LL;
    if ( v20 == 259 )
      v9 = 259;
    goto LABEL_3;
  }
  v9 = v20;
  v22 = WdLogNewEntry5_WdError(v21);
  *(_QWORD *)(v22 + 24) = a2;
  WdLogEvent5_WdError(v22);
LABEL_4:
  v15 = v34;
LABEL_5:
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  if ( v8 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v23 + 24) = v15;
    WdLogEvent5_WdError(v23);
    if ( v8 == -1071775486 )
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24, v26, v27);
      v28[3] = a3->Flags.Value;
      v28[4] = a3->BroadcastContextCount;
      v28[5] = a3->PresentRegions.DirtyRectCount;
      v28[6] = a3->PresentRegions.MoveRectCount;
      DxgCreateLiveDumpWithWdLogs(0x193u, 0x100uLL, v29, v30, (unsigned __int64)v31);
      v9 = 0;
    }
    OUTPUTDUPL_MGR::MoveContextToPendingDestroyList(this, a4, 0LL, 0, 0, 7);
  }
  return v9;
}
