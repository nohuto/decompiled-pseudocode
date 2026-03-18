/*
 * XREFs of DxgkCreateDevice @ 0x1C0079090
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C0025558 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C00937EC (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C009FD58 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCreateDevice(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGADAPTER **v3; // rbp
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *ProcessDxgProcess; // r13
  _OWORD *v9; // rax
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct DXGADAPTER *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DXGADAPTER *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  struct DXGADAPTER *v21; // r12
  DXGADAPTER *v22; // r15
  __int64 v23; // rbx
  int v24; // ecx
  int v25; // eax
  _DWORD *v26; // r8
  __int64 v27; // r15
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // zf
  int PairingAdapters; // eax
  _DWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  struct _KEVENT *v42; // rbx
  KSPIN_LOCK *Global; // rax
  int v44; // [rsp+20h] [rbp-50h]
  int v45; // [rsp+28h] [rbp-48h]
  struct DXGADAPTER *v46; // [rsp+70h] [rbp+0h] BYREF

  v3 = (struct DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL);
  *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = a1;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2009);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v6);
  *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v9 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = *v9;
    *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v9[1];
    *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v9[2];
    *(_OWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = v9[3];
    v10 = *(unsigned int *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80);
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
      (DXGADAPTERBYHANDLE *)(v3 + 4),
      *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80),
      ProcessDxgProcess,
      v3 + 7);
    v15 = *(struct DXGADAPTER **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    if ( v15 )
    {
      if ( (int)DxgkpGetPairingAdapters(
                  v15,
                  0,
                  (struct DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL),
                  (unsigned __int64 *)v3 + 8,
                  v3 + 1,
                  (unsigned __int64 *)v3 + 14) >= 0
        || (*(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0LL,
            PairingAdapters = DxgkpGetPairingAdapters(
                                v15,
                                0,
                                (struct DXGADAPTER **)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL),
                                (unsigned __int64 *)v3 + 8,
                                0LL,
                                0LL),
            v23 = PairingAdapters,
            PairingAdapters >= 0) )
      {
        if ( !*v3 || !*((_QWORD *)*v3 + 267) )
        {
          v37 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v37 + 24) = 1843LL;
          WdLogEvent5_WdAssertion(v37);
        }
        v17 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        if ( v17 && !*(_QWORD *)(v17 + 2128) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v16);
          *(_QWORD *)(v36 + 24) = 1845LL;
          WdLogEvent5_WdAssertion(v36);
        }
        *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = (char *)ProcessDxgProcess + 136;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)ProcessDxgProcess + 136, 0LL);
        *((_QWORD *)ProcessDxgProcess + 18) = KeGetCurrentThread();
        v18 = *v3;
        *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL);
        v19 = *((_QWORD *)v18 + 267);
        *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v19;
        *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v19;
        v20 = v19 + 24;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v20, 0LL);
        *(_QWORD *)(v20 + 8) = KeGetCurrentThread();
        v21 = *(struct DXGADAPTER **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        v22 = *v3;
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 24), *v3, v21);
        DXGADAPTER::ReleaseReference(v22);
        if ( v21 )
          DXGADAPTER::ReleaseReference(v21);
        LODWORD(v23) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 24));
        if ( (int)v23 < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 24));
          v41 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 24LL;
          *(_QWORD *)(v41 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v41, 0LL);
          KeLeaveCriticalRegion();
          v28 = *(_QWORD **)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48);
        }
        else
        {
          if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 513) )
          {
            LODWORD(v35) = DXGADAPTER::GetAdapterType(v22);
            if ( (*v35 & 0x10) != 0 )
            {
              v42 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
              Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
              DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v42);
              *((_BYTE *)v22 + 183) = 1;
            }
          }
          v24 = *(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88);
          if ( v22 == v21 )
            v25 = ((unsigned __int8)v24 >> 1) & 1;
          else
            LOBYTE(v25) = 0;
          LOBYTE(v45) = (*(_DWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) & 4) != 0;
          LOBYTE(v44) = v25;
          LODWORD(v23) = ADAPTER_RENDER::CreateDevice(
                           *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 2136LL),
                           v3 + 10,
                           (v24 & 1) == 0,
                           v21,
                           v44,
                           v45);
          if ( (int)v23 < 0 )
          {
            v27 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          else
          {
            v26 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 12LL);
            if ( (unsigned __int64)v26 >= MmUserProbeAddress )
              v26 = (_DWORD *)MmUserProbeAddress;
            *v26 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) + 308LL);
            v27 = *(_QWORD *)(((unsigned __int64)&v46 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          }
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 24));
          *(_QWORD *)(v27 + 32) = 0LL;
          ExReleasePushLockExclusiveEx(v27 + 24, 0LL);
          KeLeaveCriticalRegion();
          v28 = (_QWORD *)((char *)ProcessDxgProcess + 136);
        }
        v28[1] = 0LL;
        ExReleasePushLockExclusiveEx(v28, 0LL);
        KeLeaveCriticalRegion();
      }
      else
      {
        v40 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v40 + 24) = v10;
        *(_QWORD *)(v40 + 32) = v23;
        WdLogEvent5_WdError(v40);
      }
    }
    else
    {
      v39 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      *(_QWORD *)(v39 + 24) = v10;
      LODWORD(v23) = -1073741811;
      *(_QWORD *)(v39 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v39);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v3 + 4, v29);
    v32 = (qword_1C0056840 & 2) == 0;
  }
  else
  {
    v38 = WdLogNewEntry5_WdError(v7);
    LODWORD(v23) = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    v30 = qword_1C0056840;
    v32 = (qword_1C0056840 & 2) == 0;
  }
  if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v30, &EventProfilerExit, v31, 2009);
  return (unsigned int)v23;
}
