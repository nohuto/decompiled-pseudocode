/*
 * XREFs of ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C00031D4 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C0028124 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkEscapeStopDisplayAdapters(struct DXGADAPTER *a1, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _BYTE v13[72]; // [rsp+20h] [rbp-48h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)a1 + 22) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v11 + 24) = 7745LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( !DXGADAPTER::IsBddFallbackDriver(a1) )
    {
      *a2 = 0;
      DxgkInvalidateDeviceState(*((_QWORD *)a1 + 22));
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)a1 + 252));
    v10[5] = *((unsigned int *)a1 + 63);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
