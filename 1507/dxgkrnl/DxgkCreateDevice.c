/*
 * XREFs of DxgkCreateDevice @ 0x1C008E3F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z @ 0x1C001E718 (-SetSchedulerCrossAdapterData@DXGGLOBAL@@QEAAXPEAU_KEVENT@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0078CB8 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@Z @ 0x1C0094690 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EE@.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  struct DXGADAPTER *v22; // r12
  struct DXGADAPTER *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // edx
  _DWORD *v30; // r8
  __int64 v31; // r13
  __int64 v32; // r8
  DXGADAPTER *v33; // rcx
  bool v34; // zf
  int PairingAdapters; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  struct _KEVENT *v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  KSPIN_LOCK *Global; // rax
  DXGADAPTER *v50; // [rsp+70h] [rbp+0h] BYREF

  v3 = (unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = a1;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2009);
  Current = DXGPROCESS::GetCurrent(a1);
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = Current;
  if ( !Current )
  {
    v38 = WdLogNewEntry5_WdError(v5);
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v38);
    v33 = (DXGADAPTER *)qword_1C00467F0;
    v34 = (qword_1C00467F0 & 2) == 0;
    goto LABEL_25;
  }
  v7 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = *v7;
  *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v7[1];
  *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v7[2];
  *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = v7[3];
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL),
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60),
    (struct _KTHREAD **)Current,
    (struct DXGADAPTER **)(v3 + 40));
  v12 = *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28);
  if ( v12 )
  {
    if ( (int)DxgkpGetPairingAdapters(
                *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28),
                0LL,
                (struct DXGADAPTER **)(v3 + 8),
                (struct DXGADAPTER **)(v3 + 24)) >= 0
      || (*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL,
          PairingAdapters = DxgkpGetPairingAdapters(v12, 0LL, (struct DXGADAPTER **)(v3 + 8), 0LL),
          v26 = PairingAdapters,
          PairingAdapters >= 0) )
    {
      v17 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      if ( !v17 || !*(_QWORD *)(v17 + 1984) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        *(_QWORD *)(v43 + 24) = 1725LL;
        WdLogEvent5_WdAssertion(v43);
      }
      v18 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      if ( v18 && !*(_QWORD *)(v18 + 1976) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
        *(_QWORD *)(v37 + 24) = 1727LL;
        WdLogEvent5_WdAssertion(v37);
      }
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = (char *)Current + 144;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)Current + 144, 0LL);
      *((_QWORD *)Current + 19) = KeGetCurrentThread();
      v19 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v19;
      v20 = *(_QWORD *)(v19 + 1984);
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v20;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v20;
      v21 = v20 + 24;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v21, 0LL);
      *(_QWORD *)(v21 + 8) = KeGetCurrentThread();
      v22 = *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
      v23 = *(struct DXGADAPTER **)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160), v23, v22);
      DXGADAPTER::ReleaseReference(v23);
      if ( v22 )
        DXGADAPTER::ReleaseReference(v22);
      LODWORD(v26) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)(v3 + 160));
      if ( (int)v26 >= 0 )
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal(v25, v24, v27, v28) + 513)
          && (*DXGADAPTER::GetAdapterType(v23, (BOOL *)(v3 + 80)) & 0x10) != 0 )
        {
          v44 = (struct _KEVENT *)_guard_dispatch_icall_fptr();
          Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal(v46, v45, v47, v48);
          DXGGLOBAL::SetSchedulerCrossAdapterData(Global, v44);
          *((_BYTE *)v23 + 167) = 1;
        }
        if ( v23 == v22 )
          v29 = (*(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) >> 1) & 1;
        else
          LOBYTE(v29) = 0;
        LODWORD(v26) = ADAPTER_RENDER::CreateDevice(
                         *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) + 1984LL),
                         v3 + 88,
                         (*(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) & 1) == 0,
                         v22,
                         (_BYTE)v29,
                         (*(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) & 4) != 0);
        if ( (int)v26 < 0 )
        {
          v31 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        else
        {
          v30 = (_DWORD *)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) + 12LL);
          if ( (unsigned __int64)v30 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = *(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) + 284LL);
          v31 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160));
        *(_QWORD *)(v31 + 32) = 0LL;
        ExReleasePushLockExclusiveEx(v31 + 24, 0LL);
        KeLeaveCriticalRegion();
        *((_QWORD *)Current + 19) = 0LL;
        ExReleasePushLockExclusiveEx((char *)Current + 144, 0LL);
        KeLeaveCriticalRegion();
        v33 = *(DXGADAPTER **)v3;
        if ( *(_QWORD *)v3 )
          DXGADAPTER::ReleaseReference(v33);
        goto LABEL_24;
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)(v3 + 160));
      v40 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) + 24LL;
      *(_QWORD *)(v40 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v40, 0LL);
      KeLeaveCriticalRegion();
      v41 = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
      *(_QWORD *)(v41 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v41, 0LL);
      KeLeaveCriticalRegion();
    }
    else
    {
      v42 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v42 + 24) = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
      *(_QWORD *)(v42 + 32) = v26;
      WdLogEvent5_WdError(v42);
    }
  }
  else
  {
    v39 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v39 + 24) = *(unsigned int *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60);
    LODWORD(v26) = -1073741811;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
  }
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE((DXGADAPTER **)((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL));
LABEL_24:
  v34 = (qword_1C00467F0 & 2) == 0;
LABEL_25:
  if ( !v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)v33, &EventProfilerExit, v32, 2009);
  return (unsigned int)v26;
}
