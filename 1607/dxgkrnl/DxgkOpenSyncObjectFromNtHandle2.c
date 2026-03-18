/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C016C300
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C000449C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0004678 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007F80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00080A0 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0008304 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00083E8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00084E0 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     Template_pp @ 0x1C00256AC (Template_pp.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C00A4AA0 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // r12
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 ProcessDxgProcess; // r13
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  bool v15; // zf
  ULONG64 v17; // rax
  __m128i v18; // xmm2
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  bool v30; // zf
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  int v39; // ebx
  int v40; // ebx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT **v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // r8
  __int64 v48; // rbx
  __int64 v49; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v50; // [rsp+150h] [rbp+150h]
  _BYTE v51[272]; // [rsp+1A0h] [rbp+1A0h] BYREF

  v3 = (unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v6);
  if ( !ProcessDxgProcess )
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    v14 = qword_1C0056840;
    v15 = (qword_1C0056840 & 2) == 0;
LABEL_6:
    if ( !v15 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v14, &EventProfilerExit, v13, 2086);
    return 3221225485LL;
  }
  v17 = v4;
  if ( v4 >= MmUserProbeAddress )
    v17 = MmUserProbeAddress;
  v18 = *(__m128i *)v17;
  *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v17;
  *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v17 + 16);
  *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v17 + 32);
  *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v17 + 48);
  *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v17 + 64);
  *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v17 + 80);
  *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
  v19 = _mm_cvtsi128_si32(_mm_srli_si128(v18, 12));
  *(_DWORD *)v3 = v19;
  if ( (v19 & 0x7FFFFF00) != 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = 894LL;
    WdLogEvent5_WdWarning(v20);
    if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q(v21, &EventProfilerExit, v22, 2086);
    return 3221225485LL;
  }
  if ( (v19 & 0x10) != 0 || (v19 & 0x20) != 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9, v10);
    *(_QWORD *)(v23 + 24) = 901LL;
    WdLogEvent5_WdWarning(v23);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
    (struct _KTHREAD **)ProcessDxgProcess,
    (struct DXGDEVICE **)(v3 + 32));
  v25 = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
  if ( !v25 )
  {
    v26 = WdLogNewEntry5_WdError(v24);
    *(_QWORD *)(v26 + 24) = *(unsigned int *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v15 = (qword_1C0056840 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 176, v25, 0, v27, 0);
  LODWORD(v25) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 176));
  if ( (int)v25 < 0 )
    goto LABEL_23;
  v31 = ObReferenceObjectByHandle(
          *(HANDLE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
          0x20000u,
          g_pDxgkSharedSyncObjectType,
          1,
          (PVOID *)(v3 + 40),
          (POBJECT_HANDLE_INFORMATION)(v3 + 160));
  v25 = v31;
  if ( v31 == -1073741788 )
  {
    v36 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
    *(_QWORD *)(v36 + 24) = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    LODWORD(v25) = -1073741788;
    *(_QWORD *)(v36 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v36);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 176));
    if ( *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v28 = qword_1C0056840;
    v30 = (qword_1C0056840 & 2) == 0;
    goto LABEL_26;
  }
  if ( v31 >= 0 )
  {
    v38 = *(unsigned int *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
    v39 = *(_DWORD *)((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) ^ (*(_DWORD *)((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) ^ (16 * (((unsigned __int8)~*(_BYTE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) >> 1) & 1))) & 0x10;
    LOBYTE(v38) = ~(_BYTE)v38;
    v40 = ((unsigned __int8)v39 ^ (unsigned __int8)(32 * (v38 & 1))) & 0x20 ^ v39;
    Global = DXGGLOBAL::GetGlobal(v38);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 48), Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 48));
    v50.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v40;
    v42 = *(DXGSYNCOBJECT ***)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    v43 = DXGSYNCOBJECT::Open(
            *v42,
            *(struct ADAPTER_RENDER **)(*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 16LL),
            *(struct DXGDEVICE **)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20),
            0LL,
            (unsigned int *)(v3 + 80),
            (void **)(v3 + 88),
            (unsigned __int64 *)(v3 + 96),
            *(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
            v50);
    *(_DWORD *)v3 = v43;
    if ( v43 >= 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      *(_OWORD *)(v4 + 48) = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      *(_OWORD *)(v4 + 64) = *(_OWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pp(
          v44,
          &EventOpenSyncObject,
          v45,
          *v42,
          *(unsigned int *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(ProcessDxgProcess + 184));
      v46 = (*(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v46 < *(_DWORD *)(ProcessDxgProcess + 224) )
      {
        v47 = *(_QWORD *)(ProcessDxgProcess + 208);
        if ( ((*(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 26) & 0x30) == (*(_BYTE *)(v47 + 16 * v46 + 8) & 0x30)
          && (*(_DWORD *)(v47 + 16 * v46 + 8) & 0xF) != 0 )
        {
          v48 = 2 * ((*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v47
                          + 16
                          * ((*(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFFLL)
                          + 8) & 0x1000) == 0 )
          {
            v49 = WdLogNewEntry5_WdAssertion((*(_DWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 26) & 0x30);
            *(_QWORD *)(v49 + 24) = 193LL;
            WdLogEvent5_WdAssertion(v49);
          }
          *(_DWORD *)(*(_QWORD *)(ProcessDxgProcess + 208) + 8 * v48 + 8) &= ~0x1000u;
        }
      }
      *(_QWORD *)(ProcessDxgProcess + 192) = 0LL;
      ExReleasePushLockExclusiveEx(ProcessDxgProcess + 184, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( !*(_BYTE *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) )
      {
        LODWORD(v25) = v43;
        goto LABEL_55;
      }
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 48));
    }
    LODWORD(v25) = *(_DWORD *)v3;
LABEL_55:
    ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28));
    goto LABEL_23;
  }
  v37 = WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
  *(_QWORD *)(v37 + 24) = *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(v37 + 32) = v25;
  WdLogEvent5_WdWarning(v37);
LABEL_23:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 176));
  if ( *(_QWORD *)(((unsigned __int64)v51 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  v30 = (qword_1C0056840 & 2) == 0;
LABEL_26:
  if ( !v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v28, &EventProfilerExit, v29, 2086);
  return (unsigned int)v25;
}
