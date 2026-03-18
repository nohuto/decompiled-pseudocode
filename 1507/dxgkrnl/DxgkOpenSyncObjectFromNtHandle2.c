/*
 * XREFs of DxgkOpenSyncObjectFromNtHandle2 @ 0x1C0141C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BEC (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0001CEC (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001D84 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0002714 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0002810 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0002B98 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0002BC8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     Template_pp @ 0x1C001E834 (Template_pp.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEAPEAXPEA_KIU_D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS@@@Z @ 0x1C0083900 (-Open@DXGSYNCOBJECT@@QEAAJPEAVADAPTER_RENDER@@PEAVDXGDEVICE@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAIPEA.c)
 */

__int64 __fastcall DxgkOpenSyncObjectFromNtHandle2(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  ULONG64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // r13
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
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // zf
  NTSTATUS v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rcx
  int v37; // ebx
  int v38; // ebx
  struct DXGGLOBAL *Global; // rax
  DXGSYNCOBJECT **v40; // rbx
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS v49; // [rsp+140h] [rbp+140h]
  _BYTE v50[256]; // [rsp+190h] [rbp+190h] BYREF

  v3 = (unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2086);
  Current = DXGPROCESS::GetCurrent(a1);
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
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = *(_OWORD *)v15;
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = *(_OWORD *)(v15 + 16);
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *(_OWORD *)(v15 + 32);
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = *(_OWORD *)(v15 + 48);
  *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *(_OWORD *)(v15 + 64);
  *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = *(_QWORD *)(v15 + 80);
  *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0;
  v17 = _mm_cvtsi128_si32(_mm_srli_si128(v16, 12));
  *(_DWORD *)v3 = v17;
  if ( (v17 & 0x7FFFFF00) != 0 )
  {
    v18 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7, v8);
    *(_QWORD *)(v18 + 24) = 862LL;
    WdLogEvent5_WdWarning(v18);
    if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      Template_q(v19, &EventProfilerExit, v20, 2086);
    return 3221225485LL;
  }
  if ( (v17 & 0x10) != 0 || (v17 & 0x20) != 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v5, v7, v8);
    *(_QWORD *)(v21 + 24) = 869LL;
    WdLogEvent5_WdWarning(v21);
  }
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE(
    (DXGDEVICEBYHANDLE *)(v3 + 8),
    *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48),
    (struct _KTHREAD **)Current,
    (struct DXGDEVICE **)(v3 + 56));
  v23 = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  if ( !v23 )
  {
    v24 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v24 + 24) = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v13 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_6;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16),
    *(struct DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38));
  COREDEVICEACCESS::COREDEVICEACCESS(v3 + 176, v23, 0, v25, 0);
  LODWORD(v23) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)(v3 + 176));
  if ( (int)v23 < 0 )
    goto LABEL_23;
  v29 = ObReferenceObjectByHandle(
          *(HANDLE *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40),
          0x20000u,
          g_pDxgkSharedSyncObjectType,
          1,
          (PVOID *)(v3 + 32),
          (POBJECT_HANDLE_INFORMATION)(v3 + 160));
  v23 = v29;
  if ( v29 == -1073741788 )
  {
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
    *(_QWORD *)(v34 + 24) = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    LODWORD(v23) = -1073741788;
    *(_QWORD *)(v34 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v34);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 176));
    if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
    v26 = qword_1C00467F0;
    v28 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_26;
  }
  if ( v29 >= 0 )
  {
    v36 = *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4);
    v37 = *(_DWORD *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) ^ (*(_DWORD *)((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) ^ (16 * (((unsigned __int8)~*(_BYTE *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) >> 1) & 1))) & 0x10;
    LOBYTE(v36) = ~(_BYTE)v36;
    v38 = ((unsigned __int8)v37 ^ (unsigned __int8)(32 * (v36 & 1))) & 0x20 ^ v37;
    Global = DXGGLOBAL::GetGlobal(v36, v30, v32, v33);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)(v3 + 40), Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)(v3 + 40));
    v49.0 = (struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS::$3C5DE337AE066ABB2671F6BD60EC95FB::$363714554E8B1FDEDD2ECFF06774C94E)v38;
    v40 = *(DXGSYNCOBJECT ***)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    v41 = DXGSYNCOBJECT::Open(
            *v40,
            *(struct ADAPTER_RENDER **)(*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) + 16LL),
            *(struct DXGDEVICE **)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38),
            0LL,
            (unsigned int *)(v3 + 80),
            (void **)(v3 + 88),
            (unsigned __int64 *)(v3 + 96),
            *(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68),
            v49);
    *(_DWORD *)v3 = v41;
    if ( v41 >= 0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
        DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 40));
      if ( v4 >= MmUserProbeAddress )
        v4 = MmUserProbeAddress;
      *(_OWORD *)v4 = *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50);
      *(_OWORD *)(v4 + 32) = *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      *(_OWORD *)(v4 + 48) = *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      *(_OWORD *)(v4 + 64) = *(_OWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
      *(_QWORD *)(v4 + 80) = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_pp(
          v42,
          &EventOpenSyncObject,
          v43,
          *v40,
          *(unsigned int *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50));
      DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
      v44 = (*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v44 < *((_DWORD *)Current + 58) )
      {
        v45 = *((_QWORD *)Current + 27);
        v46 = *(unsigned int *)(v45 + 16 * v44 + 8);
        if ( ((*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 26) & 0x30) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x30)
          && (v46 & 0xF) != 0 )
        {
          v47 = 2 * ((*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v45
                          + 16
                          * ((*(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 6) & 0xFFFFFFLL)
                          + 8) & 0x1000) == 0 )
          {
            v48 = WdLogNewEntry5_WdAssertion(
                    (*(_DWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) >> 26) & 0x30,
                    v46,
                    v45,
                    0xFFFFFFLL);
            *(_QWORD *)(v48 + 24) = 194LL;
            WdLogEvent5_WdAssertion(v48);
          }
          *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v47 + 8) &= ~0x1000u;
        }
      }
      *((_QWORD *)Current + 25) = 0LL;
      ExReleasePushLockExclusiveEx((char *)Current + 192, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( !*(_BYTE *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) )
      {
        LODWORD(v23) = v41;
        goto LABEL_55;
      }
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)(v3 + 40));
    }
    LODWORD(v23) = *(_DWORD *)v3;
LABEL_55:
    ObfDereferenceObject(*(PVOID *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20));
    goto LABEL_23;
  }
  v35 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
  *(_QWORD *)(v35 + 24) = *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  *(_QWORD *)(v35 + 32) = v23;
  WdLogEvent5_WdWarning(v35);
LABEL_23:
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)(v3 + 176));
  if ( *(_QWORD *)(((unsigned __int64)v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)(v3 + 16));
  DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)(v3 + 8));
  v28 = (qword_1C00467F0 & 2) == 0;
LABEL_26:
  if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 2086);
  return (unsigned int)v23;
}
