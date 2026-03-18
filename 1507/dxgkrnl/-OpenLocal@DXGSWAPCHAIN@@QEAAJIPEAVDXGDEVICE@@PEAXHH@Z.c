/*
 * XREFs of ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01634A0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0163BD0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0004BE0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C1C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0004C68 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C000F88C (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C011E4C4 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01617AC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenLocal(DXGSWAPCHAIN *this, int a2, struct DXGDEVICE *a3, void *a4, int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // esi
  char *v23; // r14
  __int64 v24; // rax
  _DWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  NTSTATUS v32; // eax
  __int64 v33; // rbx
  __int64 v34; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned int v40; // r15d
  __int64 v41; // rbx
  PERESOURCE *v42; // rax
  __int64 v43; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGSYNCOBJECT *v45; // rbx
  int v46; // r12d
  unsigned int v47; // ecx
  __int64 v48; // r8
  __int64 v49; // rdx
  unsigned __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rcx
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct DXGSYNCOBJECT *v55; // [rsp+38h] [rbp-38h] BYREF
  __int64 v56; // [rsp+40h] [rbp-30h]
  _BYTE v57[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v58[24]; // [rsp+58h] [rbp-18h] BYREF

  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v58, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v58);
  if ( !*((_DWORD *)this + 11) )
  {
    v23 = (char *)this + 128;
    if ( !a6 )
      v23 = (char *)this + 72;
    if ( *((_QWORD *)v23 + 2) )
    {
      v24 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = a6;
      WdLogEvent5_WdWarning(v24);
      v22 = -1073740008;
      goto LABEL_39;
    }
    *((_QWORD *)v23 + 2) = PsGetCurrentProcess(v18);
    *(_DWORD *)v23 = a2;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 284LL) & 8) != 0 )
      *((_DWORD *)this + 47) = 1;
    *((_DWORD *)v23 + 6) = a5;
    v25 = operator new[](8uLL, 0x4B677844u, PagedPool);
    if ( v25 )
    {
      v27 = (unsigned int)(*((_DWORD *)this + 10) - 1);
      *v25 = 0;
      v25[1] = v27;
    }
    else
    {
      v25 = 0LL;
    }
    *((_QWORD *)v23 + 4) = v25;
    if ( !v25 )
    {
      v30 = WdLogNewEntry5_WdLowResource(v27);
      *(_QWORD *)(v30 + 24) = 1471LL;
      WdLogEvent5_WdLowResource(v30);
      v22 = -1073741801;
      goto LABEL_39;
    }
    if ( a4 )
    {
      if ( *((_DWORD *)v23 + 6) )
      {
        v31 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v31 + 24) = 1480LL;
        WdLogEvent5_WdError(v31);
        v22 = -1073741822;
        goto LABEL_38;
      }
      v32 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v27 = (__int64)Object;
      v22 = v32;
      *((_QWORD *)v23 + 6) = Object;
      if ( v32 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v33 + 24) = a4;
        *(_QWORD *)(v33 + 32) = PsGetCurrentProcess(v34);
        WdLogEvent5_WdError(v33);
        goto LABEL_37;
      }
      if ( !a6 )
        KeSetEvent((PRKEVENT)v27, 2, 0);
    }
    else
    {
      v22 = (int)Object;
    }
    Global = DXGGLOBAL::GetGlobal(v27, v26, v28, v29);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v57, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v57);
    v40 = 0;
    if ( *((_DWORD *)this + 10) )
    {
      while ( 1 )
      {
        v41 = *((_QWORD *)this + 6);
        v56 = 56LL * v40;
        v42 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v37, v36, v38, v39);
        v22 = DXGGLOBAL::OpenSyncObject(v42, *(unsigned int *)(56LL * v40 + v41 + 20), &v55, (unsigned int *)&Object);
        if ( v22 < 0 )
          break;
        Current = DXGPROCESS::GetCurrent(v43);
        v45 = (struct DXGPROCESS *)((char *)Current + 192);
        v55 = (struct DXGPROCESS *)((char *)Current + 192);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
        v46 = (int)Object;
        v47 = ((unsigned int)Object >> 6) & 0xFFFFFF;
        if ( v47 < *((_DWORD *)Current + 58) )
        {
          v48 = *((_QWORD *)Current + 27);
          v49 = *(unsigned int *)(v48 + 16LL * v47 + 8);
          if ( (((unsigned int)Object >> 26) & 0x30) == (*(_BYTE *)(v48 + 16LL * v47 + 8) & 0x30) && (v49 & 0xF) != 0 )
          {
            v50 = 2 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v48 + 16 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
            {
              v51 = WdLogNewEntry5_WdAssertion(((unsigned int)Object >> 26) & 0x30, v49, v48, 0xFFFFFFLL);
              *(_QWORD *)(v51 + 24) = 194LL;
              WdLogEvent5_WdAssertion(v51);
            }
            *(_DWORD *)(*((_QWORD *)Current + 27) + 8 * v50 + 8) &= ~0x1000u;
            v45 = v55;
          }
        }
        *((_QWORD *)v45 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v45, 0LL);
        KeLeaveCriticalRegion();
        ++v40;
        v37 = v56 + 16LL * *((int *)v23 + 10);
        *(_DWORD *)(v37 + *((_QWORD *)this + 6) + 28) = v46;
        if ( v40 >= *((_DWORD *)this + 10) )
          goto LABEL_35;
      }
      v52 = WdLogNewEntry5_WdError(v43);
      v53 = *((_QWORD *)this + 6);
      *(_QWORD *)(v52 + 24) = *(unsigned int *)(56LL * v40 + v53 + 20);
      *(_QWORD *)(v52 + 32) = PsGetCurrentProcess(v53);
      WdLogEvent5_WdError(v52);
    }
LABEL_35:
    if ( v57[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v57);
LABEL_37:
    if ( v22 >= 0 )
      goto LABEL_39;
LABEL_38:
    DXGSWAPCHAIN::DestroyLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v23);
    goto LABEL_39;
  }
  v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdWarning(v21);
  v22 = -1073741738;
LABEL_39:
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v58);
  return (unsigned int)v22;
}
