/*
 * XREFs of DxgkWaitForIdle @ 0x1C01394F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001B44 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C007B38C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 */

__int64 __fastcall DxgkWaitForIdle(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  bool v11; // zf
  __int64 v13; // rcx
  struct DXGDEVICE *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  struct DXGDEVICE *v23; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (unsigned int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2045);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v8 = *v4;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)(v3 + 2),
      v8,
      Current,
      (struct DXGDEVICE **)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
    v14 = *v3;
    if ( *v3 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3), *v3);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 5),
        (struct _KTHREAD **)v14 + 11);
      *v3 = *(struct DXGDEVICE **)(*((_QWORD *)v14 + 2) + 16LL);
      *(_BYTE *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 8), (__int64)v14, 0, v16, 0);
      v17 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 8));
      v8 = v17;
      if ( v17 < 0 )
      {
        v22 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
        *(_QWORD *)(v22 + 24) = v8;
        *(_QWORD *)(v22 + 32) = v14;
        WdLogEvent5_WdEvent(v22);
      }
      else
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 8));
        DXGDEVICE::FlushScheduler(v14, 1);
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 8));
      if ( *(_BYTE *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 5));
      if ( *(_QWORD *)(((unsigned __int64)&v23 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 3));
    }
    else
    {
      v15 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v15 + 24) = v8;
      LODWORD(v8) = -1073741811;
      *(_QWORD *)(v15 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v15);
    }
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 2));
    v11 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v10 = qword_1C00467F0;
    v11 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v11 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v9, 2045);
  return (unsigned int)v8;
}
