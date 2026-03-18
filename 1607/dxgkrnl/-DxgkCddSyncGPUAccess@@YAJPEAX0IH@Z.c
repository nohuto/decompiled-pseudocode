/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0079F60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00085E0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0009524 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009890 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00A75D0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00A7610 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0145540 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0151998 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, struct DXGADAPTER *a2, __int64 a3, int a4)
{
  __int64 v5; // rsi
  char *ProcessDxgProcess; // r14
  int PairingAdapters; // eax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // r8d
  struct DXGALLOCATION *v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  struct _KEVENT *v25; // rsi
  volatile signed __int64 *v26; // r12
  volatile signed __int64 *v27; // rcx
  signed __int64 v28; // rax
  struct DXGADAPTER *v29; // r15
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rdx
  struct DXGADAPTER *v36; // rcx
  struct DXGADAPTER *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int8 v41; // si
  __int64 v42; // r8
  __int64 CurrentProcess; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // r9d
  __int64 v49; // rax
  _QWORD *v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+30h] [rbp-99h] BYREF
  char v54[8]; // [rsp+38h] [rbp-91h] BYREF
  char v55[8]; // [rsp+40h] [rbp-89h] BYREF
  char v56[8]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v57; // [rsp+50h] [rbp-79h]
  struct DXGADAPTER *v58; // [rsp+58h] [rbp-71h]
  char v59; // [rsp+60h] [rbp-69h]
  char v60[8]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v61; // [rsp+70h] [rbp-59h]
  struct DXGADAPTER *v62; // [rsp+78h] [rbp-51h]
  char v63; // [rsp+80h] [rbp-49h]
  char *v64; // [rsp+90h] [rbp-39h]
  char v65; // [rsp+A0h] [rbp-29h]
  char v66[8]; // [rsp+A8h] [rbp-21h] BYREF
  char *v67; // [rsp+B0h] [rbp-19h]
  int v68; // [rsp+B8h] [rbp-11h]
  unsigned __int64 v69[3]; // [rsp+C0h] [rbp-9h] BYREF
  struct DXGADAPTER *v70; // [rsp+D8h] [rbp+Fh]
  char v71; // [rsp+130h] [rbp+67h]
  struct DXGADAPTER *v72; // [rsp+138h] [rbp+6Fh] BYREF
  int v73; // [rsp+148h] [rbp+7Fh]

  v73 = a4;
  v5 = (unsigned int)a3;
  ProcessDxgProcess = (char *)a1;
  v71 = a3;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3016);
  if ( !ProcessDxgProcess )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = (char *)PsGetProcessDxgProcess(CurrentProcess, v44);
  }
  if ( !a2 )
  {
    v45 = WdLogNewEntry5_WdError(a1);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v45 + 24) = -1073741811LL;
LABEL_62:
    WdLogEvent5_WdError(v45);
    goto LABEL_52;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a2, 0, &v72, v69, 0LL, 0LL);
  v9 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v45 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v45 + 24) = a2;
    *(_QWORD *)(v45 + 32) = v9;
    goto LABEL_62;
  }
  if ( !v72 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v46 + 24) = 1964LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v53 = 0LL;
  v67 = ProcessDxgProcess + 184;
  if ( ProcessDxgProcess != (char *)-184LL && *((struct _KTHREAD **)ProcessDxgProcess + 24) == KeGetCurrentThread() )
  {
    v47 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v47 + 24) = 1142LL;
    WdLogEvent5_WdAssertion(v47);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(ProcessDxgProcess + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v48 = *((_DWORD *)ProcessDxgProcess + 50);
      if ( v48 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v10, &EventBlockThread, v11, v48);
    }
    ExAcquirePushLockSharedEx(ProcessDxgProcess + 184, 0LL);
  }
  v68 = 1;
  v12 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v12 < *((_DWORD *)ProcessDxgProcess + 56)
    && (v13 = *((_QWORD *)ProcessDxgProcess + 26),
        v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
    && (v14 & 0x1000) == 0
    && (v14 & 0xF) != 0
    && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 5 )
  {
    v15 = *(struct DXGALLOCATION **)(v13 + 16LL * v12);
  }
  else
  {
    v15 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v54, v15);
  DXGALLOCATIONREFERENCE::MoveAssign(&v53, v54);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v54);
  v9 = v53;
  if ( v53 )
  {
    v20 = *(_QWORD *)(v53 + 8);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v66);
    if ( *(_QWORD *)(v9 + 24) )
    {
      v25 = (struct _KEVENT *)(*(_QWORD *)(v20 + 16) + 80LL);
      v65 = 1;
      if ( !KeReadStateEvent(v25) )
        KeWaitForSingleObject(v25, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL));
        v41 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v42, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v20 + 80), 1u);
        if ( v41 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v20 + 16) + 16LL) + 96LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v26 = *(volatile signed __int64 **)(*(_QWORD *)(v20 + 16) + 16LL);
      v70 = (struct DXGADAPTER *)v26;
      _InterlockedIncrement64(v26 + 3);
      KeEnterCriticalRegion();
      v64 = (char *)v70 + 120;
      ExAcquirePushLockSharedEx((char *)v70 + 120, 0LL);
      v27 = (volatile signed __int64 *)v72;
      v58 = v72;
      v59 = 0;
      if ( v72 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v72 + 3);
        v27 = (volatile signed __int64 *)v72;
        v57 = -1LL;
      }
      v62 = (struct DXGADAPTER *)v27;
      v63 = 0;
      if ( v27 )
      {
        _InterlockedIncrement64(v27 + 3);
        v27 = (volatile signed __int64 *)v72;
        v61 = -1LL;
      }
      v28 = _InterlockedExchangeAdd64(v27 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v29 = v72;
      if ( v28 == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v72 + 2), v72);
      v30 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v55);
      v32 = v30;
      if ( v30 < 0 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v51[3] = v32;
        v51[4] = a2;
        v51[5] = ProcessDxgProcess;
        WdLogEvent5_WdEvent(v51);
        LODWORD(v9) = v32;
      }
      else
      {
        if ( !*((_QWORD *)v29 + 267) )
        {
          v52 = WdLogNewEntry5_WdAssertion(v31);
          *(_QWORD *)(v52 + 24) = 2022LL;
          WdLogEvent5_WdAssertion(v52);
        }
        v33 = 0;
        if ( v73 )
        {
          v33 = 1;
          *(_DWORD *)(*(_QWORD *)(v53 + 48) + 4LL) &= ~0x400u;
        }
        if ( v58 != v62 )
          COREACCESS::Release((COREACCESS *)v60);
        COREACCESS::Release((COREACCESS *)v56);
        ExReleaseResourceLite(*(PERESOURCE *)(v20 + 80));
        KeLeaveCriticalRegion();
        v34 = *((_QWORD *)v29 + 267);
        v35 = *(_QWORD *)(v9 + 24);
        v65 = 0;
        LODWORD(v9) = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v34 + 400)
                                                                                             + 8LL)
                                                                                 + 608LL))(
                        *(_QWORD *)(v34 + 408),
                        v35,
                        v71 & 0x3F,
                        v33);
      }
      v36 = v62;
      if ( v62 )
      {
        if ( v63 )
        {
          COREACCESS::Release((COREACCESS *)v60);
          v36 = v62;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v36 + 2), v36);
      }
      v37 = v58;
      if ( v58 )
      {
        if ( v59 )
        {
          COREACCESS::Release((COREACCESS *)v56);
          v37 = v58;
        }
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v37 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v37);
      }
      ExReleasePushLockSharedEx(v64, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64(v26 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v70 + 2), v70);
      if ( v65 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(v20 + 80));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      v50[4] = v9;
      LODWORD(v9) = -1073741811;
      v50[5] = -1073741811LL;
      v50[3] = v5;
      WdLogEvent5_WdWarning(v50);
    }
  }
  else
  {
    v49 = WdLogNewEntry5_WdWarning(v17, v16, v18, v19);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v49 + 24) = v5;
    *(_QWORD *)(v49 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v49);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v66);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53);
LABEL_52:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v38, &EventProfilerExit, v39, 3016);
  return (unsigned int)v9;
}
