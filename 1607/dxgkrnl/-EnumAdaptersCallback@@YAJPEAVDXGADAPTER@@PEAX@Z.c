/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C007B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z @ 0x1C00043CC (-VidSchIsGpuAccessBlocked@VIDSCH_EXPORT@@QEAA_NPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C009FCAC (-CreateHandle@DXGADAPTER@@QEAAJPEAI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0168F1C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *a1, _DWORD *a2)
{
  DXGGLOBAL *v2; // rbx
  unsigned int v3; // edi
  __int64 v6; // rbx
  __int64 CurrentProcessSessionId; // r15
  struct _KTHREAD *CurrentThread; // rcx
  DXGSESSIONDATA *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  struct DXGPROCESS *ProcessDxgProcess; // rax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v26; // rcx
  int v27; // eax
  int v29; // r14d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-20h] BYREF
  char v47; // [rsp+28h] [rbp-18h]
  _QWORD v48[2]; // [rsp+30h] [rbp-10h] BYREF
  int v49; // [rsp+88h] [rbp+48h] BYREF
  unsigned int v50; // [rsp+90h] [rbp+50h] BYREF
  __int64 v51; // [rsp+98h] [rbp+58h]

  v2 = DXGGLOBAL::m_pGlobal;
  v3 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v34 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v34 + 24) = 982LL;
    WdLogEvent5_WdAssertion(v34);
    v2 = DXGGLOBAL::m_pGlobal;
  }
  v6 = *((_QWORD *)v2 + 69);
  if ( !v6 )
    goto LABEL_37;
  v47 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  v46 = v6 + 80;
  if ( v6 == -80 )
  {
    v35 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v35 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v35);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v46 + 8) == CurrentThread )
  {
    v36 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v36 + 24) = 435LL;
    WdLogEvent5_WdAssertion(v36);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v46);
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v6 + 72) )
  {
    if ( v47 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v46);
LABEL_37:
    v9 = 0LL;
    goto LABEL_11;
  }
  _mm_lfence();
  v9 = *(DXGSESSIONDATA **)(*(_QWORD *)(v6 + 40) + 8 * CurrentProcessSessionId);
  if ( v47 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v46);
LABEL_11:
  if ( !v9 )
  {
    v37 = WdLogNewEntry5_WdError(a1);
    v3 = -1073741811;
    *(_QWORD *)(v37 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    return v3;
  }
  _InterlockedIncrement64((volatile signed __int64 *)a1 + 3);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)a1 + 120, 0LL);
  if ( *((_DWORD *)a1 + 44) != 1 || *((_BYTE *)a1 + 2053) )
    goto LABEL_21;
  if ( *((_QWORD *)a1 + 267) )
  {
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v15);
    if ( (unsigned __int8)VIDSCH_EXPORT::VidSchIsGpuAccessBlocked(
                            *(VIDSCH_EXPORT **)(*((_QWORD *)a1 + 267) + 376LL),
                            *(struct _VIDSCH_GLOBAL **)(*((_QWORD *)a1 + 267) + 384LL),
                            ProcessDxgProcess) )
    {
      v38 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v38 + 24) = a1;
      v39 = PsGetCurrentProcess();
      *(_QWORD *)(v38 + 32) = PsGetProcessDxgProcess(v39, v40);
      WdLogEvent5_WdEvent(v38);
LABEL_21:
      LODWORD(v19) = 0;
      goto LABEL_22;
    }
  }
  ++a2[2];
  if ( *a2 >= a2[1] )
  {
    if ( *((_QWORD *)a2 + 2) )
    {
      v41 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
      *(_QWORD *)(v41 + 24) = (unsigned int)a2[2];
      *(_QWORD *)(v41 + 32) = (unsigned int)a2[1];
      WdLogEvent5_WdWarning(v41);
    }
    goto LABEL_21;
  }
  v17 = DXGADAPTER::CreateHandle(a1, &v50);
  v19 = v17;
  if ( v17 >= 0 )
  {
    v20 = (unsigned int)*a2;
    v21 = *((_QWORD *)a2 + 2);
    v22 = 5 * v20;
    *a2 = v20 + 1;
    *(_DWORD *)(v21 + 4 * v22) = v50;
    *(_QWORD *)(v21 + 4 * v22 + 4) = *(_QWORD *)((char *)a1 + 268);
    *(_DWORD *)(v21 + 4 * v22 + 16) = 0;
    v23 = PsGetCurrentProcess();
    v51 = *(_QWORD *)(PsGetProcessDxgProcess(v23, v24) + 72);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(v51 + 224))(0LL) )
    {
      v49 = 0;
      v29 = 2;
      v48[0] = 0x400000002LL;
      v48[1] = &v49;
      if ( (*(int (__fastcall **)(_QWORD *))(v51 + 368))(v48) < 0 )
      {
        v45 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
        *(_QWORD *)(v45 + 24) = 606LL;
        WdLogEvent5_WdWarning(v45);
        v49 = 2;
      }
      else
      {
        v29 = v49;
      }
      if ( v29 != 0xFFFF
        && *((_DWORD *)v9 + 4623) == *((_DWORD *)a1 + 67)
        && *((_DWORD *)v9 + 4624) == *((_DWORD *)a1 + 68) )
      {
        *(_DWORD *)(v21 + 4 * v22 + 12) = *((_DWORD *)v9 + 4625);
      }
      else
      {
        *(_DWORD *)(v21 + 4 * v22 + 12) = 0;
      }
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(v9, (const struct _LUID *)((char *)a1 + 268));
      if ( SessionAdapterFromLuid )
        v27 = *((_DWORD *)SessionAdapterFromLuid + 23);
      else
        v27 = 0;
      *(_DWORD *)(v21 + 4 * v22 + 12) = v27;
      if ( !*((_QWORD *)a1 + 267) )
      {
        v43 = *((_QWORD *)a1 + 266);
        if ( *(_QWORD *)(*(_QWORD *)(v43 + 16) + 2136LL) )
        {
          v44 = WdLogNewEntry5_WdAssertion(v26);
          *(_QWORD *)(v44 + 24) = 4714LL;
          WdLogEvent5_WdAssertion(v44);
        }
        *(_DWORD *)(v21 + 4 * v22 + 16) = *(_DWORD *)(v43 + 244);
      }
    }
    goto LABEL_25;
  }
  v42 = WdLogNewEntry5_WdError(v18);
  *(_QWORD *)(v42 + 24) = a1;
  *(_QWORD *)(v42 + 32) = v19;
  WdLogEvent5_WdError(v42);
LABEL_22:
  v3 = v19;
LABEL_25:
  ExReleasePushLockSharedEx((char *)a1 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)a1 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)a1 + 2), a1);
  return v3;
}
