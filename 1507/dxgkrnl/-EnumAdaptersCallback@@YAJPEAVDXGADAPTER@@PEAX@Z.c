/*
 * XREFs of ?EnumAdaptersCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C008B510
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall EnumAdaptersCallback(struct DXGADAPTER *this, _DWORD *a2, __int64 a3, __int64 a4)
{
  struct DXGGLOBAL *v4; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 CurrentProcessSessionId; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 CurrentProcess; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r15
  char v41; // of
  __int64 v42; // rt0
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // eax
  int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // r15
  __int64 v49; // r14
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rdi
  _QWORD *v61; // rdx
  int v62; // eax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *v72; // rax
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdi
  __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  int v87; // r9d
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // rax
  DXGFASTMUTEX *v94; // [rsp+30h] [rbp-38h] BYREF
  char v95; // [rsp+38h] [rbp-30h]

  v4 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v69 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v69 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v69);
    v4 = DXGGLOBAL::m_pGlobal;
  }
  v7 = *((_QWORD *)v4 + 70);
  if ( !v7 )
    goto LABEL_49;
  v95 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  v94 = (DXGFASTMUTEX *)(v7 + 80);
  if ( v7 == -80 )
  {
    v70 = WdLogNewEntry5_WdAssertion(0LL, v8, v10, v11);
    *(_QWORD *)(v70 + 24) = 421LL;
    WdLogEvent5_WdAssertion(v70);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v94 + 1) == CurrentThread )
  {
    v71 = WdLogNewEntry5_WdAssertion(CurrentThread, v8, v10, v11);
    *(_QWORD *)(v71 + 24) = 428LL;
    WdLogEvent5_WdAssertion(v71);
  }
  v13 = 0;
  if ( v95 )
  {
    v72 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v8, v10);
    v72[5] = &v94;
    v72[3] = 275LL;
    v72[4] = 4LL;
    v72[6] = 0LL;
    v72[7] = 0LL;
    WdLogEvent5_WdCriticalError(v72);
  }
  DXGFASTMUTEX::Acquire(v94);
  v95 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v7 + 72) )
  {
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v94);
    goto LABEL_49;
  }
  _mm_lfence();
  v14 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 8 * CurrentProcessSessionId);
  v95 = 0;
  DXGFASTMUTEX::Release((struct _KTHREAD **)v94);
  if ( !v14 )
  {
LABEL_49:
    v73 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v73 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v75, v74, v76, v77);
    *(_QWORD *)(v73 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v73);
    return 3221225485LL;
  }
  if ( _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL) <= 0 )
  {
    v78 = WdLogNewEntry5_WdAssertion(this, v15, v16, v17);
    *(_QWORD *)(v78 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v78);
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)this + 104, 0LL);
  if ( *((_DWORD *)this + 40) != 1 || *((_BYTE *)this + 1909) )
    goto LABEL_37;
  if ( !*((_QWORD *)this + 248) )
    goto LABEL_22;
  CurrentProcess = PsGetCurrentProcess(v19);
  ProcessWin32Process = PsGetProcessWin32Process(CurrentProcess);
  if ( ProcessWin32Process )
  {
    v28 = *(_QWORD *)(ProcessWin32Process + 248);
  }
  else
  {
    v79 = WdLogNewEntry5_WdEvent(v25, v24, v26, v27);
    *(_QWORD *)(v79 + 24) = CurrentProcess;
    WdLogEvent5_WdEvent(v79);
    v28 = 0LL;
  }
  v29 = *((_QWORD *)this + 248);
  v30 = *(_QWORD *)(v28 + 72);
  v31 = *(_QWORD *)(v29 + 384);
  v32 = *(_QWORD *)(v29 + 376);
  if ( v30 )
  {
    v33 = *(_QWORD *)(v30 + 8LL * (unsigned int)(*(_DWORD *)v32 - 1) + 16);
    if ( v33 )
      goto LABEL_21;
  }
  else
  {
    v33 = 0LL;
  }
  v80 = WdLogNewEntry5_WdAssertion(v30, v24, v26, v27);
  *(_QWORD *)(v80 + 24) = 823LL;
  WdLogEvent5_WdAssertion(v80);
LABEL_21:
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v32 + 8) + 728LL))(v31, v33) )
  {
    v81 = WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    *(_QWORD *)(v81 + 24) = this;
    *(_QWORD *)(v81 + 32) = DXGPROCESS::GetCurrent(v82);
    WdLogEvent5_WdEvent(v81);
    goto LABEL_37;
  }
LABEL_22:
  ++a2[2];
  if ( *a2 < a2[1] )
  {
    v34 = PsGetCurrentProcess(v19);
    v35 = PsGetProcessWin32Process(v34);
    if ( v35 )
    {
      v40 = *(_QWORD *)(v35 + 248);
      v41 = 0;
      if ( v40 )
        goto LABEL_25;
    }
    else
    {
      v84 = WdLogNewEntry5_WdEvent(v37, v36, v38, v39);
      *(_QWORD *)(v84 + 24) = v34;
      WdLogEvent5_WdEvent(v84);
      v40 = 0LL;
    }
    v85 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
    *(_QWORD *)(v85 + 24) = 9851LL;
    WdLogEvent5_WdAssertion(v85);
LABEL_25:
    v42 = _InterlockedAdd64((volatile signed __int64 *)this + 3, 1uLL);
    if ( (v42 < 0) ^ v41 | (v42 == 0) )
    {
      v86 = WdLogNewEntry5_WdAssertion(v37, v36, v38, v39);
      *(_QWORD *)(v86 + 24) = 1050LL;
      WdLogEvent5_WdAssertion(v86);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v40 + 192, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v87 = *(_DWORD *)(v40 + 208);
        if ( v87 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
          Template_q(v43, &EventBlockThread, v44, v87);
      }
      ExAcquirePushLockExclusiveEx(v40 + 192, 0LL);
    }
    *(_QWORD *)(v40 + 200) = KeGetCurrentThread();
    v45 = HMGRTABLE::AllocHandle(v40 + 216, this, 1LL);
    *(_QWORD *)(v40 + 200) = 0LL;
    v46 = v45;
    ExReleasePushLockExclusiveEx(v40 + 192, 0LL);
    KeLeaveCriticalRegion();
    if ( v46 )
    {
      v47 = (unsigned int)*a2;
      v48 = *((_QWORD *)a2 + 2) + 20 * v47;
      *a2 = v47 + 1;
      *(_DWORD *)v48 = v46;
      *(_QWORD *)(v48 + 4) = *(_QWORD *)((char *)this + 252);
      *(_DWORD *)(v48 + 16) = 0;
      v49 = PsGetCurrentProcess(5 * v47);
      v50 = PsGetProcessWin32Process(v49);
      if ( v50 )
      {
        v55 = *(_QWORD *)(v50 + 248);
      }
      else
      {
        v90 = WdLogNewEntry5_WdEvent(v52, v51, v53, v54);
        *(_QWORD *)(v90 + 24) = v49;
        WdLogEvent5_WdEvent(v90);
        v55 = 0LL;
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v55 + 80) + 224LL))(0LL) )
      {
        if ( *(_QWORD *)(v14 + 18492) == *(_QWORD *)((char *)this + 252) )
          *(_DWORD *)(v48 + 12) = *(_DWORD *)(v14 + 18500);
        else
          *(_DWORD *)(v48 + 12) = 0;
      }
      else
      {
        v59 = *(_QWORD *)((char *)this + 252);
        v60 = (_QWORD *)(v14 + 18536);
        v61 = (_QWORD *)*v60;
        if ( (_QWORD *)*v60 == v60 )
        {
LABEL_42:
          v62 = 0;
        }
        else
        {
          while ( 1 )
          {
            if ( *((_DWORD *)v61 - 6) == (_DWORD)v59 )
            {
              v56 = HIDWORD(*(v61 - 3));
              if ( (_DWORD)v56 == HIDWORD(v59) )
                break;
            }
            v61 = (_QWORD *)*v61;
            if ( v61 == v60 )
              goto LABEL_42;
          }
          v62 = *((_DWORD *)v61 + 11);
        }
        *(_DWORD *)(v48 + 12) = v62;
        if ( !*((_QWORD *)this + 248) )
        {
          v91 = *((_QWORD *)this + 247);
          if ( *(_QWORD *)(*(_QWORD *)(v91 + 16) + 1984LL) )
          {
            v92 = WdLogNewEntry5_WdAssertion(v56, v61, v57, v58);
            *(_QWORD *)(v92 + 24) = 4424LL;
            WdLogEvent5_WdAssertion(v92);
          }
          *(_DWORD *)(v48 + 16) = *(_DWORD *)(v91 + 244);
        }
      }
    }
    else
    {
      DXGADAPTER::ReleaseReference(this);
      v89 = WdLogNewEntry5_WdError(v88);
      v13 = -1073741801;
      *(_QWORD *)(v89 + 24) = this;
      *(_QWORD *)(v89 + 32) = -1073741801LL;
      WdLogEvent5_WdError(v89);
    }
    goto LABEL_37;
  }
  if ( *((_QWORD *)a2 + 2) )
  {
    v83 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
    *(_QWORD *)(v83 + 24) = (unsigned int)a2[2];
    *(_QWORD *)(v83 + 32) = (unsigned int)a2[1];
    WdLogEvent5_WdWarning(v83);
  }
LABEL_37:
  ExReleasePushLockSharedEx((char *)this + 104, 0LL);
  KeLeaveCriticalRegion();
  v67 = _InterlockedDecrement64((volatile signed __int64 *)this + 3);
  if ( v67 )
  {
    if ( v67 < 0 )
    {
      v93 = WdLogNewEntry5_WdAssertion(v64, v63, v65, v66);
      *(_QWORD *)(v93 + 24) = 1067LL;
      WdLogEvent5_WdAssertion(v93);
    }
  }
  else
  {
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)this + 2), this);
  }
  return v13;
}
