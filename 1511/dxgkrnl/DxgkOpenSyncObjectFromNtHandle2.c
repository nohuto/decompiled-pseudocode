/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0147720
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036BC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00037BC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000388C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003F7C (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003FA8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00040BC (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C00041F4 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     Template_pp @ 0x1C001E898 (Template_pp.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0094C30 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  ULONG64 v15; // rax
  __m128i v16; // xmm2
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  struct ADAPTER_RENDER **v23; // r13
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // ebx
  int v39; // ebx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT **v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // r13d
  __int64 v45; // rcx
  __int64 v46; // r8
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v47; // [rsp+130h] [rbp+130h]
  _BYTE v48[240]; // [rsp+180h] [rbp+180h] BYREF

  v3 = (unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
    v12 = qword_1C00467F0;
    v13 = (qword_1C00467F0 & 2) == 0;
LABEL_6:
    if ( !v13 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v12, &EventProfilerExit, v11, 2086);
    return 3221225485LL;
  }
  v15 = v4;
  if ( v4 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  v16 = *(__m128i *)v15;
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v15;
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v15 + 16);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v15 + 32);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v15 + 48);
  *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v15 + 64);
  *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v15 + 80);
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
  *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v17;
  if ( (v17 & 0x7FFFFF00) != 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v8, v9);
    *(_QWORD *)(v18 + 24) = 849LL;
    WdLogEvent5_WdWarning(v18);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2086);
    return 3221225485LL;
  }
  if ( (v17 & 0x10) != 0 || (v17 & 0x20) != 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v8, v9);
    *(_QWORD *)(v21 + 24) = 856LL;
    WdLogEvent5_WdWarning(v21);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
    Current,
    (struct DXGDEVICE **)(v3 + 8));
  v23 = *(struct ADAPTER_RENDER ***)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL));
    v13 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 160, (__int64)v23, 0, v25, 0);
  LODWORD(v26) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 160));
  if ( (int)v26 < 0 )
    goto LABEL_23;
  v30 = ObReferenceObjectByHandle(
          *(HANDLE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
          0x20000u,
          g_pDxgkSharedSyncObjectType,
          1,
          (PVOID *)(v3 + 8),
          (POBJECT_HANDLE_INFORMATION)(v3 + 56));
  v26 = v30;
  if ( v30 == -1073741788 )
  {
    v35 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    LODWORD(v26) = -1073741788;
    *(_QWORD *)(v35 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v35);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    if ( *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL));
    v27 = qword_1C00467F0;
    v29 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_26;
  }
  if ( v30 < 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    *(_QWORD *)(v36 + 24) = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    *(_QWORD *)(v36 + 32) = v26;
    WdLogEvent5_WdWarning(v36);
LABEL_23:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
    if ( *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL));
    v29 = (qword_1C00467F0 & 2) == 0;
LABEL_26:
    if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v27, &EventProfilerExit, v28, 2086);
    return (unsigned int)v26;
  }
  v37 = *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C);
  v38 = *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) ^ (*(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                         + 0x20) ^ (16
                                                                                                  * (((unsigned __int8)~*(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x3C) >> 1) & 1))) & 0x10;
  LOBYTE(v37) = ~(_BYTE)v37;
  v39 = ((unsigned __int8)v38 ^ (unsigned __int8)(32 * (v37 & 1))) & 0x20 ^ v38;
  Global = DXGGLOBAL::GetGlobal(v37);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 40), Global);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 40));
  v47.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v39;
  v41 = *(DXGSYNCOBJECT ***)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  v44 = DXGSYNCOBJECT::Open(
          *v41,
          v23[2],
          (struct DXGDEVICE *)v23,
          0LL,
          (unsigned int *)(v3 + 80),
          (void **)(v3 + 88),
          (unsigned __int64 *)(v3 + 96),
          *(_DWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
          v47);
  if ( v44 >= 0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 40));
    if ( v4 >= MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
    *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    *(_OWORD *)(v4 + 48) = *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
    *(_OWORD *)(v4 + 64) = *(_OWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    *(_QWORD *)(v4 + 80) = *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pp(
        v42,
        &EventOpenSyncObject,
        v43,
        *v41,
        *(unsigned int *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
  }
  else if ( *(_BYTE *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
  {
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 40));
  }
  ObfDereferenceObject(v41);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 160));
  if ( *(_QWORD *)(((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)((unsigned __int64)v48 & 0xFFFFFFFFFFFFFFC0uLL));
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v45, &EventProfilerExit, v46, 2086);
  return (unsigned int)v44;
}
