/*
 * XREFs of ?DxgkCddDestroy@@YAJIIQEAXE@Z @ 0x1C0071920
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0008570 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     DxgkShutdownBootGraphics @ 0x1C0073320 (DxgkShutdownBootGraphics.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00936AC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096C5C (-DestroyContext@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkDestroyCddDeviceAndContextForCurrentSession @ 0x1C0180738 (DxgkDestroyCddDeviceAndContextForCurrentSession.c)
 */

__int64 __fastcall DxgkCddDestroy(__int64 a1, unsigned int a2, char *a3, char a4)
{
  __int64 v6; // r15
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 ProcessDxgProcess; // rdi
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
  __int64 v29; // rbp
  __int64 v30; // r9
  _QWORD v31[2]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v32[32]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v33[96]; // [rsp+60h] [rbp-88h] BYREF

  v6 = a2;
  v7 = (unsigned int)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 3001);
  DxgkShutdownBootGraphics(a3, (unsigned int)v7);
  if ( !a3 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v8);
LABEL_33:
    v24 = -1073741811;
    v26[3] = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_25;
  }
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v10);
  if ( !ProcessDxgProcess )
  {
    v27 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v27 + 24) = 305LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v13 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v14 = *(_QWORD *)(ProcessDxgProcess + 208),
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
  ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v26[4] = v7;
    v26[5] = ProcessDxgProcess;
    goto LABEL_33;
  }
  if ( a4 )
    DxgkDestroyCddDeviceAndContextForCurrentSession((struct _LUID *)(a3 + 268), (struct DXGDEVICE *)v16);
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
  v18 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
  if ( v18 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v19 = *(_QWORD *)(ProcessDxgProcess + 208),
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
  ExReleasePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
  KeLeaveCriticalRegion();
  if ( v21 )
  {
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 32), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    {
      v29 = *(_QWORD *)(v21 + 16);
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
        (DXGDEVICEACCESSLOCKEXCLUSIVE *)v31,
        (struct DXGDEVICE *)v29);
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)v32,
        *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)(v21 + 16) + 16LL) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, v29, 2, v30, 0);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v33);
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 16) + 16LL) + 176LL) != 4 )
        DXGDEVICE::DestroyContext((DXGDEVICE *)v29, (struct DXGCONTEXT *)v21, (struct COREDEVICEACCESS *)v33);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
      if ( v32[16] )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v32);
      if ( v31[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v31);
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
    v28[5] = ProcessDxgProcess;
    WdLogEvent5_WdError(v28);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v16 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v16 + 16), (struct DXGDEVICE *)v16);
  }
LABEL_25:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v22, &EventProfilerExit, v23, 3001);
  return v24;
}
