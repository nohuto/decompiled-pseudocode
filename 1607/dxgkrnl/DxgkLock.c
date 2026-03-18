/*
 * XREFs of DxgkLock @ 0x1C006E7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x1C000173C (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000179C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C000A100 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000A128 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0096238 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C009656C (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 */

__int64 __fastcall DxgkLock(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  _OWORD *v9; // rax
  __int64 v10; // rcx
  DXGDEVICE *v11; // rsi
  __int64 v12; // r9
  int v13; // r15d
  _QWORD *v14; // rdx
  _DWORD *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  bool v22; // zf
  __int64 v23; // rax
  char v24; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 2011;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2011);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *v9;
    *(_OWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v9[1];
    *(_OWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v9[2];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 8));
    v11 = *(DXGDEVICE **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( v11 )
    {
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 112),
        *(struct DXGDEVICE **)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
      DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
        (DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 88),
        *(struct DXGADAPTER **)(*((_QWORD *)v11 + 2) + 16LL),
        1);
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 128, (__int64)v11, 0, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 128));
      if ( v13 >= 0 )
      {
        *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0;
        v13 = DXGDEVICE::Lock(v11, (struct _D3DKMT_LOCK *)(v3 + 40), (struct COREDEVICEACCESS *)(v3 + 128));
        if ( v13 >= 0 )
        {
          v14 = (_QWORD *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v14 = (_QWORD *)MmUserProbeAddress;
          *v14 = *(_QWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
          v15 = (_DWORD *)(a1 + 4);
          if ( a1 + 4 >= MmUserProbeAddress )
            v15 = (_DWORD *)MmUserProbeAddress;
          *v15 = *(_DWORD *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C);
        }
      }
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)(v3 + 88));
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)(v3 + 112));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL));
      if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v16, &EventProfilerExit, v17, 2011);
      return (unsigned int)v13;
    }
    v23 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v23 + 24) = *(unsigned int *)(((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v24 & 0xFFFFFFFFFFFFFFC0uLL));
    v22 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v19 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    v21 = qword_1C0056840;
    v22 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v21, &EventProfilerExit, v20, 2011);
  return 3221225485LL;
}
