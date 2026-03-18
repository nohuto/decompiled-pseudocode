/*
 * XREFs of sub_1C00BF2D0 @ 0x1C00BF2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00281BC (DxgkIsMSBDDFallbackEnabled.c)
 *     DmmAppendCcdConnectedSetForAdapter @ 0x1C005D394 (DmmAppendCcdConnectedSetForAdapter.c)
 */

__int64 __fastcall sub_1C00BF2D0(struct DXGADAPTER *a1, __int64 a2)
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

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  appended = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( appended < 0 )
  {
    if ( appended == -1073741130 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
      v10[3] = a1;
      v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
      v10[5] = *((unsigned int *)a1 + 63);
      v10[6] = a2;
      goto LABEL_4;
    }
LABEL_8:
    v9 = appended;
    goto LABEL_4;
  }
  if ( !*((_BYTE *)a1 + 1917) && (!DXGADAPTER::IsBddFallbackDriver(a1) || DxgkIsMSBDDFallbackEnabled()) )
  {
    appended = DmmAppendCcdConnectedSetForAdapter(v12, (unsigned __int16 *)(a2 + 8));
    goto LABEL_8;
  }
LABEL_4:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
