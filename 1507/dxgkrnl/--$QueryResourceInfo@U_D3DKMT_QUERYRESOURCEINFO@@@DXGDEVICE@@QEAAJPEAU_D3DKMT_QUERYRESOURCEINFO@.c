/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BD88
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C005ADD0 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C00A8830 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C0147CAC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0154328 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C000286C (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0004848 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0004FF8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8E4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00904A0 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__--_61_--ENSURE_SHARED_RESOURCE_DER.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00934AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>(__int64 a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  _QWORD *v17; // rax
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  unsigned int v20; // ebx
  __int64 v21; // rcx
  ADAPTER_RENDER *v22; // r14
  __int64 v23; // rcx
  _QWORD *v24; // r8
  _QWORD *i; // rdx
  __int64 v26; // r9
  __int64 v27; // rax
  _QWORD *v28; // rax
  int StandardAllocationDriverData; // eax
  __int64 v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v35; // rax
  _BYTE v37[16]; // [rsp+20h] [rbp-49h] BYREF
  __int64 v38; // [rsp+30h] [rbp-39h] BYREF
  DXGPUSHLOCK *v39[3]; // [rsp+38h] [rbp-31h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v40; // [rsp+50h] [rbp-19h] BYREF
  int v41; // [rsp+80h] [rbp+17h] BYREF
  __int64 v42; // [rsp+84h] [rbp+1Bh]
  __int64 v43; // [rsp+8Ch] [rbp+23h]
  int v44; // [rsp+94h] [rbp+2Bh]

  v3 = a3;
  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdError(a1);
    v20 = -1073741811;
    *(_QWORD *)(v35 + 24) = a1;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    return v20;
  }
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v37);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  Global = DXGGLOBAL::GetGlobal(v7, v6, v8, v9);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
  v16 = ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 60));
    v18 = *(_DWORD *)(ObjectA + 60);
    do
    {
      if ( !v18 )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
        v17[6] = 6109LL;
        goto LABEL_8;
      }
      v13 = (unsigned int)(v18 + 1);
      v19 = v18;
      v18 = _InterlockedCompareExchange((volatile signed __int32 *)(v16 + 60), v13, v18);
    }
    while ( v19 != v18 );
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
    v22 = *(ADAPTER_RENDER **)(a1 + 16);
    v38 = v16;
    if ( *(ADAPTER_RENDER **)(v16 + 72) == v22 && *(_QWORD *)(v16 + 80) == *(_QWORD *)(a1 + 18704) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39, (struct _KTHREAD **)(v16 + 32));
      DXGAUTOPUSHLOCK::AcquireExclusive(v39);
      a2[5] = 0;
      v24 = (_QWORD *)(v16 + 120);
      for ( i = *(_QWORD **)(v16 + 120); i != v24; i = (_QWORD *)*i )
      {
        v26 = (unsigned int)(a2[5] + *((_DWORD *)i - 2));
        if ( (unsigned int)v26 < a2[5] )
        {
          a2[5] = -1;
          v27 = WdLogNewEntry5_WdWarning(v23, i, v24, v26);
          v20 = -1073741675;
          *(_QWORD *)(v27 + 24) = a1;
          *(_QWORD *)(v27 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v27);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
          goto LABEL_27;
        }
        a2[5] = v26;
      }
      a2[6] = *(_DWORD *)(v16 + 112);
      a2[7] = *(_DWORD *)(v16 + 116);
      a2[4] = *(_DWORD *)(v16 + 96);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v39);
      goto LABEL_26;
    }
    if ( (*(_DWORD *)(v16 + 12) & 0x20) != 0 )
    {
      v42 = 0LL;
      v43 = 0LL;
      v44 = 0;
      HIDWORD(v42) = *(_DWORD *)(v16 + 176);
      v41 = *(_DWORD *)(v16 + 168);
      LODWORD(v42) = *(_DWORD *)(v16 + 172);
      LODWORD(v43) = 7;
      memset(&v40, 0, sizeof(v40));
      v40.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v40.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v41;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v22, &v40);
      v31 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v30);
        *(_QWORD *)(v32 + 24) = a1;
        *(_QWORD *)(v32 + 32) = v31;
        WdLogEvent5_WdError(v32);
        v20 = v31;
LABEL_27:
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v38);
        return v20;
      }
      AllocationPrivateDriverDataSize = v40.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v40.ResourcePrivateDriverDataSize;
      if ( v40.AllocationPrivateDriverDataSize || v40.ResourcePrivateDriverDataSize )
      {
        a2[7] = *(_DWORD *)(v16 + 116);
        a2[6] = ResourcePrivateDriverDataSize;
        a2[4] = *(_DWORD *)(v16 + 96);
        a2[5] = AllocationPrivateDriverDataSize;
LABEL_26:
        v20 = 0;
        goto LABEL_27;
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v40.ResourcePrivateDriverDataSize);
    }
    else
    {
      v28 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v28[5] = 1LL;
    }
    v28[3] = a1;
    v20 = -1073741811;
    v28[4] = -1073741811LL;
    WdLogEvent5_WdError(v28);
    goto LABEL_27;
  }
  v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
LABEL_8:
  v17[3] = a1;
  v20 = -1073741811;
  v17[4] = v3;
  v17[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v17);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  return v20;
}
