/*
 * XREFs of DxgkGetOverlayState @ 0x1C016E260
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ @ 0x1C0006EC8 (--1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EF4 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000C6D8 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000D7DC (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ??1COREOVERLAYACCESS@@QEAA@XZ @ 0x1C0011BF0 (--1COREOVERLAYACCESS@@QEAA@XZ.c)
 *     ??0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z @ 0x1C002571C (--0COREOVERLAYACCESS@@QEAA@QEAVDXGOVERLAY@@@Z.c)
 *     ?AcquireShared@COREOVERLAYACCESS@@QEAAJXZ @ 0x1C0025748 (-AcquireShared@COREOVERLAYACCESS@@QEAAJXZ.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C0025788 (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z @ 0x1C016CE50 (-GetOverlayState@DXGOVERLAY@@QEAAJPEAU_D3DKMT_GETOVERLAYSTATE@@@Z.c)
 */

__int64 __fastcall DxgkGetOverlayState(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // rbx
  __int64 v9; // rax
  int OverlayState; // ebx
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  ULONG64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  struct ADAPTER_RENDER **v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r9
  struct DXGOVERLAY *v24; // rbx
  _QWORD *v25; // rax
  int v26; // r15d
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  char v31; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2057);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    OverlayState = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_6:
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_7:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2057);
    return (unsigned int)OverlayState;
  }
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_QWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)v15;
  *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = *(_DWORD *)(v15 + 8);
  v16 = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    (struct _KTHREAD **)ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 40));
  v18 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( !v18 )
  {
    v19 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v19 + 24) = v16;
    OverlayState = -1073741811;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
LABEL_15:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_7;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED(
    (DXGDEVICEACCESSLOCKSHARED *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 24),
    *(struct DXGDEVICE **)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)(v3 + 64),
    (struct _KTHREAD **)ProcessDxgProcess);
  v22 = (*(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 6) & 0xFFFFFF;
  v23 = *(_DWORD *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) >> 30;
  if ( (unsigned int)v22 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v21 = *(_QWORD *)(ProcessDxgProcess + 208),
        v20 = *(unsigned int *)(v21 + 16LL * (unsigned int)v22 + 8),
        (_DWORD)v23 == ((*(_DWORD *)(v21 + 16LL * (unsigned int)v22 + 8) >> 4) & 3))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v21 + 16LL * (unsigned int)v22 + 8) & 0xF) == 6 )
  {
    v24 = *(struct DXGOVERLAY **)(v21 + 16LL * (unsigned int)v22);
  }
  else
  {
    v24 = 0LL;
  }
  if ( !v24 )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v22, v21, v23);
    OverlayState = -1073741811;
    v25[4] = -1073741811LL;
LABEL_25:
    v25[3] = *(unsigned int *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
    WdLogEvent5_WdWarning(v25);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 64));
LABEL_26:
    DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
    goto LABEL_15;
  }
  if ( v18 != *((struct ADAPTER_RENDER ***)v24 + 2) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v22, v21, v23);
    v25[4] = v16;
    OverlayState = -1073741811;
    v25[5] = -1073741811LL;
    goto LABEL_25;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 64));
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88), v24);
  v26 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)(v3 + 88));
  if ( v26 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v18) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v29 + 24) = 1092LL;
      WdLogEvent5_WdAssertion(v29);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 48), v18[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 48));
    OverlayState = DXGOVERLAY::GetOverlayState(v24, (struct _D3DKMT_GETOVERLAYSTATE *)(v3 + 8));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 48));
    if ( OverlayState < 0 )
    {
      DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 48));
      COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
      DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
      goto LABEL_6;
    }
    v30 = (_BYTE *)(a1 + 8);
    if ( a1 + 8 >= MmUserProbeAddress )
      v30 = (_BYTE *)MmUserProbeAddress;
    *v30 = *(_BYTE *)(((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 48));
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
    goto LABEL_26;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 88));
  DXGDEVICEACCESSLOCKSHARED::~DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)(v3 + 24));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v31 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(qword_1C0056840, &EventProfilerExit, v27, 2057);
  return (unsigned int)v26;
}
