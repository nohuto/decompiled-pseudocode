/*
 * XREFs of ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C018E860
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C018F860 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C018FFB0 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00099F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A2C (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A80 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSMUTEX@@QEAA@XZ @ 0x1C00112A0 (--1DXGPROCESSMUTEX@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00A5490 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0143E0C (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4 (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
 */

__int64 __fastcall DXGSWAPCHAIN::OpenLocal(DXGSWAPCHAIN *this, int a2, struct DXGDEVICE *a3, void *a4, int a5, int a6)
{
  int v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  char *v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rbx
  __int64 v33; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v35; // rcx
  unsigned int v36; // r15d
  __int64 v37; // rbx
  PERESOURCE *v38; // rax
  __int64 v39; // rcx
  struct DXGPROCESS *Current; // r13
  struct DXGSYNCOBJECT *v41; // rbx
  int v42; // r12d
  unsigned int v43; // ecx
  __int64 v44; // r8
  unsigned __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rax
  PVOID Object; // [rsp+30h] [rbp-40h] BYREF
  struct DXGSYNCOBJECT *v51; // [rsp+38h] [rbp-38h] BYREF
  __int64 v52; // [rsp+40h] [rbp-30h]
  _BYTE v53[16]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v54[24]; // [rsp+58h] [rbp-18h] BYREF

  v10 = 0;
  if ( !DXGPROCESS::GetCurrent((__int64)this) )
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = PsGetCurrentProcess(v16);
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v54, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v54);
  if ( !*((_DWORD *)this + 11) )
  {
    v23 = (char *)this + 128;
    if ( !a6 )
      v23 = (char *)this + 72;
    if ( *((_QWORD *)v23 + 2) )
    {
      v24 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = a6;
      WdLogEvent5_WdWarning(v24);
      v10 = -1073740008;
      goto LABEL_37;
    }
    *((_QWORD *)v23 + 2) = PsGetCurrentProcess(v19);
    *(_DWORD *)v23 = a2;
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 268LL) != *((_QWORD *)this + 24) )
    {
      v49 = WdLogNewEntry5_WdError(v25);
      *(_QWORD *)(v49 + 24) = this;
      WdLogEvent5_WdError(v49);
      v10 = -1073741811;
      goto LABEL_37;
    }
    *((_DWORD *)v23 + 6) = a5;
    v26 = operator new(8uLL, 0x4B677844u, PagedPool);
    if ( v26 )
    {
      v28 = *((_DWORD *)this + 10);
      *v26 = 0;
      v27 = (unsigned int)(v28 - 1);
      v26[1] = v27;
    }
    *((_QWORD *)v23 + 4) = v26;
    if ( !v26 )
    {
      v29 = WdLogNewEntry5_WdLowResource(v27);
      *(_QWORD *)(v29 + 24) = 1513LL;
      WdLogEvent5_WdLowResource(v29);
      v10 = -1073741801;
      goto LABEL_37;
    }
    if ( a4 )
    {
      if ( *((_DWORD *)v23 + 6) )
      {
        v30 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v30 + 24) = 1522LL;
        WdLogEvent5_WdError(v30);
        v10 = -1073741822;
        goto LABEL_35;
      }
      v31 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v27 = (__int64)Object;
      v10 = v31;
      *((_QWORD *)v23 + 6) = Object;
      if ( v31 < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v32 + 24) = a4;
        *(_QWORD *)(v32 + 32) = PsGetCurrentProcess(v33);
        WdLogEvent5_WdError(v32);
        goto LABEL_34;
      }
      if ( !a6 )
        KeSetEvent((PRKEVENT)v27, 2, 0);
    }
    Global = DXGGLOBAL::GetGlobal(v27);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v53, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v53);
    v36 = 0;
    if ( *((_DWORD *)this + 10) )
    {
      while ( 1 )
      {
        v37 = *((_QWORD *)this + 6);
        v52 = 56LL * v36;
        v38 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v35);
        v10 = DXGGLOBAL::OpenSyncObject(v38, *(_DWORD *)(56LL * v36 + v37 + 20), &v51, (unsigned int *)&Object);
        if ( v10 < 0 )
          break;
        Current = DXGPROCESS::GetCurrent(v39);
        v41 = (struct DXGPROCESS *)((char *)Current + 184);
        v51 = (struct DXGPROCESS *)((char *)Current + 184);
        DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 184));
        v42 = (int)Object;
        v43 = ((unsigned int)Object >> 6) & 0xFFFFFF;
        if ( v43 < *((_DWORD *)Current + 56) )
        {
          v44 = *((_QWORD *)Current + 26);
          if ( (((unsigned int)Object >> 26) & 0x30) == (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0x30)
            && (*(_DWORD *)(v44 + 16LL * v43 + 8) & 0xF) != 0 )
          {
            v45 = 2 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF);
            if ( (*(_DWORD *)(v44 + 16 * (((unsigned __int64)(unsigned int)Object >> 6) & 0xFFFFFF) + 8) & 0x1000) == 0 )
            {
              v46 = WdLogNewEntry5_WdAssertion(((unsigned int)Object >> 26) & 0x30);
              *(_QWORD *)(v46 + 24) = 193LL;
              WdLogEvent5_WdAssertion(v46);
            }
            *(_DWORD *)(*((_QWORD *)Current + 26) + 8 * v45 + 8) &= ~0x1000u;
            v41 = v51;
          }
        }
        *((_QWORD *)v41 + 1) = 0LL;
        ExReleasePushLockExclusiveEx(v41, 0LL);
        KeLeaveCriticalRegion();
        ++v36;
        v35 = v52 + 16LL * *((int *)v23 + 10);
        *(_DWORD *)(v35 + *((_QWORD *)this + 6) + 28) = v42;
        if ( v36 >= *((_DWORD *)this + 10) )
          goto LABEL_32;
      }
      v47 = WdLogNewEntry5_WdError(v39);
      v48 = *((_QWORD *)this + 6);
      *(_QWORD *)(v47 + 24) = *(unsigned int *)(56LL * v36 + v48 + 20);
      *(_QWORD *)(v47 + 32) = PsGetCurrentProcess(v48);
      WdLogEvent5_WdError(v47);
    }
LABEL_32:
    if ( v53[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v53);
LABEL_34:
    if ( v10 >= 0 )
      goto LABEL_37;
LABEL_35:
    DXGSWAPCHAIN::DestroyLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v23);
    goto LABEL_37;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20, v21);
  *(_QWORD *)(v22 + 24) = this;
  WdLogEvent5_WdWarning(v22);
  v10 = -1073741738;
LABEL_37:
  DXGPROCESSMUTEX::~DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v54);
  return (unsigned int)v10;
}
