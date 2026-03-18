/*
 * XREFs of ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C0089FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0076A70 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0076AB0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddSyncGPUAccess(__int64 a1, struct DXGADAPTER *a2, __int64 a3, int a4)
{
  __int64 v5; // rdi
  struct DXGPROCESS *Current; // r15
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx
  int PairingAdapters; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // r9
  int v20; // r8d
  struct _EX_RUNDOWN_REF *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  ULONG_PTR Count; // rsi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  _QWORD *v36; // rax
  struct _KEVENT *v37; // rdi
  __int64 v38; // rcx
  unsigned __int8 v39; // di
  __int64 v40; // r8
  volatile signed __int64 *v41; // r12
  __int64 v42; // rax
  volatile signed __int64 *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  signed __int64 v46; // rdi
  struct DXGADAPTER *v47; // r14
  __int64 v48; // rdi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdi
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned int v58; // edi
  __int64 v59; // rax
  ULONG_PTR v60; // rdx
  struct DXGADAPTER *v61; // rcx
  __int64 v62; // rdi
  __int64 v63; // rax
  struct DXGADAPTER *v64; // rcx
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 v69; // rax
  struct _EX_RUNDOWN_REF *v71; // [rsp+30h] [rbp-69h] BYREF
  struct _EX_RUNDOWN_REF *v72; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v73[8]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v74[8]; // [rsp+48h] [rbp-51h] BYREF
  struct DXGADAPTER *v75; // [rsp+50h] [rbp-49h]
  char v76; // [rsp+58h] [rbp-41h]
  _BYTE v77[8]; // [rsp+60h] [rbp-39h] BYREF
  struct DXGADAPTER *v78; // [rsp+68h] [rbp-31h]
  char v79; // [rsp+70h] [rbp-29h]
  char *v80; // [rsp+78h] [rbp-21h]
  struct DXGADAPTER *v81; // [rsp+80h] [rbp-19h]
  char v82; // [rsp+98h] [rbp-1h]
  _BYTE v83[8]; // [rsp+A0h] [rbp+7h] BYREF
  char *v84; // [rsp+A8h] [rbp+Fh]
  int v85; // [rsp+B0h] [rbp+17h]
  char v86; // [rsp+100h] [rbp+67h]
  struct DXGADAPTER *v87; // [rsp+108h] [rbp+6Fh] BYREF
  int v88; // [rsp+118h] [rbp+7Fh]

  v88 = a4;
  v5 = (unsigned int)a3;
  Current = (struct DXGPROCESS *)a1;
  v86 = a3;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 3016);
  if ( !Current )
    Current = DXGPROCESS::GetCurrent();
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdError(a1);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v7 + 24) = -1073741811LL;
LABEL_10:
    WdLogEvent5_WdError(v7);
    goto LABEL_89;
  }
  PairingAdapters = DxgkpGetPairingAdapters(a2, 0, &v87, 0LL);
  v8 = (struct _EX_RUNDOWN_REF *)PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v7 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v7 + 24) = a2;
    *(_QWORD *)(v7 + 32) = v8;
    goto LABEL_10;
  }
  if ( !v87 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 1973LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v84 = (char *)Current + 192;
  if ( Current != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)Current + 25) == KeGetCurrentThread() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v14 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v14);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)Current + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_DWORD *)Current + 52);
      if ( v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v15, &EventBlockThread, v16, v17);
    }
    ExAcquirePushLockSharedEx((char *)Current + 192, 0LL);
  }
  v85 = 1;
  v18 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( v18 < *((_DWORD *)Current + 58)
    && (v19 = *((_QWORD *)Current + 27),
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8),
        (((unsigned int)v5 >> 26) & 0x30) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x30))
    && (v20 & 0x1000) == 0
    && (v20 & 0xF) != 0
    && (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0xF) == 5 )
  {
    v21 = *(struct _EX_RUNDOWN_REF **)(v19 + 16LL * v18);
  }
  else
  {
    v21 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v72, v21);
  v8 = v72;
  v71 = v72;
  if ( v72 && !ExAcquireRundownProtection(v72 + 11) )
  {
    v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v23, v22, v24);
    v25[3] = 275LL;
    v25[4] = 25LL;
    v25[5] = v8;
    v25[6] = 0LL;
    v25[7] = 0LL;
    WdLogEvent5_WdCriticalError(v25);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v72);
  if ( v8 )
  {
    Count = v8[1].Count;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
    if ( v8[3].Count )
    {
      v37 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 80LL);
      v82 = 1;
      if ( !KeReadStateEvent(v37) )
        KeWaitForSingleObject(v37, Executive, 0, 0, 0LL);
      KeEnterCriticalRegion();
      if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 80), 0) )
      {
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 80LL));
        v39 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v40, 40);
        ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 80), 1u);
        if ( v39 )
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
        ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 80LL, 0LL);
        KeLeaveCriticalRegion();
      }
      v41 = *(volatile signed __int64 **)(*(_QWORD *)(Count + 16) + 16LL);
      v81 = (struct DXGADAPTER *)v41;
      if ( _InterlockedIncrement64(v41 + 3) <= 0 )
      {
        v42 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v42 + 24) = 1141LL;
        WdLogEvent5_WdAssertion(v42);
      }
      KeEnterCriticalRegion();
      v80 = (char *)v81 + 104;
      ExAcquirePushLockSharedEx((char *)v81 + 104, 0LL);
      v43 = (volatile signed __int64 *)v87;
      v75 = v87;
      v76 = 0;
      if ( v87 )
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)v87 + 3) <= 0 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v44 + 24) = 1141LL;
          WdLogEvent5_WdAssertion(v44);
        }
        v43 = (volatile signed __int64 *)v87;
      }
      v78 = (struct DXGADAPTER *)v43;
      v79 = 0;
      if ( v43 )
      {
        if ( _InterlockedIncrement64(v43 + 3) <= 0 )
        {
          v45 = WdLogNewEntry5_WdAssertion(v43);
          *(_QWORD *)(v45 + 24) = 1141LL;
          WdLogEvent5_WdAssertion(v45);
        }
        v43 = (volatile signed __int64 *)v87;
      }
      v46 = _InterlockedExchangeAdd64(v43 + 3, 0xFFFFFFFFFFFFFFFFuLL);
      v47 = v87;
      v48 = v46 - 1;
      if ( !v48 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v87 + 2), v87);
      if ( v48 < 0 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v43);
        *(_QWORD *)(v49 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v50 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
      v55 = v50;
      if ( v50 >= 0 )
      {
        if ( !*((_QWORD *)v47 + 249) )
        {
          v57 = WdLogNewEntry5_WdAssertion(v52);
          *(_QWORD *)(v57 + 24) = 2031LL;
          WdLogEvent5_WdAssertion(v57);
        }
        v58 = 0;
        if ( v88 )
        {
          v58 = 1;
          *(_DWORD *)(v71[6].Count + 4) &= ~0x400u;
        }
        if ( v75 != v78 )
          COREACCESS::Release((COREACCESS *)v77);
        COREACCESS::Release((COREACCESS *)v74);
        ExReleaseResourceLite(*(PERESOURCE *)(Count + 80));
        KeLeaveCriticalRegion();
        v59 = *((_QWORD *)v47 + 249);
        v60 = v8[3].Count;
        v82 = 0;
        LODWORD(v8) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(v59 + 424)
                                                                                               + 8LL)
                                                                                   + 592LL))(
                        *(_QWORD *)(v59 + 432),
                        v60,
                        v86 & 0x3F,
                        v58);
      }
      else
      {
        v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v52, v51, v53, v54);
        v56[3] = v55;
        v56[4] = a2;
        v56[5] = Current;
        WdLogEvent5_WdEvent(v56);
        LODWORD(v8) = v55;
      }
      v61 = v78;
      if ( v78 )
      {
        if ( v79 )
        {
          COREACCESS::Release((COREACCESS *)v77);
          v61 = v78;
        }
        v62 = _InterlockedDecrement64((volatile signed __int64 *)v61 + 3);
        if ( !v62 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v61 + 2), v61);
        if ( v62 < 0 )
        {
          v63 = WdLogNewEntry5_WdAssertion(v61);
          *(_QWORD *)(v63 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v63);
        }
      }
      v64 = v75;
      if ( v75 )
      {
        if ( v76 )
        {
          COREACCESS::Release((COREACCESS *)v74);
          v64 = v75;
        }
        v65 = _InterlockedDecrement64((volatile signed __int64 *)v64 + 3);
        if ( !v65 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v64 + 2), v64);
        if ( v65 < 0 )
        {
          v66 = WdLogNewEntry5_WdAssertion(v64);
          *(_QWORD *)(v66 + 24) = 1158LL;
          WdLogEvent5_WdAssertion(v66);
        }
      }
      ExReleasePushLockSharedEx(v80, 0LL);
      KeLeaveCriticalRegion();
      v68 = _InterlockedDecrement64(v41 + 3);
      if ( !v68 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v81 + 2), v81);
      if ( v68 < 0 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v67);
        *(_QWORD *)(v69 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v69);
      }
      if ( v82 )
      {
        ExReleaseResourceLite(*(PERESOURCE *)(Count + 80));
        KeLeaveCriticalRegion();
      }
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34, v35);
      v36[4] = v8;
      LODWORD(v8) = -1073741811;
      v36[5] = -1073741811LL;
      v36[3] = v5;
      WdLogEvent5_WdWarning(v36);
    }
  }
  else
  {
    v30 = WdLogNewEntry5_WdWarning(v27, v26, v28, v29);
    LODWORD(v8) = -1073741811;
    *(_QWORD *)(v30 + 24) = v5;
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v83);
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v71);
LABEL_89:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v11, &EventProfilerExit, v12, 3016);
  return (unsigned int)v8;
}
