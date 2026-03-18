/*
 * XREFs of DxgkDestroyOverlay @ 0x1C0143440
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0001E30 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001E60 (--1COREACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002AA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C000B650 (--0DXGOVERLAYMUTEX@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?IsSupportOverlay@DXGDEVICE@@QEAAEXZ @ 0x1C001E91C (-IsSupportOverlay@DXGDEVICE@@QEAAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z @ 0x1C0135710 (-DestroyOverlay@DXGDEVICE@@QEAAXPEAVDXGOVERLAY@@@Z.c)
 */

__int64 __fastcall DxgkDestroyOverlay(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rbp
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  bool v10; // zf
  __int64 v12; // rcx
  struct DXGDEVICE *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  struct DXGOVERLAY *v22; // r15
  __int64 v23; // rax
  DXGDEVICE *v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r8
  int v32; // edx
  unsigned int v33[2]; // [rsp+60h] [rbp+0h] BYREF

  v3 = (unsigned int *)((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL);
  v4 = (_QWORD *)a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2025);
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    v9 = qword_1C00467F0;
    v10 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v10 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v9, &EventProfilerExit, v8, 2025);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (_QWORD *)MmUserProbeAddress;
  *(_QWORD *)v3 = *v4;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 2),
    *v3,
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)v3 + 4);
  v13 = *(struct DXGDEVICE **)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v13;
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v14 + 24) = *v3;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_35;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4), v13);
  COREACCESS::COREACCESS((COREACCESS *)(v3 + 12), *(struct DXGADAPTER *const *)(*((_QWORD *)v13 + 2) + 16LL));
  COREACCESS::AcquireShared((COREACCESS *)(v3 + 12));
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL) + 160LL) != 4 )
  {
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)(v3 + 22), Current);
    v21 = (*(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 6) & 0xFFFFFF;
    if ( v21 < *((_DWORD *)Current + 58)
      && (v19 = *((_QWORD *)Current + 27),
          v17 = *(unsigned int *)(v19 + 16LL * v21 + 8),
          v18 = (*(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30,
          ((*(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v21 + 8) & 0x30))
      && (v17 & 0x1000) == 0
      && (v17 & 0xF) != 0
      && (*(_BYTE *)(v19 + 16LL * v21 + 8) & 0xF) == 6 )
    {
      v22 = *(struct DXGOVERLAY **)(v19 + 16LL * v21);
    }
    else
    {
      v22 = 0LL;
    }
    if ( v22 )
    {
      v24 = *(DXGDEVICE **)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
      if ( v24 == *((DXGDEVICE **)v22 + 2) )
      {
        if ( !DXGDEVICE::IsSupportOverlay(*(DXGDEVICE **)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20)) )
        {
          v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
          *(_QWORD *)(v30 + 24) = 984LL;
          WdLogEvent5_WdAssertion(v30);
        }
        if ( v21 < *((_DWORD *)Current + 58) )
        {
          v31 = *((_QWORD *)Current + 27);
          v32 = *(_DWORD *)(v31 + 16LL * v21 + 8);
          if ( ((*(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 26) & 0x30) == (*(_BYTE *)(v31 + 16LL * v21 + 8) & 0x30)
            && (v32 & 0x1000) == 0
            && (v32 & 0xF) != 0 )
          {
            *(_DWORD *)(v31
                      + 16LL * ((*(_DWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4) >> 6) & 0xFFFFFF)
                      + 8) |= 0x1000u;
          }
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 22));
        DXGOVERLAYMUTEX::DXGOVERLAYMUTEX(
          (DXGOVERLAYMUTEX *)(v3 + 18),
          *(struct ADAPTER_RENDER **)(*(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 16LL));
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)(v3 + 18));
        DXGDEVICE::DestroyOverlay(v24, v22);
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)(v3 + 18));
        DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)(v3 + 18));
        COREACCESS::~COREACCESS((COREACCESS *)(v3 + 12));
        if ( *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
        goto LABEL_18;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v25[3] = *(unsigned int *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      v25[4] = *v3;
      v25[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v25);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 22));
      COREACCESS::~COREACCESS((COREACCESS *)(v3 + 12));
      if ( !*(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      {
LABEL_35:
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 2));
        v10 = (qword_1C00467F0 & 2) == 0;
        goto LABEL_6;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v23 + 24) = *(unsigned int *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      *(_QWORD *)(v23 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v23);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)(v3 + 22));
      COREACCESS::~COREACCESS((COREACCESS *)(v3 + 12));
      if ( !*(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        goto LABEL_35;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
    goto LABEL_35;
  }
  COREACCESS::~COREACCESS((COREACCESS *)(v3 + 12));
  if ( *(_QWORD *)(((unsigned __int64)v33 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 4));
LABEL_18:
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 2));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v15, &EventProfilerExit, v16, 2025);
  return 0LL;
}
