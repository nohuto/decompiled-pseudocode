/*
 * XREFs of ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C00B07B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001E0C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00058F8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0005964 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0081AC0 (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0156B24 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, char *a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // edx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // esi
  _QWORD *v26; // rax
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r9
  __int64 v33; // [rsp+40h] [rbp-41h] BYREF
  char v34; // [rsp+48h] [rbp-39h]
  _QWORD v35[3]; // [rsp+50h] [rbp-31h] BYREF
  PERESOURCE *v36[10]; // [rsp+68h] [rbp-19h] BYREF
  struct _LUID v37; // [rsp+F8h] [rbp+77h] BYREF

  v6 = a2;
  v7 = (unsigned int)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3001);
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1);
LABEL_33:
    v24 = -1073741811;
    v26[3] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_25;
  }
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v27 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v27 + 24) = 286LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v13 < *((_DWORD *)Current + 58)
    && (v14 = *((_QWORD *)Current + 27),
        v15 = *(_DWORD *)(v14 + 16LL * v13 + 8),
        (((unsigned int)v7 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0xF) == 3 )
  {
    v16 = *(_QWORD *)(v14 + 16LL * v13);
  }
  else
  {
    v16 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v26[4] = v7;
    v26[5] = Current;
    goto LABEL_33;
  }
  if ( a4 )
  {
    v37 = *(struct _LUID *)(a3 + 252);
    DxgkDestroyCddDeviceAndContextForCurrentSession(&v37, (struct DXGDEVICE *)v16);
  }
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
  v18 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)Current + 58)
    && (v19 = *((_QWORD *)Current + 27),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 7 )
  {
    v21 = *(_QWORD *)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v29 = *(_QWORD *)(v21 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v35,
        (struct DXGDEVICE *)v29);
      v30 = *(_QWORD *)(v21 + 16);
      v34 = 0;
      v33 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)&v33);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, v29, 2, v31, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v36);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 160LL) != 4 )
        DXGDEVICE::DestroyContext((PERESOURCE *)v29, (struct DXGCONTEXT *)v21, v36, v32);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v36);
      if ( v34 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v33);
      if ( v35[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v35);
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v29 + 16), (struct DXGDEVICE *)v29);
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
    v24 = 0;
  }
  else
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v24 = -1073741811;
    v28[3] = -1073741811LL;
    v28[4] = v6;
    v28[5] = Current;
    WdLogEvent5_WdError(v28);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
  }
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 3001);
  return v24;
}
