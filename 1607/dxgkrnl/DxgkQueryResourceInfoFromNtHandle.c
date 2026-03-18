/*
 * XREFs of DxgkQueryResourceInfoFromNtHandle @ 0x1C00D2760
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
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097348 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 */

__int64 __fastcall DxgkQueryResourceInfoFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
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
  void *v19; // r12
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  void *v25; // r15
  int Resource; // esi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rax
  unsigned int v31; // edi
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  bool v40; // zf
  _QWORD *v41; // rax
  __int64 v42; // r8
  char v43; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 2073;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2073);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = (struct _KTHREAD **)PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( ProcessDxgProcess )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *v9;
    *(_OWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v9[1];
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
      (DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
      ProcessDxgProcess,
      (struct DXGDEVICE **)(v3 + 32));
    v11 = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    if ( v11 )
    {
      DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
        (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
        *(struct DXGDEVICE **)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
      COREDEVICEACCESS::COREDEVICEACCESS(v3 + 96, v11, 0, v12, 0);
      v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 96));
      v18 = v13;
      if ( v13 < 0 )
      {
        v37 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        *(_QWORD *)(v37 + 24) = v11;
        *(_QWORD *)(v37 + 32) = v18;
        WdLogEvent5_WdWarning(v37);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
        v40 = (qword_1C0056840 & 2) == 0;
LABEL_26:
        if ( !v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          Template_q(v38, &EventProfilerExit, v39, 2073);
        return (unsigned int)v18;
      }
      v19 = *(void **)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
      v20 = ObReferenceObjectByHandle(v19, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, (PVOID *)(v3 + 40), 0LL);
      v18 = v20;
      v25 = *(void **)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
      *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v25;
      if ( v20 != -1073741788 )
      {
        if ( v20 >= 0 )
        {
          Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                       v11,
                       (_DWORD *)(v3 + 48),
                       v23,
                       (__int64)v25);
          ObfDereferenceObject(v25);
          if ( Resource < 0 )
          {
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
            if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(qword_1C0056840, &EventProfilerExit, v42, 2073);
            return (unsigned int)Resource;
          }
          else
          {
            if ( a1 + 40 > MmUserProbeAddress || a1 + 40 <= a1 )
              *(_BYTE *)MmUserProbeAddress = 0;
            *(_OWORD *)a1 = *(_OWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
            *(_OWORD *)(a1 + 16) = *(_OWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
            *(_QWORD *)(a1 + 32) = *(_QWORD *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
            DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
            DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
            if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              Template_q(v27, &EventProfilerExit, v28, 2073);
            return 0LL;
          }
        }
        v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
        v41[3] = v11;
        v41[4] = v19;
        v41[5] = v18;
        WdLogEvent5_WdWarning(v41);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
        DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
        v40 = (qword_1C0056840 & 2) == 0;
        goto LABEL_26;
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v35[3] = v11;
      v35[4] = v19;
      v31 = -1073741788;
      v35[5] = -1073741788LL;
      WdLogEvent5_WdWarning(v35);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 96));
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 8));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
      v33 = qword_1C0056840;
      v34 = (qword_1C0056840 & 2) == 0;
    }
    else
    {
      v36 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v36 + 24) = *(unsigned int *)(((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
      v31 = -1073741811;
      *(_QWORD *)(v36 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v36);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v43 & 0xFFFFFFFFFFFFFFC0uLL));
      v34 = (qword_1C0056840 & 2) == 0;
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdError(v7);
    v31 = -1073741811;
    *(_QWORD *)(v30 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    v33 = qword_1C0056840;
    v34 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v33, &EventProfilerExit, v32, 2073);
  return v31;
}
