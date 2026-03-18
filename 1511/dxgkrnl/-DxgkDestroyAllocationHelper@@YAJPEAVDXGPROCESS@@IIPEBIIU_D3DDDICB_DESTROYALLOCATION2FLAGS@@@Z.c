/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C0062AD0 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C0133B80 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C24 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0003358 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0003C64 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0003CC8 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0006F38 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C0063440 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C006AE24 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0079E40 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0079FD0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     sub_1C009DF90 @ 0x1C009DF90 (sub_1C009DF90.c)
 *     sub_1C0124C00 @ 0x1C0124C00 (sub_1C0124C00.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C012C2B8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0145430 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  struct DXGPROCESS *v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  unsigned int v21; // edx
  __int64 v22; // r9
  int v23; // r8d
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // ebx
  bool v29; // zf
  __int64 v30; // rsi
  void *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int8 v34; // bl
  __int64 v35; // r8
  volatile signed __int64 *v36; // rcx
  __int64 v37; // rax
  volatile signed __int64 *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  OUTPUTDUPL_MGR *v44; // rcx
  struct DXGGLOBAL *v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v50; // rax
  struct OUTPUTDUPL_MGR_INDIRECT **v51; // rsi
  struct OUTPUTDUPL_MGR_INDIRECT *i; // rbx
  struct DXGADAPTER *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  DXGADAPTER *v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  unsigned int *v59; // rsi
  __int64 v60; // rbx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // r14
  __int64 v67; // rax
  unsigned int *v69; // [rsp+58h] [rbp-B0h]
  unsigned int v70; // [rsp+60h] [rbp-A8h]
  __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  DXGADAPTER *v72; // [rsp+78h] [rbp-90h]
  char v73; // [rsp+80h] [rbp-88h]
  _BYTE v74[8]; // [rsp+88h] [rbp-80h] BYREF
  struct DXGADAPTER *v75; // [rsp+90h] [rbp-78h]
  char v76; // [rsp+98h] [rbp-70h]
  __int64 v77; // [rsp+A0h] [rbp-68h]
  char v78; // [rsp+A8h] [rbp-60h]
  struct DXGPROCESS *v79; // [rsp+B8h] [rbp-50h]
  unsigned int *v80; // [rsp+C0h] [rbp-48h] BYREF
  struct DXGALLOCATION **v81; // [rsp+C8h] [rbp-40h]
  struct _KTHREAD **v82; // [rsp+D0h] [rbp-38h] BYREF
  char v83; // [rsp+D8h] [rbp-30h]
  void *v84; // [rsp+E0h] [rbp-28h]
  unsigned int *v85; // [rsp+E8h] [rbp-20h]
  int v86; // [rsp+F8h] [rbp-10h]
  _QWORD v87[3]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD v88[64]; // [rsp+118h] [rbp+10h] BYREF
  char v89; // [rsp+218h] [rbp+110h] BYREF

  v6 = a1;
  v7 = a5;
  v8 = (unsigned int)a2;
  v79 = a1;
  memset(v88, 0, sizeof(v88));
  v70 = a3;
  v80 = a4;
  v69 = 0LL;
  v85 = v88;
  v81 = (struct DXGALLOCATION **)&v89;
  v84 = 0LL;
  if ( (_DWORD)a3 && a5 )
  {
    v9 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = v8;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v9);
    goto LABEL_120;
  }
  v11 = a5;
  if ( a5 >= 0x41 )
  {
    v12 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v12 = -1LL;
    v69 = (unsigned int *)operator new[](v12, 0x4B677844u, PagedPool);
    v13 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v13 = -1LL;
    v14 = operator new[](v13, 0x4B677844u, PagedPool);
    v84 = v14;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (a1 = (struct DXGPROCESS *)v69) != 0LL && v14 )
    {
      v81 = (struct DXGALLOCATION **)v14;
      v85 = v69;
    }
    else
    {
      v15 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v15 + 24) = 7581LL;
      WdLogEvent5_WdEvent(v15);
      v7 = 64;
    }
  }
  v16 = (char *)v6 + 192;
  if ( v6 != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)v6 + 25) == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v17 + 24) = 1155LL;
    WdLogEvent5_WdAssertion(v17);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v6 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v20 = *((_DWORD *)v6 + 52);
      if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v18, &EventBlockThread, v19, v20);
    }
    ExAcquirePushLockSharedEx((char *)v6 + 192, 0LL);
  }
  v21 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v21 < *((_DWORD *)v6 + 58)
    && (v22 = *((_QWORD *)v6 + 27),
        v23 = *(_DWORD *)(v22 + 16LL * v21 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0x30))
    && (v23 & 0x1000) == 0
    && (v23 & 0xF) != 0
    && (*(_BYTE *)(v22 + 16LL * v21 + 8) & 0xF) == 3 )
  {
    v24 = *(_QWORD *)(v22 + 16LL * v21);
    if ( v24 )
      _InterlockedIncrement64((volatile signed __int64 *)(v24 + 64));
  }
  else
  {
    v24 = 0LL;
  }
  ExReleasePushLockSharedEx(v16, 0LL);
  KeLeaveCriticalRegion();
  if ( !v24 )
  {
    v26 = WdLogNewEntry5_WdError(v25);
    v10 = -1073741811;
    *(_QWORD *)(v26 + 24) = v8;
    *(_QWORD *)(v26 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    goto LABEL_120;
  }
  v27 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
  if ( *(int *)(v27 + 1656) >= 0x2000 || *(_BYTE *)(v27 + 1940) )
    v28 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 231);
  else
    v28 = 0;
  v29 = *(_DWORD *)(v24 + 280) == 2;
  v30 = *(_QWORD *)(v24 + 16);
  v86 = v28;
  if ( v29 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v30 + 80)) )
      goto LABEL_43;
    v31 = (void *)(v30 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v30 + 56)) )
      goto LABEL_43;
    v31 = (void *)(v30 + 56);
  }
  KeWaitForSingleObject(v31, Executive, 0, 0, 0LL);
LABEL_43:
  KeEnterCriticalRegion();
  if ( v28 )
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24 + 88, 0LL) )
    {
      KeLeaveCriticalRegion();
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 80LL));
      v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v24 + 88));
LABEL_51:
      if ( v34 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 80LL, 0LL);
      KeLeaveCriticalRegion();
    }
  }
  else if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 80), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 80LL));
    v34 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v24 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v35, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v24 + 80), 1u);
    goto LABEL_51;
  }
  v36 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v72 = (DXGADAPTER *)v36;
  v73 = 0;
  if ( v36 && _InterlockedAdd64(v36 + 3, 1uLL) <= 0 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v37 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v37);
  }
  v38 = *(volatile signed __int64 **)(v24 + 2832);
  if ( !v38 )
    v38 = *(volatile signed __int64 **)(*(_QWORD *)(v24 + 16) + 16LL);
  v75 = (struct DXGADAPTER *)v38;
  v76 = 0;
  if ( v38 && _InterlockedAdd64(v38 + 3, 1uLL) <= 0 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v36);
    *(_QWORD *)(v39 + 24) = 1141LL;
    WdLogEvent5_WdAssertion(v39);
  }
  v77 = v24;
  v40 = *(_QWORD *)(v24 + 2832);
  if ( v40 == *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) || (v78 = 1, !v40) )
    v78 = 0;
  if ( v73 )
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v40, v32, v33);
    v41[5] = &v71;
    v41[3] = 275LL;
    v41[4] = 4LL;
    v41[6] = 0LL;
    v41[7] = 0LL;
    WdLogEvent5_WdCriticalError(v41);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v72 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v72 + 32)) )
      KeWaitForSingleObject((char *)v72 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v72);
  }
  v73 = 1;
  if ( *(_DWORD *)(v77 + 352) == 1 )
  {
    if ( !v78 || (COREACCESS::AcquireShared((COREACCESS *)v74), *((_DWORD *)v75 + 40) == 1) )
    {
      v42 = *(_QWORD *)(v24 + 2832);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 1984);
        v44 = *(OUTPUTDUPL_MGR **)(v43 + 128);
        if ( !v44 || (int)sub_1C009DF90(v44, (struct DXGDEVICE *)v24) >= 0 )
        {
          v45 = DXGGLOBAL::m_pGlobal;
          v46 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 252LL);
          v87[1] = sub_1C009DF90;
          v87[0] = v46;
          v87[2] = v24;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v47 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v47 + 24) = 1016LL;
            WdLogEvent5_WdAssertion(v47);
            v45 = DXGGLOBAL::m_pGlobal;
          }
          v83 = 0;
          v82 = (struct _KTHREAD **)((char *)v45 + 1128);
          if ( v45 == (struct DXGGLOBAL *)-1128LL )
          {
            v48 = WdLogNewEntry5_WdAssertion(v46);
            *(_QWORD *)(v48 + 24) = 451LL;
            WdLogEvent5_WdAssertion(v48);
          }
          CurrentThread = KeGetCurrentThread();
          if ( *v82 == CurrentThread )
          {
            v50 = WdLogNewEntry5_WdAssertion(CurrentThread);
            *(_QWORD *)(v50 + 24) = 458LL;
            WdLogEvent5_WdAssertion(v50);
          }
          v51 = (struct OUTPUTDUPL_MGR_INDIRECT **)((char *)v45 + 1192);
          for ( i = *v51; i != (struct OUTPUTDUPL_MGR_INDIRECT *)v51 && i; i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
          {
            if ( sub_1C0124C00(i, v87) < 0 )
            {
              DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v82);
              goto LABEL_93;
            }
          }
          if ( v83 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v82);
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v74);
      COREACCESS::Release((COREACCESS *)&v71);
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)&v71);
  }
LABEL_93:
  v53 = v75;
  if ( v75 )
  {
    if ( v76 )
    {
      COREACCESS::Release((COREACCESS *)v74);
      v53 = v75;
    }
    v54 = _InterlockedDecrement64((volatile signed __int64 *)v53 + 3);
    if ( v54 )
    {
      if ( v54 < 0 )
      {
        v55 = WdLogNewEntry5_WdAssertion(v53);
        *(_QWORD *)(v55 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v55);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v53 + 2), v53);
    }
  }
  v56 = v72;
  if ( v72 )
  {
    if ( v73 )
    {
      v73 = 0;
      v56 = v72;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v72 + 18) )
      {
        DXGADAPTER::ReleaseCoreResource(v72);
        v56 = v72;
      }
    }
    v57 = _InterlockedDecrement64((volatile signed __int64 *)v56 + 3);
    if ( v57 )
    {
      if ( v57 < 0 )
      {
        v58 = WdLogNewEntry5_WdAssertion(v56);
        *(_QWORD *)(v58 + 24) = 1158LL;
        WdLogEvent5_WdAssertion(v58);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
    }
  }
  v59 = v80;
  while ( 1 )
  {
    v60 = v7;
    if ( v11 < v7 )
      v60 = v11;
    v61 = DxgkDestroyAllocationInternal(
            v79,
            (struct DXGDEVICE *)v24,
            v85,
            v81,
            v70,
            (const unsigned int **)&v80,
            v60,
            a6,
            v59);
    v66 = v61;
    if ( v61 < 0 )
      break;
    v59 += v60;
    v11 -= v60;
    if ( !v11 )
    {
      v10 = 0;
      goto LABEL_115;
    }
  }
  v67 = WdLogNewEntry5_WdWarning(v63, v62, v64, v65);
  *(_QWORD *)(v67 + 24) = v66;
  WdLogEvent5_WdWarning(v67);
  v10 = v66;
LABEL_115:
  if ( v86 )
    ExReleasePushLockSharedEx(v24 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v24 + 80));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v24 + 16), (struct DXGDEVICE *)v24);
LABEL_120:
  if ( v84 )
    operator delete(v84);
  if ( v69 )
    operator delete(v69);
  return v10;
}
