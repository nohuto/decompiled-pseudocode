/*
 * XREFs of ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C0166AEC
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 *     DxgkOpenSwapChain @ 0x1C0168100 (DxgkOpenSwapChain.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C00070F0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007138 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0007194 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z @ 0x1C0096C80 (-OpenSyncObject@DXGGLOBAL@@QEAAJIPEAPEAVDXGSYNCOBJECT@@PEAI@Z.c)
 *     ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C0165DDC (-DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z.c)
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
  int v30; // ecx
  __int64 v31; // rax
  __int64 v32; // rax
  NTSTATUS v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v37; // rcx
  unsigned int v38; // r15d
  __int64 v39; // rbx
  __int64 v40; // r12
  PERESOURCE *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rcx
  PVOID Object; // [rsp+30h] [rbp-30h] BYREF
  struct DXGSYNCOBJECT *v46; // [rsp+38h] [rbp-28h] BYREF
  _BYTE v47[16]; // [rsp+40h] [rbp-20h] BYREF
  _BYTE v48[16]; // [rsp+50h] [rbp-10h] BYREF

  if ( !DXGPROCESS::GetCurrent() )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = PsGetCurrentProcess(v15);
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v48, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v48);
  if ( !*((_DWORD *)this + 17) )
  {
    v23 = (char *)this + 152;
    if ( !a6 )
      v23 = (char *)this + 96;
    if ( *((_QWORD *)v23 + 2) )
    {
      v24 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v24 + 24) = this;
      *(_QWORD *)(v24 + 32) = a6;
      WdLogEvent5_WdWarning(v24);
      v22 = -1073740008;
      goto LABEL_32;
    }
    *((_QWORD *)v23 + 2) = PsGetCurrentProcess(v18);
    *(_DWORD *)v23 = a2;
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) + 284LL) & 0x10) != 0 )
      *((_DWORD *)this + 53) = 1;
    *((_DWORD *)v23 + 6) = a5;
    v25 = operator new[](8uLL, 0x4B677844u, PagedPool);
    if ( v25 )
    {
      v30 = *((_DWORD *)this + 16);
      *v25 = 0;
      v27 = (unsigned int)(v30 - 1);
      v25[1] = v27;
    }
    *((_QWORD *)v23 + 4) = v25;
    if ( !v25 )
    {
      v31 = WdLogNewEntry5_WdLowResource(v27, v26, v28, v29);
      *(_QWORD *)(v31 + 24) = 1471LL;
      WdLogEvent5_WdLowResource(v31);
      v22 = -1073741801;
      goto LABEL_32;
    }
    if ( a4 )
    {
      if ( *((_DWORD *)v23 + 6) )
      {
        v32 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v32 + 24) = 1480LL;
        WdLogEvent5_WdError(v32);
        v22 = -1073741822;
        goto LABEL_31;
      }
      v33 = ObReferenceObjectByHandle(a4, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
      v27 = (__int64)Object;
      v22 = v33;
      *((_QWORD *)v23 + 6) = Object;
      if ( v33 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v34 + 24) = a4;
        *(_QWORD *)(v34 + 32) = PsGetCurrentProcess(v35);
        WdLogEvent5_WdError(v34);
        goto LABEL_30;
      }
      if ( !a6 )
        KeSetEvent((PRKEVENT)v27, 2, 0);
    }
    else
    {
      v22 = (int)Object;
    }
    Global = DXGGLOBAL::GetGlobal(v27);
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v47, Global);
    DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v47);
    v38 = 0;
    if ( *((_DWORD *)this + 16) )
    {
      while ( 1 )
      {
        v39 = *((_QWORD *)this + 9);
        v40 = 56LL * v38;
        v41 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v37);
        v22 = DXGGLOBAL::OpenSyncObject(v41, *(_DWORD *)(v40 + v39 + 20), &v46, (unsigned int *)&Object);
        if ( v22 < 0 )
          break;
        ++v38;
        v37 = *((_QWORD *)this + 9);
        *(_DWORD *)(v40 + 16LL * *((int *)v23 + 10) + v37 + 28) = (_DWORD)Object;
        if ( v38 >= *((_DWORD *)this + 16) )
          goto LABEL_28;
      }
      v43 = WdLogNewEntry5_WdError(v42);
      v44 = *((_QWORD *)this + 9);
      *(_QWORD *)(v43 + 24) = *(unsigned int *)(56LL * v38 + v44 + 20);
      *(_QWORD *)(v43 + 32) = PsGetCurrentProcess(v44);
      WdLogEvent5_WdError(v43);
    }
LABEL_28:
    if ( v47[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v47);
LABEL_30:
    if ( v22 >= 0 )
      goto LABEL_32;
LABEL_31:
    DXGSWAPCHAIN::DestroyLocalClient(this, (struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *)v23);
    goto LABEL_32;
  }
  v21 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
  *(_QWORD *)(v21 + 24) = this;
  WdLogEvent5_WdWarning(v21);
  v22 = -1073741738;
LABEL_32:
  if ( v48[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v48);
  return (unsigned int)v22;
}
