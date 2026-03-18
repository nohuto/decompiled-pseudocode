/*
 * XREFs of DxgkUpdateOverlay @ 0x1C016E650
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
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
 *     ?UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z @ 0x1C016D294 (-UpdateOverlay@DXGOVERLAY@@QEAAJPEAU_D3DKMT_UPDATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkUpdateOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  _OWORD *v4; // rbx
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 ProcessDxgProcess; // r15
  __int64 v9; // rax
  unsigned int updated; // ebx
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v15; // rcx
  struct ADAPTER_RENDER **v16; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  struct DXGOVERLAY *v22; // rbx
  _QWORD *v23; // rax
  int v24; // r15d
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rax
  char v29; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (_OWORD *)a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2023);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    updated = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
    v12 = qword_1C0056840;
    v13 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2023);
    return updated;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *v4;
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v4[1];
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v4[2];
  *(_OWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v4[3];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30),
    (struct _KTHREAD **)ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 8));
  v16 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v16 )
  {
    v17 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v17 + 24) = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    updated = -1073741811;
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
LABEL_14:
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
    *(struct DXGDEVICE **)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED(
    (DXGHANDLETABLELOCKSHARED *)(v3 + 112),
    (struct _KTHREAD **)ProcessDxgProcess);
  v21 = (*(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) >> 6) & 0xFFFFFF;
  if ( (unsigned int)v21 < *(_DWORD *)(ProcessDxgProcess + 224)
    && (v20 = *(_QWORD *)(ProcessDxgProcess + 208),
        v19 = *(unsigned int *)(v20 + 16LL * (unsigned int)v21 + 8),
        v18 = (*(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) >> 26) & 0x30,
        ((*(_DWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34) >> 26) & 0x30) == (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0x30))
    && (v19 & 0x1000) == 0
    && (v19 & 0xF) != 0
    && (*(_BYTE *)(v20 + 16LL * (unsigned int)v21 + 8) & 0xF) == 6 )
  {
    v22 = *(struct DXGOVERLAY **)(v20 + 16LL * (unsigned int)v21);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v21, v19, v20);
    v23[3] = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
    updated = -1073741811;
    v23[4] = -1073741811LL;
LABEL_24:
    WdLogEvent5_WdWarning(v23);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 112));
LABEL_25:
    if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
    goto LABEL_14;
  }
  if ( v16 != *((struct ADAPTER_RENDER ***)v22 + 2) )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v21, v19, v20);
    v23[3] = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x34);
    v23[4] = *(unsigned int *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    updated = -1073741811;
    v23[5] = -1073741811LL;
    goto LABEL_24;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 112));
  COREOVERLAYACCESS::COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 136), v22);
  v24 = COREOVERLAYACCESS::AcquireShared((COREOVERLAYACCESS *)(v3 + 136));
  if ( v24 >= 0 )
  {
    if ( !DXGDEVICE::IsSupportOverlay((DXGDEVICE *)v16) )
    {
      v28 = WdLogNewEntry5_WdAssertion(v27);
      *(_QWORD *)(v28 + 24) = 773LL;
      WdLogEvent5_WdAssertion(v28);
    }
    DXGOVERLAYMUTEX::DXGOVERLAYMUTEX((DXGOVERLAYMUTEX *)(v3 + 24), v16[2]);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 24));
    updated = DXGOVERLAY::UpdateOverlay((struct _EX_RUNDOWN_REF *)v22, (struct _D3DKMT_UPDATEOVERLAY *)(v3 + 48));
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 24));
    DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 24));
    COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 136));
    goto LABEL_25;
  }
  COREOVERLAYACCESS::~COREOVERLAYACCESS((COREOVERLAYACCESS *)(v3 + 136));
  if ( *(_QWORD *)(((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL) + 8) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 8));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)&v29 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v25, &EventProfilerExit, v26, 2023);
  return (unsigned int)v24;
}
