/*
 * XREFs of ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100
 * Callers:
 *     DxgkDestroyAllocation2 @ 0x1C005BED0 (DxgkDestroyAllocation2.c)
 *     DxgkDestroyAllocation @ 0x1C005C010 (DxgkDestroyAllocation.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0002670 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBI@Z @ 0x1C005C690 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00788C0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00789F0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_ @ 0x1C008D8B0 (_lambda_8b89794ce108b1133e9a3853d0f5c408_--_helper_func_cdecl_.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0094550 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     _lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_ @ 0x1C011F110 (_lambda_eedd85b836c993498b6f79843d09d3d6_--_helper_func_cdecl_.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01260D8 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C013EFB8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkDestroyAllocationHelper(
        struct DXGPROCESS *a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  unsigned int v6; // r12d
  struct DXGPROCESS *v7; // r13
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // r9
  int v13; // r8d
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edi
  bool v18; // zf
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  volatile signed __int64 *v23; // rcx
  volatile signed __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  OUTPUTDUPL_MGR *v28; // rcx
  __int64 v29; // rax
  struct DXGGLOBAL *v30; // rdi
  __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct OUTPUTDUPL_MGR_INDIRECT **v33; // rdi
  struct OUTPUTDUPL_MGR_INDIRECT *i; // r14
  struct DXGADAPTER *v35; // rcx
  __int64 v36; // rax
  DXGADAPTER *v37; // rcx
  __int64 v38; // rax
  unsigned int *v39; // r14
  unsigned int v40; // eax
  unsigned int v41; // edi
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  unsigned int v48; // edi
  unsigned __int8 v50; // di
  __int64 v51; // r8
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  void *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // rax
  void *v60; // rcx
  unsigned __int8 v61; // di
  __int64 v62; // rax
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned int v71; // [rsp+58h] [rbp-B0h]
  struct DXGPROCESS *v72; // [rsp+60h] [rbp-A8h]
  unsigned int *v73; // [rsp+68h] [rbp-A0h]
  unsigned int v74; // [rsp+70h] [rbp-98h]
  struct _KTHREAD **v75; // [rsp+78h] [rbp-90h] BYREF
  char v76; // [rsp+80h] [rbp-88h]
  char v77[8]; // [rsp+90h] [rbp-78h] BYREF
  DXGADAPTER *v78; // [rsp+98h] [rbp-70h]
  char v79; // [rsp+A0h] [rbp-68h]
  char v80[8]; // [rsp+A8h] [rbp-60h] BYREF
  struct DXGADAPTER *v81; // [rsp+B0h] [rbp-58h]
  char v82; // [rsp+B8h] [rbp-50h]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  bool v84; // [rsp+C8h] [rbp-40h]
  void *v85; // [rsp+D8h] [rbp-30h]
  unsigned int *v86; // [rsp+E0h] [rbp-28h] BYREF
  struct DXGALLOCATION **v87; // [rsp+E8h] [rbp-20h]
  int v88; // [rsp+F8h] [rbp-10h]
  _QWORD v89[3]; // [rsp+100h] [rbp-8h] BYREF
  _DWORD v90[64]; // [rsp+118h] [rbp+10h] BYREF
  char v91; // [rsp+218h] [rbp+110h] BYREF

  v6 = a5;
  v7 = a1;
  v8 = (unsigned int)a2;
  v74 = a3;
  v86 = a4;
  memset(v90, 0, sizeof(v90));
  v72 = 0LL;
  v73 = v90;
  v87 = (struct DXGALLOCATION **)&v91;
  v85 = 0LL;
  if ( (_DWORD)a3 && a5 )
  {
    v52 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v48 = -1073741811;
    *(_QWORD *)(v52 + 24) = v8;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    goto LABEL_75;
  }
  v71 = a5;
  if ( a5 >= 0x41 )
  {
    v53 = 4LL * a5;
    if ( !is_mul_ok(a5, 4uLL) )
      v53 = -1LL;
    v72 = (struct DXGPROCESS *)operator new[](v53, 0x4B677844u, PagedPool);
    v54 = 8LL * a5;
    if ( !is_mul_ok(a5, 8uLL) )
      v54 = -1LL;
    v55 = operator new[](v54, 0x4B677844u, PagedPool);
    v85 = v55;
    if ( !g_DxgkDestroyAllocationFailMemoryAlloc && (a1 = v72) != 0LL && v55 )
    {
      v87 = (struct DXGALLOCATION **)v55;
      v73 = (unsigned int *)v72;
    }
    else
    {
      v56 = WdLogNewEntry5_WdEvent();
      *(_QWORD *)(v56 + 24) = 7849LL;
      WdLogEvent5_WdEvent(v56);
      v6 = 64;
    }
  }
  if ( v7 != (struct DXGPROCESS *)-192LL && *((struct _KTHREAD **)v7 + 25) == KeGetCurrentThread() )
  {
    v57 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v57 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v57);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx((char *)v7 + 192, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v58 = *((_DWORD *)v7 + 52);
      if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v9, &EventBlockThread, v10, v58);
    }
    ExAcquirePushLockSharedEx((char *)v7 + 192, 0LL);
  }
  v11 = ((unsigned int)v8 >> 6) & 0xFFFFFF;
  if ( v11 < *((_DWORD *)v7 + 58)
    && (v12 = *((_QWORD *)v7 + 27),
        v13 = *(_DWORD *)(v12 + 16LL * v11 + 8),
        (((unsigned int)v8 >> 26) & 0x30) == (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0x30))
    && (v13 & 0x1000) == 0
    && (v13 & 0xF) != 0
    && (*(_BYTE *)(v12 + 16LL * v11 + 8) & 0xF) == 3 )
  {
    v14 = *(_QWORD *)(v12 + 16LL * v11);
    if ( v14 )
      _InterlockedIncrement64((volatile signed __int64 *)(v14 + 64));
  }
  else
  {
    v14 = 0LL;
  }
  ExReleasePushLockSharedEx((char *)v7 + 192, 0LL);
  KeLeaveCriticalRegion();
  if ( !v14 )
  {
    v59 = WdLogNewEntry5_WdError(v15);
    v48 = -1073741811;
    *(_QWORD *)(v59 + 24) = v8;
    *(_QWORD *)(v59 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v59);
    goto LABEL_75;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL);
  if ( *(int *)(v16 + 1648) >= 0x2000 || *(_BYTE *)(v16 + 1932) )
    v17 = *((_DWORD *)DXGGLOBAL::GetGlobal() + 195);
  else
    v17 = 0;
  v18 = *(_DWORD *)(v14 + 280) == 2;
  v19 = *(_QWORD *)(v14 + 16);
  v88 = v17;
  if ( v18 )
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 80)) )
      goto LABEL_20;
    v60 = (void *)(v19 + 80);
  }
  else
  {
    if ( KeReadStateEvent((PRKEVENT)(v19 + 56)) )
      goto LABEL_20;
    v60 = (void *)(v19 + 56);
  }
  KeWaitForSingleObject(v60, Executive, 0, 0, 0LL);
LABEL_20:
  KeEnterCriticalRegion();
  if ( !v17 )
  {
    if ( ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 80), 0) )
      goto LABEL_22;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 80LL));
    v50 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_q((unsigned int)Microsoft_Windows_DxgKrnlEnableBits, &EventBlockThread, v51, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v14 + 80), 1u);
    if ( !v50 )
      goto LABEL_90;
    goto LABEL_114;
  }
  if ( (unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 88, 0LL) )
    goto LABEL_22;
  KeLeaveCriticalRegion();
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 80LL));
  v61 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 88));
  if ( v61 )
LABEL_114:
    DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v14 + 16) + 16LL));
LABEL_90:
  ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) + 80LL, 0LL);
  KeLeaveCriticalRegion();
LABEL_22:
  v23 = *(volatile signed __int64 **)(*(_QWORD *)(v14 + 16) + 16LL);
  v78 = (DXGADAPTER *)v23;
  v79 = 0;
  if ( v23 && _InterlockedAdd64(v23 + 3, 1uLL) <= 0 )
  {
    v62 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
    *(_QWORD *)(v62 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v62);
  }
  v24 = *(volatile signed __int64 **)(v14 + 18704);
  if ( !v24 )
    v24 = *(volatile signed __int64 **)(*(_QWORD *)(v14 + 16) + 16LL);
  v81 = (struct DXGADAPTER *)v24;
  v82 = 0;
  if ( v24 && _InterlockedAdd64(v24 + 3, 1uLL) <= 0 )
  {
    v63 = WdLogNewEntry5_WdAssertion(v23, v20, v21, v22);
    *(_QWORD *)(v63 + 24) = 1050LL;
    WdLogEvent5_WdAssertion(v63);
  }
  v83 = v14;
  v25 = *(_QWORD *)(v14 + 18704);
  v84 = v25 != *(_QWORD *)(*(_QWORD *)(v14 + 16) + 16LL) && v25;
  if ( v79 )
  {
    v64 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v25, v20, v21);
    v64[5] = v77;
    v64[3] = 275LL;
    v64[4] = 4LL;
    v64[6] = 0LL;
    v64[7] = 0LL;
    WdLogEvent5_WdCriticalError(v64);
  }
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v78 + 18) )
  {
    if ( !KeReadStateEvent((PRKEVENT)((char *)v78 + 32)) )
      KeWaitForSingleObject((char *)v78 + 32, Executive, 0, 0, 0LL);
    DXGADAPTER::AcquireCoreResourceShared(v78);
  }
  v79 = 1;
  if ( *(_DWORD *)(v83 + 352) == 1 )
  {
    if ( !v84 || (COREACCESS::AcquireShared((COREACCESS *)v80), *((_DWORD *)v81 + 40) == 1) )
    {
      v26 = *(_QWORD *)(v14 + 18704);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 1976);
        v28 = *(OUTPUTDUPL_MGR **)(v27 + 104);
        if ( !v28
          || (int)lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_(v28, (struct DXGDEVICE *)v14) >= 0 )
        {
          v29 = *(_QWORD *)(v27 + 16);
          v30 = DXGGLOBAL::m_pGlobal;
          v31 = *(_QWORD *)(v29 + 252);
          v89[1] = lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_;
          v89[0] = v31;
          v89[2] = v14;
          if ( !DXGGLOBAL::m_pGlobal )
          {
            v65 = WdLogNewEntry5_WdAssertion(v31, v20, v21, v22);
            *(_QWORD *)(v65 + 24) = 1038LL;
            WdLogEvent5_WdAssertion(v65);
            v30 = DXGGLOBAL::m_pGlobal;
          }
          v76 = 0;
          v75 = (struct _KTHREAD **)((char *)v30 + 912);
          if ( v30 == (struct DXGGLOBAL *)-912LL )
          {
            v66 = WdLogNewEntry5_WdAssertion(v31, v20, v21, v22);
            *(_QWORD *)(v66 + 24) = 421LL;
            WdLogEvent5_WdAssertion(v66);
          }
          CurrentThread = KeGetCurrentThread();
          if ( v75[1] == CurrentThread )
          {
            v67 = WdLogNewEntry5_WdAssertion(CurrentThread, v20, v21, v22);
            *(_QWORD *)(v67 + 24) = 428LL;
            WdLogEvent5_WdAssertion(v67);
          }
          v33 = (struct OUTPUTDUPL_MGR_INDIRECT **)((char *)v30 + 952);
          for ( i = *v33; ; i = *(struct OUTPUTDUPL_MGR_INDIRECT **)i )
          {
            if ( i == (struct OUTPUTDUPL_MGR_INDIRECT *)v33 || !i )
            {
              if ( !v76 )
                goto LABEL_52;
              goto LABEL_122;
            }
            if ( lambda_eedd85b836c993498b6f79843d09d3d6_::_helper_func_cdecl_(i, v89) < 0 )
              break;
          }
          if ( !v76 )
            goto LABEL_52;
LABEL_122:
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v75);
        }
      }
    }
    else
    {
      COREACCESS::Release((COREACCESS *)v80);
      COREACCESS::Release((COREACCESS *)v77);
    }
  }
  else
  {
    COREACCESS::Release((COREACCESS *)v77);
  }
LABEL_52:
  v35 = v81;
  if ( v81 )
  {
    if ( v82 )
    {
      COREACCESS::Release((COREACCESS *)v80);
      v35 = v81;
    }
    v36 = _InterlockedDecrement64((volatile signed __int64 *)v35 + 3);
    if ( v36 )
    {
      if ( v36 < 0 )
      {
        v68 = WdLogNewEntry5_WdAssertion(v35, v20, v21, v22);
        *(_QWORD *)(v68 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v68);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v35 + 2), v35);
    }
  }
  v37 = v78;
  if ( v78 )
  {
    if ( v79 )
    {
      v79 = 0;
      v37 = v78;
      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v78 + 18) )
      {
        DXGADAPTER::ReleaseCoreResource(v78);
        v37 = v78;
      }
    }
    v38 = _InterlockedDecrement64((volatile signed __int64 *)v37 + 3);
    if ( v38 )
    {
      if ( v38 < 0 )
      {
        v69 = WdLogNewEntry5_WdAssertion(v37, v20, v21, v22);
        *(_QWORD *)(v69 + 24) = 1067LL;
        WdLogEvent5_WdAssertion(v69);
      }
    }
    else
    {
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v37 + 2), v37);
    }
  }
  v39 = v86;
  v40 = a5;
  while ( 1 )
  {
    v41 = v40 < v6 ? v40 : v6;
    v42 = DxgkDestroyAllocationInternal(
            v7,
            (struct DXGDEVICE *)v14,
            v73,
            v87,
            v74,
            (const unsigned int **)&v86,
            v41,
            a6,
            v39);
    v47 = v42;
    if ( v42 < 0 )
      break;
    v39 += v41;
    v18 = v71 == v41;
    v40 = v71 - v41;
    v71 -= v41;
    if ( v18 )
    {
      v48 = 0;
      goto LABEL_71;
    }
  }
  v70 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
  *(_QWORD *)(v70 + 24) = v47;
  WdLogEvent5_WdWarning(v70);
  v48 = v47;
LABEL_71:
  if ( v88 )
    ExReleasePushLockSharedEx(v14 + 88, 0LL);
  else
    ExReleaseResourceLite(*(PERESOURCE *)(v14 + 80));
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 64), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*(ADAPTER_RENDER **)(v14 + 16), (struct DXGDEVICE *)v14);
LABEL_75:
  if ( v85 )
    operator delete(v85);
  if ( v72 )
    operator delete(v72);
  return v48;
}
