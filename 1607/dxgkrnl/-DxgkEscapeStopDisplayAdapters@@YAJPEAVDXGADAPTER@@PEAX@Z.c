/*
 * XREFs of ?DxgkEscapeStopDisplayAdapters@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01688E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0008768 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkInvalidateDeviceState @ 0x1C002AB74 (DxgkInvalidateDeviceState.c)
 */

__int64 __fastcall DxgkEscapeStopDisplayAdapters(struct DXGADAPTER *this, _BYTE *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  __int64 v11; // rax
  _BYTE v13[80]; // [rsp+20h] [rbp-58h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v13, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v13);
  v9 = 0;
  if ( v4 >= 0 )
  {
    if ( !*((_QWORD *)this + 24) )
    {
      v11 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v11 + 24) = 542LL;
      WdLogEvent5_WdAssertion(v11);
    }
    if ( !DXGADAPTER::IsBddFallbackDriver(this) )
    {
      *a2 = 0;
      DxgkInvalidateDeviceState(*((_QWORD *)this + 24));
    }
  }
  else if ( v4 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 68);
    v10[5] = *((unsigned int *)this + 67);
  }
  else
  {
    v9 = v4;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v13);
  return v9;
}
