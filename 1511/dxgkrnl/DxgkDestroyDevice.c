/*
 * XREFs of DxgkDestroyDevice @ 0x1C008B4D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C00035B8 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003614 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007D20 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0007DCC (-IsEmulatedVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C000BE34 (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ @ 0x1C006D594 (-DestroyAllDeviceSyncObjects@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C006D5D8 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C006D670 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z @ 0x1C013A090 (-DxgkReleaseVidPnSourceOwnerAndRestartCdds@@YAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkDestroyDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbp
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v7; // r14
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r9
  int v11; // r8d
  __int64 v12; // rbx
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // [rsp+70h] [rbp+0h] BYREF

  v3 = (_QWORD *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (unsigned int *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2010);
  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v7 = *v4;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 3), Current);
    v9 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( v9 < *((_DWORD *)Current + 58)
      && (v10 = *((_QWORD *)Current + 27),
          v11 = *(_DWORD *)(v10 + 16LL * v9 + 8),
          v8 = ((unsigned int)v7 >> 26) & 0x30,
          (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0x30))
      && (v11 & 0x1000) == 0
      && (v11 & 0xF) != 0
      && (*(_BYTE *)(v10 + 16LL * v9 + 8) & 0xF) == 3 )
    {
      v12 = *(_QWORD *)(v10 + 16LL * v9);
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      if ( v9 < *((_DWORD *)Current + 58) )
      {
        v13 = *((_QWORD *)Current + 27);
        v14 = *(_DWORD *)(v13 + 16LL * v9 + 8);
        if ( (((unsigned int)v7 >> 26) & 0x30) == (v14 & 0x30) && (v14 & 0x1000) == 0 && (v14 & 0xF) != 0 )
          *(_DWORD *)(v13 + 16 * (((unsigned __int64)(unsigned int)v7 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
      }
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 3));
      *v3 = v12;
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 1),
        (struct DXGDEVICE *)v12);
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)(v3 + 6),
        (struct _KTHREAD **)(v12 + 88));
      DXGDEVICE::DestroyAllContexts((DXGDEVICE *)v12, (struct DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 1));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), v12, 2, v15, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)(v3 + 10));
      DXGDEVICE::DestroyAllPagingQueues((DXGDEVICE *)v12);
      DXGDEVICE::DestroyAllDeviceSyncObjects((DXGDEVICE *)v12);
      v17 = *(_QWORD *)(v12 + 2832);
      if ( v17 && *(_DWORD *)(v17 + 160) == 1 )
      {
        if ( !*(_QWORD *)(v17 + 1984) )
        {
          v21 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v21 + 24) = 1915LL;
          WdLogEvent5_WdAssertion(v21);
        }
        if ( ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v17 + 1984), (const struct DXGDEVICE *)v12)
          || ADAPTER_DISPLAY::IsEmulatedVidPnSourceOwner(
               *(ADAPTER_DISPLAY **)(v17 + 1984),
               (const struct DXGDEVICE *)v12) )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)(v3 + 10));
          DxgkReleaseVidPnSourceOwnerAndRestartCdds((struct DXGDEVICE *)v12);
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 6));
      if ( *(_QWORD *)(((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 1));
      ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)((unsigned __int64)&v27 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        Template_q(v18, &EventProfilerExit, v19, 2010);
      return 0LL;
    }
    v26 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v26 + 24) = v7;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 3));
    v25 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v22);
    v24 = qword_1C00467F0;
    v25 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v24, &EventProfilerExit, v23, 2010);
  return 3221225485LL;
}
