/*
 * XREFs of DxgkCreateDevice @ 0x1C008B790
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C001E7D8 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C006AF64 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C007A2D4 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 */

__int64 __fastcall DxgkCreateDevice(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  struct DXGADAPTER *v19; // r12
  struct DXGADAPTER *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rbx
  int v23; // edx
  _DWORD *v24; // r8
  __int64 v25; // r13
  char *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  bool v29; // zf
  int PairingAdapters; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  struct _KEVENT *v38; // rbx
  __int64 v39; // rcx
  KSPIN_LOCK *Global; // rax
  char v41; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2009);
  Current = DXGPROCESS::GetCurrent();
  *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = Current;
  if ( Current )
  {
    v7 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v7;
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v7[1];
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v7[2];
    *(_OWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v7[3];
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL),
      *(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
      (struct _KTHREAD **)Current,
      (struct DXGADAPTER **)(v3 + 40));
    v12 = *(struct DXGADAPTER **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
    if ( v12 )
    {
      if ( (int)DxgkpGetPairingAdapters(
                  *(struct DXGADAPTER **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                  0,
                  (struct DXGADAPTER **)(v3 + 8),
                  (struct DXGADAPTER **)(v3 + 24)) >= 0
        || (*(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(v12, 0, (struct DXGADAPTER **)(v3 + 8), 0LL),
            v22 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        v14 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( !v14 || !*(_QWORD *)(v14 + 1992) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v33 + 24) = 1751LL;
          WdLogEvent5_WdAssertion(v33);
        }
        v15 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        if ( v15 && !*(_QWORD *)(v15 + 1984) )
        {
          v32 = WdLogNewEntry5_WdAssertion(v13);
          *(_QWORD *)(v32 + 24) = 1753LL;
          WdLogEvent5_WdAssertion(v32);
        }
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = (char *)Current + 144;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
        *((_QWORD *)Current + 19) = KeGetCurrentThread();
        v16 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v16;
        v17 = *(_QWORD *)(v16 + 1992);
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v17;
        *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v17;
        v18 = v17 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v18, 0LL);
        *(_QWORD *)(v18 + 8) = KeGetCurrentThread();
        v19 = *(struct DXGADAPTER **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        v20 = *(struct DXGADAPTER **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160), v20, v19);
        DXGADAPTER::ReleaseReference(v20);
        if ( v19 )
          DXGADAPTER::ReleaseReference(v19);
        LODWORD(v22) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 160));
        if ( (int)v22 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160));
          v37 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 24LL;
          *(_QWORD *)(v37 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v37, 0LL);
          KeLeaveCriticalRegion();
          v26 = *(char **)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
        }
        else
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v21) + 657)
            && (*DXGADAPTER::GetAdapterType(v20, (BOOL *)(v3 + 80)) & 0x10) != 0 )
          {
            v38 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
            Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v39);
            DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v38);
            *((_BYTE *)v20 + 167) = 1;
          }
          if ( v20 == v19 )
            v23 = (*(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) >> 1) & 1;
          else
            LOBYTE(v23) = 0;
          LODWORD(v22) = ADAPTER_RENDER::CreateDevice(
                           *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 1992LL),
                           (__int64 *)(v3 + 88),
                           (*(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) & 1) == 0,
                           v19,
                           v23,
                           (*(_DWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) & 4) != 0);
          if ( (int)v22 < 0 )
          {
            v25 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          else
          {
            v24 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 12LL);
            if ( (unsigned __int64)v24 >= MmUserProbeAddress )
              v24 = (_DWORD *)MmUserProbeAddress;
            *v24 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 284LL);
            v25 = *(_QWORD *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160));
          *(_QWORD *)(v25 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v25 + 24, 0LL);
          KeLeaveCriticalRegion();
          v26 = (char *)Current + 144;
        }
        *((_QWORD *)v26 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v26, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v36 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v36 + 24) = *(unsigned int *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
        *(_QWORD *)(v36 + 32) = v22;
        WdLogEvent5_WdError(v36);
      }
    }
    else
    {
      v35 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      *(_QWORD *)(v35 + 24) = *(unsigned int *)(((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      LODWORD(v22) = -1073741811;
      *(_QWORD *)(v35 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v35);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v41 & 0xFFFFFFFFFFFFFFC0uLL));
    v29 = (qword_1C00467F0 & 2) == 0;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v5);
    LODWORD(v22) = -1073741811;
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    v27 = qword_1C00467F0;
    v29 = (qword_1C00467F0 & 2) == 0;
  }
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 2009);
  return (unsigned int)v22;
}
