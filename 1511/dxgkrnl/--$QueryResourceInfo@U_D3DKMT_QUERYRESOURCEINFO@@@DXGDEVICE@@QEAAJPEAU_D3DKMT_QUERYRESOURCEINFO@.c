/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C006EAC4
 * Callers:
 *     ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C005BD90 (-DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z.c)
 *     DxgkQueryResourceInfo @ 0x1C00BB840 (DxgkQueryResourceInfo.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C014B9C8 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C015842C (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00015E8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1C0006B18 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C0061964 @ 0x1C0061964 (sub_1C0061964.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0069D6C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
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
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  ADAPTER_RENDER *v15; // r14
  _QWORD *v16; // r8
  _QWORD *i; // rdx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r8
  int StandardAllocationDriverData; // eax
  __int64 v27; // rcx
  __int64 v28; // r14
  __int64 v29; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v32; // rax
  _BYTE v33[8]; // [rsp+20h] [rbp-39h] BYREF
  char v34; // [rsp+28h] [rbp-31h]
  DXGSHAREDRESOURCE *v35; // [rsp+30h] [rbp-29h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v36; // [rsp+38h] [rbp-21h] BYREF
  int v37; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+6Ch] [rbp+13h]
  __int64 v39; // [rsp+74h] [rbp+1Bh]
  int v40; // [rsp+7Ch] [rbp+23h]

  v3 = a3;
  if ( a3 )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v33);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
    Global = DXGGLOBAL::GetGlobal();
    ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, v3, 2);
    v12 = ObjectA;
    if ( ObjectA )
    {
      _m_prefetchw((const void *)(ObjectA + 60));
      v13 = *(_DWORD *)(ObjectA + 60);
      while ( v13 )
      {
        v9 = (unsigned int)(v13 + 1);
        v14 = v13;
        v13 = _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 60), v9, v13);
        if ( v14 == v13 )
        {
          if ( v34 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
          v15 = *(ADAPTER_RENDER **)(a1 + 16);
          v35 = (DXGSHAREDRESOURCE *)v12;
          if ( *(ADAPTER_RENDER **)(v12 + 72) == v15 && *(_QWORD *)(v12 + 80) == *(_QWORD *)(a1 + 2832) )
          {
            a2[5] = 0;
            v16 = (_QWORD *)(v12 + 120);
            for ( i = *(_QWORD **)(v12 + 120); ; i = (_QWORD *)*i )
            {
              if ( i == v16 )
              {
                a2[6] = *(_DWORD *)(v12 + 112);
                a2[7] = *(_DWORD *)(v12 + 116);
                v18 = *(_DWORD *)(v12 + 96);
                goto LABEL_13;
              }
              v21 = (unsigned int)(a2[5] + *((_DWORD *)i - 2));
              if ( (unsigned int)v21 < a2[5] )
                break;
              a2[5] = v21;
            }
            a2[5] = -1;
            v24 = WdLogNewEntry5_WdWarning(v9, i, v16, v21);
            v19 = -1073741675;
            *(_QWORD *)(v24 + 24) = a1;
            *(_QWORD *)(v24 + 32) = -1073741675LL;
            WdLogEvent5_WdWarning(v24);
            goto LABEL_14;
          }
          if ( (*(_DWORD *)(v12 + 12) & 0x20) == 0 )
          {
            v22 = (_QWORD *)WdLogNewEntry5_WdError(v9);
            v22[5] = 1LL;
            goto LABEL_20;
          }
          v38 = 0LL;
          v39 = 0LL;
          v40 = 0;
          HIDWORD(v38) = *(_DWORD *)(v12 + 176);
          v37 = *(_DWORD *)(v12 + 168);
          LODWORD(v38) = *(_DWORD *)(v12 + 172);
          LODWORD(v39) = 7;
          memset(&v36, 0, sizeof(v36));
          v36.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
          v36.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v37;
          StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v15, &v36, v25);
          v28 = StandardAllocationDriverData;
          if ( StandardAllocationDriverData >= 0 )
          {
            AllocationPrivateDriverDataSize = v36.AllocationPrivateDriverDataSize;
            ResourcePrivateDriverDataSize = v36.ResourcePrivateDriverDataSize;
            if ( v36.AllocationPrivateDriverDataSize || v36.ResourcePrivateDriverDataSize )
            {
              a2[7] = *(_DWORD *)(v12 + 116);
              a2[6] = ResourcePrivateDriverDataSize;
              v18 = *(_DWORD *)(v12 + 96);
              a2[5] = AllocationPrivateDriverDataSize;
LABEL_13:
              a2[4] = v18;
              v19 = 0;
            }
            else
            {
              v22 = (_QWORD *)WdLogNewEntry5_WdError(v36.ResourcePrivateDriverDataSize);
LABEL_20:
              v22[3] = a1;
              v19 = -1073741811;
              v22[4] = -1073741811LL;
              WdLogEvent5_WdError(v22);
            }
          }
          else
          {
            v29 = WdLogNewEntry5_WdError(v27);
            *(_QWORD *)(v29 + 24) = a1;
            *(_QWORD *)(v29 + 32) = v28;
            WdLogEvent5_WdError(v29);
            v19 = v28;
          }
LABEL_14:
          sub_1C0061964(&v35);
          return v19;
        }
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      v23[6] = 5958LL;
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    }
    v23[3] = a1;
    v19 = -1073741811;
    v23[4] = v3;
    v23[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v23);
    if ( v34 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33);
  }
  else
  {
    v32 = WdLogNewEntry5_WdError(a1);
    v19 = -1073741811;
    *(_QWORD *)(v32 + 24) = a1;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
  }
  return v19;
}
