/*
 * XREFs of ?DxgEscapeSuspendResumeProcess@@YAJIPEAX_N1@Z @ 0x1C01686FC
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C000C49C (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     ??0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C001D6C8 (--0DXGPROCESSDEVICEITERATIONLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ @ 0x1C001D71C (--1DXGPROCESSDEVICEITERATIONLOCK@@QEAA@XZ.c)
 *     ?Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ @ 0x1C00CE14C (-Release@DXGPROCESSMUTEXBYHANDLE@@QEAAXXZ.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00CE1EC (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C0173C9C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 */

__int64 __fastcall DxgEscapeSuspendResumeProcess(unsigned int a1, void *a2, bool a3, bool a4)
{
  __int64 v6; // rsi
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  struct DXGPROCESS *Process; // r14
  __int64 v18; // rcx
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 ProcessDxgProcess; // rdi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE v31[8]; // [rsp+20h] [rbp-69h] BYREF
  DXGADAPTER *v32[2]; // [rsp+28h] [rbp-61h] BYREF
  _BYTE v33[24]; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v34[8]; // [rsp+50h] [rbp-39h] BYREF
  void *v35; // [rsp+58h] [rbp-31h]
  __int64 v36; // [rsp+60h] [rbp-29h]
  int v37; // [rsp+68h] [rbp-21h]
  __int16 v38; // [rsp+6Ch] [rbp-1Dh]
  char v39; // [rsp+6Eh] [rbp-1Bh]

  v36 = 0LL;
  v38 = 0;
  v6 = a1;
  v35 = a2;
  v37 = 2048;
  v39 = 0;
  v8 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v34, 1);
  v13 = v8;
  if ( v8 >= 0 )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v34);
    CurrentProcess = PsGetCurrentProcess(v18);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v20);
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
      (DXGHANDLETABLELOCKSHARED *)v33,
      (struct _KTHREAD **)ProcessDxgProcess);
    if ( (_DWORD)v6
      && (v22 = ((unsigned int)v6 >> 6) & 0xFFFFFF, (unsigned int)v22 < *(_DWORD *)(ProcessDxgProcess + 224))
      && (v25 = *(_QWORD *)(ProcessDxgProcess + 208),
          v23 = ((unsigned int)v6 >> 26) & 0x30,
          v24 = *(unsigned int *)(v25 + 16LL * (unsigned int)v22 + 8),
          (((unsigned int)v6 >> 26) & 0x30) == (*(_BYTE *)(v25 + 16LL * (unsigned int)v22 + 8) & 0x30))
      && (v24 & 0x1000) == 0
      && (v24 & 0xF) != 0
      && (*(_BYTE *)(v25 + 16LL * (unsigned int)v22 + 8) & 0xF) == 1
      && (v26 = *(_QWORD *)(v25 + 16LL * (unsigned int)v22)) != 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v26 + 24));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
      v32[1] = (DXGADAPTER *)-1LL;
      v32[0] = (DXGADAPTER *)v26;
      KeEnterCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v31, Process);
      v27 = *(_QWORD *)(v26 + 2136);
      if ( v27 && *(_QWORD *)(v27 + 384) )
        DXGPROCESS::SuspendResumeEscapeAllDevices(Process, (const struct DXGADAPTER *)v26, a3, a4);
      KeLeaveCriticalRegion();
      DXGPROCESSDEVICEITERATIONLOCK::~DXGPROCESSDEVICEITERATIONLOCK((DXGPROCESSDEVICEITERATIONLOCK *)v31);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v32, v28);
    }
    else
    {
      v29 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      LODWORD(v13) = -1073741811;
      *(_QWORD *)(v29 + 24) = v6;
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = a2;
    *(_QWORD *)(v14 + 32) = v13;
    WdLogEvent5_WdWarning(v14);
  }
  if ( (_BYTE)v38 )
    DXGPROCESSMUTEXBYHANDLE::Release((DXGPROCESSMUTEXBYHANDLE *)v34, v15, v16);
  return (unsigned int)v13;
}
