/*
 * XREFs of ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00AF7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0003914 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C0003DC0 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003E1C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0075CEC (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkCddDestroyVirtualFrameBuffer @ 0x1C00B0910 (DxgkCddDestroyVirtualFrameBuffer.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C015AE3C (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, char *a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v11; // edx
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r9
  int v18; // r8d
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // esi
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r9
  _BYTE v29[16]; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v30[3]; // [rsp+50h] [rbp-31h] BYREF
  _BYTE v31[80]; // [rsp+68h] [rbp-19h] BYREF
  struct _LUID v32; // [rsp+F8h] [rbp+77h] BYREF

  v6 = a2;
  v7 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3001);
  DxgkCddDestroyVirtualFrameBuffer();
  if ( !a3 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v8);
LABEL_33:
    v22 = -1073741811;
    v24[3] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_25;
  }
  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v25 + 24) = 313LL;
    WdLogEvent5_WdAssertion(v25);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v11 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)Current + 58)
    && (v12 = *((_QWORD *)Current + 27),
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8),
        (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0xF) == 3 )
  {
    v14 = *(_QWORD *)(v12 + 16LL * v11);
  }
  else
  {
    v14 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v15);
    v24[4] = v7;
    v24[5] = Current;
    goto LABEL_33;
  }
  if ( a4 )
  {
    v32 = *(struct _LUID *)(a3 + 252);
    DxgkDestroyCddDeviceAndContextForCurrentSession(&v32, (struct DXGDEVICE *)v14);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v16 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v16 < *((_DWORD *)Current + 58)
    && (v17 = *((_QWORD *)Current + 27),
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x30))
    && (v18 & 0x1000) == 0
    && (v18 & 0xF) != 0
    && (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0xF) == 7 )
  {
    v19 = *(_QWORD *)(v17 + 16LL * v16);
  }
  else
  {
    v19 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v19 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v27 = *(_QWORD *)(v19 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v30,
        (struct DXGDEVICE *)v27);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v29,
        *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v31, v27, 2, v28, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v31);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL) + 160LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v27, (struct DXGCONTEXT *)v19, (struct COREDEVICEACCESS *)v31);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v31);
      if ( v29[8] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      if ( v30[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v30);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v27 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v27 + 16), (struct DXGDEVICE *)v27);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
    v22 = 0;
  }
  else
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v20);
    v22 = -1073741811;
    v26[3] = -1073741811LL;
    v26[4] = v6;
    v26[5] = Current;
    WdLogEvent5_WdError(v26);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
  }
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 3001);
  return v22;
}
