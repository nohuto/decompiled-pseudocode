/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N@Z @ 0x1C012AA68
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0001794 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002428 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000B0AC (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0019564 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C00195E0 (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00B207C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C014D708 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z @ 0x1C014E174 (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  struct DXGPROCESS *Process; // r14
  struct DXGPROCESS *Current; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  DXGADAPTER *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  DXGADAPTER *v25; // [rsp+20h] [rbp-59h] BYREF
  _BYTE v26[8]; // [rsp+28h] [rbp-51h] BYREF
  _BYTE v27[32]; // [rsp+30h] [rbp-49h] BYREF
  _BYTE v28[8]; // [rsp+50h] [rbp-29h] BYREF
  void *v29; // [rsp+58h] [rbp-21h]
  __int64 v30; // [rsp+60h] [rbp-19h]
  int v31; // [rsp+68h] [rbp-11h]

  v30 = 0LL;
  v4 = a1;
  v29 = a2;
  v31 = 0;
  v6 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v28, 1);
  v11 = v6;
  if ( v6 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v28);
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, Current);
    if ( (_DWORD)v4
      && (v17 = ((unsigned int)v4 >> 6) & 0xFFFFFF, (unsigned int)v17 < *((_DWORD *)Current + 58))
      && (v20 = *((_QWORD *)Current + 27),
          v18 = ((unsigned int)v4 >> 26) & 0x30,
          v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v17 + 8),
          (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v17 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v20 + 16LL * (unsigned int)v17 + 8) & 0xF) == 1
      && (v21 = *(DXGADAPTER **)(v20 + 16LL * (unsigned int)v17)) != 0LL )
    {
      DXGADAPTER::AcquireReference(v21);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
      v25 = v21;
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v26, Process);
      v22 = *((_QWORD *)v21 + 249);
      if ( v22 && *(_QWORD *)(v22 + 408) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, v21, a3);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v26);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v25);
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      LODWORD(v11) = -1073741811;
      *(_QWORD *)(v23 + 24) = v4;
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v12 + 24) = a2;
    *(_QWORD *)(v12 + 32) = v11;
    WdLogEvent5_WdWarning(v12);
  }
  if ( BYTE1(v31) )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v28, v13, v14);
  return (unsigned int)v11;
}
