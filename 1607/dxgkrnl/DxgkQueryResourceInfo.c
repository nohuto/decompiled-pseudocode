/*
 * XREFs of DxgkQueryResourceInfo @ 0x1C008F430
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 */

__int64 __fastcall DxgkQueryResourceInfo(_OWORD *a1, __int64 a2, __int64 a3)
{
  struct DXGDEVICE **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **ProcessDxgProcess; // r8
  _OWORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  int Resource; // esi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r8
  char v32; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGDEVICE **)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2004;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2004);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = *v9;
    *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v9[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
      ProcessDxgProcess,
      v3 + 4);
    v11 = *(_QWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( v11 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)(v3 + 10), v11, 0, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 10));
      v18 = v13;
      if ( v13 < 0 )
      {
        v28 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        *(_QWORD *)(v28 + 24) = v11;
        *(_QWORD *)(v28 + 32) = v18;
        WdLogEvent5_WdWarning(v28);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 1));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
        if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v29, &EventProfilerExit, v30, 2004);
        return (unsigned int)v18;
      }
      else
      {
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(
                     v11,
                     v3 + 5,
                     *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x2C));
        if ( Resource < 0 )
        {
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 1));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(qword_1C0056840, &EventProfilerExit, v31, 2004);
          return (unsigned int)Resource;
        }
        else
        {
          if ( (unsigned __int64)(a1 + 2) > MmUserProbeAddress || a1 + 2 <= a1 )
            *(_BYTE *)MmUserProbeAddress = 0;
          *a1 = *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
          a1[1] = *(_OWORD *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 10));
          DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 1));
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
          if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v20, &EventProfilerExit, v21, 2004);
          return 0LL;
        }
      }
    }
    v27 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v27 + 24) = *(unsigned int *)(((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v32 & 0xFFFFFFFFFFFFFFC0uLL));
    v26 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v23 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    v25 = qword_1C0056840;
    v26 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v24, 2004);
  return 3221225485LL;
}
