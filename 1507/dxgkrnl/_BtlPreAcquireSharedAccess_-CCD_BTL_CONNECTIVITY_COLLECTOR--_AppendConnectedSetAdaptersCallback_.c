/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_ @ 0x1C00AD360
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C000268C (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00285FC (DxgkIsMSBDDFallbackEnabled.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C009A84C (DmmAppendCcdConnectedSetForAdapter.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_(
        DXGADAPTER *this,
        __int64 a2)
{
  int appended; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  DXGADAPTER *v12; // rcx
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  appended = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( appended < 0 )
  {
    if ( appended == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = this;
      v10[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
      v10[5] = *((unsigned int *)this + 63);
      v10[6] = a2;
      goto LABEL_4;
    }
LABEL_8:
    v9 = appended;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)this + 1909) && (!DXGADAPTER::IsBddFallbackDriver(this) || DxgkIsMSBDDFallbackEnabled()) )
  {
    appended = DmmAppendCcdConnectedSetForAdapter(v12, (unsigned __int16 *)(a2 + 8));
    goto LABEL_8;
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
