/*
 * XREFs of DxgkDestroyOverlay @ 0x1C016DAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0008680 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C00086BC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00086D8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0025788 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C015D608 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // zf
  __int64 v14; // rcx
  struct DXGDEVICE *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // ebx
  struct DXGOVERLAY *v24; // r14
  __int64 v25; // rax
  DXGDEVICE *v26; // r13
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r8
  int v31; // edx
  unsigned int v32[2]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2025);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v11 = qword_1C0056840;
    v12 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v12 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v11, &EventProfilerExit, v10, 2025);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v3 = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 2),
    *v3,
    (struct _KTHREAD **)ProcessDxgProcess,
    (struct DXGDEVICE **)v3 + 4);
  v15 = *(struct DXGDEVICE **)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v15;
  if ( !v15 )
  {
    v16 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v16 + 24) = *v3;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_35;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4), v15);
  COREACCESS::COREACCESS((COREACCESS *)(v3 + 16), *(struct DXGADAPTER *const *)(*((_QWORD *)v15 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)(v3 + 16));
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) + 176LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 24),
      (struct DXGPROCESS *)ProcessDxgProcess);
    v23 = (*(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 6) & 0xFFFFFF;
    if ( v23 < *(_DWORD *)(ProcessDxgProcess + 224)
      && (v21 = *(_QWORD *)(ProcessDxgProcess + 208),
          v19 = *(unsigned int *)(v21 + 16LL * v23 + 8),
          v20 = (*(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30,
          ((*(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30) == (*(_BYTE *)(v21 + 16LL * v23 + 8) & 0x30))
      && (v19 & 0x1000) == 0
      && (v19 & 0xF) != 0
      && (*(_BYTE *)(v21 + 16LL * v23 + 8) & 0xF) == 6 )
    {
      v24 = *(struct DXGOVERLAY **)(v21 + 16LL * v23);
    }
    else
    {
      v24 = 0LL;
    }
    if ( v24 )
    {
      v26 = *(DXGDEVICE **)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      if ( v26 == *((DXGDEVICE **)v24 + 2) )
      {
        if ( !DXGDEVICE::IsSupportOverlay(*(DXGDEVICE **)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)) )
        {
          v29 = WdLogNewEntry5_WdAssertion(v28);
          *(_QWORD *)(v29 + 24) = 984LL;
          WdLogEvent5_WdAssertion(v29);
        }
        if ( v23 < *(_DWORD *)(ProcessDxgProcess + 224) )
        {
          v30 = *(_QWORD *)(ProcessDxgProcess + 208);
          v31 = *(_DWORD *)(v30 + 16LL * v23 + 8);
          if ( ((*(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30) == (*(_BYTE *)(v30 + 16LL * v23 + 8) & 0x30)
            && (v31 & 0x1000) == 0
            && (v31 & 0xF) != 0 )
          {
            *(_DWORD *)(v30
                      + 16LL * ((*(_DWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 6) & 0xFFFFFF)
                      + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 24));
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(
          (DXGOVERLAYMUTEX *)(v3 + 12),
          *(struct ADAPTER_RENDER **)(*(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 16LL));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 12));
        DXGDEVICE::DestroyOverlay(v26, v24);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 12));
        DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 12));
        COREACCESS::~COREACCESS((COREACCESS *)(v3 + 16));
        if ( *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
        goto LABEL_18;
      }
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      v27[3] = *(unsigned int *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v27[4] = *v3;
      v27[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v27);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 24));
      COREACCESS::~COREACCESS((COREACCESS *)(v3 + 16));
      if ( !*(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
LABEL_35:
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 2));
        v12 = (qword_1C0056840 & 2) == 0;
        goto LABEL_6;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v25 + 24) = *(unsigned int *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      *(_QWORD *)(v25 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 24));
      COREACCESS::~COREACCESS((COREACCESS *)(v3 + 16));
      if ( !*(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        goto LABEL_35;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    goto LABEL_35;
  }
  COREACCESS::~COREACCESS((COREACCESS *)(v3 + 16));
  if ( *(_QWORD *)(((unsigned __int64)v32 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
LABEL_18:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 2));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v17, &EventProfilerExit, v18, 2025);
  return 0LL;
}
