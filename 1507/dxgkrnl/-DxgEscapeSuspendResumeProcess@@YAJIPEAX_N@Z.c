/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C0124974
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002F1C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000F0D8 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0017A90 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C0017B0C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00DB224 (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ @ 0x1C00DB2B4 (-Acquire@DXGPROCESSMUTEXBYHANDLE@@QEAAJXZ.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z @ 0x1C0149ED0 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, DXGPROCESS *a2, __int64 a3, __int64 a4)
{
  bool v4; // r15
  __int64 v5; // rsi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  struct DXGPROCESS *Process; // r14
  __int64 v17; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGADAPTER *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v27[24]; // [rsp+20h] [rbp-40h] BYREF
  DXGPROCESS *v28[3]; // [rsp+38h] [rbp-28h] BYREF
  __int16 v29; // [rsp+50h] [rbp-10h]
  char v30; // [rsp+98h] [rbp+38h] BYREF
  DXGADAPTER *v31; // [rsp+A8h] [rbp+48h] BYREF

  v28[2] = 0LL;
  v4 = a3;
  v5 = a1;
  v28[1] = a2;
  v29 = 0;
  v7 = DXGPROCESSMUTEXBYHANDLE::Acquire((DXGPROCESSMUTEXBYHANDLE *)v28, (__int64)a2, a3, a4);
  v12 = v7;
  if ( v7 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v28);
    Current = DXGPROCESS::GetCurrent(v17);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, Current);
    if ( (_DWORD)v5
      && (v19 = ((unsigned int)v5 >> 6) & 0xFFFFFF, (unsigned int)v19 < *((_DWORD *)Current + 58))
      && (v22 = *((_QWORD *)Current + 27),
          v20 = ((unsigned int)v5 >> 26) & 0x30,
          v21 = *(unsigned int *)(v22 + 16LL * (unsigned int)v19 + 8),
          (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * (unsigned int)v19 + 8) & 0x30))
      && (v21 & 0x1000) == 0
      && (v21 & 0xF) != 0
      && (*(_BYTE *)(v22 + 16LL * (unsigned int)v19 + 8) & 0xF) == 1
      && (v23 = *(DXGADAPTER **)(v22 + 16LL * (unsigned int)v19)) != 0LL )
    {
      DXGADAPTER::AcquireReference(v23);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      v31 = v23;
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v30, Process);
      v24 = *((_QWORD *)v23 + 248);
      if ( v24 && *(_QWORD *)(v24 + 384) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, v23, v4);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)&v30);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v31);
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      LODWORD(v12) = -1073741811;
      *(_QWORD *)(v25 + 24) = v5;
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v13 + 24) = a2;
    *(_QWORD *)(v13 + 32) = v12;
    WdLogEvent5_WdWarning(v13);
  }
  if ( HIBYTE(v29) )
    DXGPROCESSMUTEXBYHANDLE::Release(v28, v14, v15);
  return (unsigned int)v12;
}
