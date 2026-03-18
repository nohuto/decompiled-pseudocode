/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097590
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C00703D0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C008F430 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01713C4 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01718FC (-OpenResourceFromSharedHandle@DXGCONTEXT@@QEAAJPEAXPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C017D228 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00015A8 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0006E88 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009B60 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112B4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C008F644 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__--_2_--ENSURE_SHARED_RESOURCE_DEREFEREN.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0093B78 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  _QWORD *v13; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned int v16; // ebx
  __int64 v17; // rcx
  ADAPTER_RENDER *v18; // r14
  __int64 v19; // rcx
  _QWORD *v20; // r8
  _QWORD *i; // rdx
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // r8
  int StandardAllocationDriverData; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v32; // rax
  DXGSHAREDRESOURCE *v34; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v35[16]; // [rsp+28h] [rbp-41h] BYREF
  DXGPUSHLOCK *v36[3]; // [rsp+38h] [rbp-31h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v37; // [rsp+50h] [rbp-19h] BYREF
  int v38; // [rsp+80h] [rbp+17h] BYREF
  __int64 v39; // [rsp+84h] [rbp+1Bh]
  __int64 v40; // [rsp+8Ch] [rbp+23h]
  int v41; // [rsp+94h] [rbp+2Bh]

  v3 = a3;
  if ( !a3 )
  {
    v32 = WdLogNewEntry5_WdError(a1);
    v16 = -1073741811;
    *(_QWORD *)(v32 + 24) = a1;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    return v16;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v35);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v35);
  Global = DXGGLOBAL::GetGlobal();
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
  v12 = ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 60));
    v14 = *(_DWORD *)(ObjectA + 60);
    do
    {
      if ( !v14 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
        v13[6] = 6260LL;
        goto LABEL_8;
      }
      v9 = (unsigned int)(v14 + 1);
      v15 = v14;
      v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 60), v9, v14);
    }
    while ( v15 != v14 );
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
    v18 = *(ADAPTER_RENDER **)(a1 + 16);
    v34 = (DXGSHAREDRESOURCE *)v12;
    if ( *(ADAPTER_RENDER **)(v12 + 72) == v18 && *(_QWORD *)(v12 + 88) == *(_QWORD *)(a1 + 2856) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36, (struct _KTHREAD **)(v12 + 32));
      DXGAUTOPUSHLOCK::AcquireExclusive(v36);
      a2[5] = 0;
      v20 = (_QWORD *)(v12 + 128);
      for ( i = *(_QWORD **)(v12 + 128); i != v20; i = (_QWORD *)*i )
      {
        v22 = (unsigned int)(a2[5] + *((_DWORD *)i - 2));
        if ( (unsigned int)v22 < a2[5] )
        {
          a2[5] = -1;
          v23 = WdLogNewEntry5_WdWarning(v19, i, v20, v22);
          v16 = -1073741675;
          *(_QWORD *)(v23 + 24) = a1;
          *(_QWORD *)(v23 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v23);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
          goto LABEL_27;
        }
        a2[5] = v22;
      }
      a2[6] = *(_DWORD *)(v12 + 120);
      a2[7] = *(_DWORD *)(v12 + 124);
      a2[4] = *(_DWORD *)(v12 + 104);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v36);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(v12 + 12) & 0x20) != 0 )
    {
      v39 = 0LL;
      v40 = 0LL;
      v41 = 0;
      HIDWORD(v39) = *(_DWORD *)(v12 + 184);
      v38 = *(_DWORD *)(v12 + 176);
      LODWORD(v39) = *(_DWORD *)(v12 + 180);
      LODWORD(v40) = 7;
      memset(&v37, 0, sizeof(v37));
      v37.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v37.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v38;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v18, &v37, v25);
      v28 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v27);
        *(_QWORD *)(v29 + 24) = a1;
        *(_QWORD *)(v29 + 32) = v28;
        WdLogEvent5_WdError(v29);
        v16 = v28;
LABEL_27:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFO__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v34);
        return v16;
      }
      AllocationPrivateDriverDataSize = v37.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v37.ResourcePrivateDriverDataSize;
      if ( v37.AllocationPrivateDriverDataSize || v37.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v12 + 124);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v12 + 104);
        a2[5] = AllocationPrivateDriverDataSize;
LABEL_26:
        v16 = 0;
        goto LABEL_27;
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v37.ResourcePrivateDriverDataSize);
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v24[5] = 1LL;
    }
    v24[3] = a1;
    v16 = -1073741811;
    v24[4] = -1073741811LL;
    WdLogEvent5_WdError(v24);
    goto LABEL_27;
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
LABEL_8:
  v13[3] = a1;
  v16 = -1073741811;
  v13[4] = v3;
  v13[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v13);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v35);
  return v16;
}
