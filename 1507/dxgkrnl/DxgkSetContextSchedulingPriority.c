/*
 * XREFs of DxgkSetContextSchedulingPriority @ 0x1C00AFF30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C00017B0 (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0001890 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x1C0072C7C (-SetSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetContextSchedulingPriority(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // ebx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // r8
  bool v17; // zf
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21[2]; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2029);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (_QWORD *)MmUserProbeAddress;
    *(_QWORD *)v3 = *v4;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE(
      (DXGCONTEXTBYHANDLE *)(v3 + 6),
      *v3,
      Current,
      (struct DXGCONTEXT **)v3 + 1,
      0);
    v11 = *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v11 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2),
        *(struct DXGDEVICE **)(v11 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 12), *(_QWORD *)(v11 + 16), 0, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 12));
      if ( v13 >= 0 )
      {
        v13 = -1073741811;
        v14 = *(_DWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        if ( (unsigned int)(v14 + 7) <= 0xE )
        {
          v13 = DXGCONTEXT::SetSchedulingPriority((DXGCONTEXT *)v11, (unsigned int)(v14 + *(_DWORD *)(v11 + 336)));
          if ( v13 >= 0 )
            *(_DWORD *)(v11 + 340) = v14;
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 12));
      if ( *(_QWORD *)(((unsigned __int64)v21 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 2));
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
      *(_QWORD *)(v20 + 24) = *v3;
      v13 = -1073741811;
      *(_QWORD *)(v20 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v20);
    }
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)(v3 + 6));
    v17 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v5);
    v13 = -1073741811;
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v15 = qword_1C00467F0;
    v17 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 2029);
  return (unsigned int)v13;
}
