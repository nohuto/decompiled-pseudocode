/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C007BB44
 * Callers:
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C005AC90 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00A85C0 (DxgkQueryResourceInfoFromNtHandle.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0002AA0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B60 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000F8E4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00934AC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00AE824 (_OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__--_61_--ENSURE_SHARED_.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rbx
  _QWORD *v8; // rax
  unsigned int v9; // ebx
  ADAPTER_RENDER *v10; // r14
  __int64 v11; // rcx
  _QWORD *v12; // r8
  _QWORD *i; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  _QWORD *v16; // rax
  int StandardAllocationDriverData; // eax
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v26; // [rsp+28h] [rbp-58h] BYREF
  int v27; // [rsp+58h] [rbp-28h] BYREF
  __int64 v28; // [rsp+5Ch] [rbp-24h]
  __int64 v29; // [rsp+64h] [rbp-1Ch]
  int v30; // [rsp+6Ch] [rbp-14h]

  if ( !a4 )
  {
    v23 = WdLogNewEntry5_WdError(a1);
    v9 = -1073741811;
    *(_QWORD *)(v23 + 24) = a1;
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    return v9;
  }
  v7 = *(_QWORD *)(a4 + 16);
  if ( v7 )
  {
    v25 = 0LL;
    v10 = *(ADAPTER_RENDER **)(a1 + 16);
    if ( *(ADAPTER_RENDER **)(v7 + 72) == v10 && *(_QWORD *)(v7 + 80) == *(_QWORD *)(a1 + 18704) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v27, (struct _KTHREAD **)(v7 + 32));
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGPUSHLOCK **)&v27);
      a2[7] = 0;
      v12 = (_QWORD *)(v7 + 120);
      for ( i = *(_QWORD **)(v7 + 120); i != v12; i = (_QWORD *)*i )
      {
        v14 = (unsigned int)(a2[7] + *((_DWORD *)i - 2));
        if ( (unsigned int)v14 < a2[7] )
        {
          a2[7] = -1;
          v15 = WdLogNewEntry5_WdWarning(v11, i, v12, v14);
          v9 = -1073741675;
          *(_QWORD *)(v15 + 24) = a1;
          *(_QWORD *)(v15 + 32) = -1073741675LL;
          WdLogEvent5_WdWarning(v15);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v27);
          goto LABEL_22;
        }
        a2[7] = v14;
      }
      a2[8] = *(_DWORD *)(v7 + 112);
      a2[9] = *(_DWORD *)(v7 + 116);
      a2[6] = *(_DWORD *)(v7 + 96);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v27);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v7 + 12) & 0x20) != 0 )
    {
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0;
      HIDWORD(v28) = *(_DWORD *)(v7 + 176);
      v27 = *(_DWORD *)(v7 + 168);
      LODWORD(v28) = *(_DWORD *)(v7 + 172);
      LODWORD(v29) = 7;
      memset(&v26, 0, sizeof(v26));
      v26.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v26.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v27;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v26);
      v19 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v20 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v20 + 24) = a1;
        *(_QWORD *)(v20 + 32) = v19;
        WdLogEvent5_WdError(v20);
        v9 = v19;
LABEL_22:
        OpenResourceFromGlobalHandleOrNtObject__D3DKMT_OPENRESOURCEFROMNTHANDLE__::_61_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v25);
        return v9;
      }
      AllocationPrivateDriverDataSize = v26.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v26.ResourcePrivateDriverDataSize;
      if ( v26.AllocationPrivateDriverDataSize || v26.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v7 + 116);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v7 + 96);
        a2[7] = AllocationPrivateDriverDataSize;
LABEL_21:
        v9 = 0;
        goto LABEL_22;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v26.ResourcePrivateDriverDataSize);
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v16[5] = 1LL;
    }
    v16[3] = a1;
    v9 = -1073741811;
    v16[4] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_22;
  }
  v8 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
  v9 = -1073741811;
  v8[3] = a1;
  v8[4] = a4;
  v8[5] = -1073741811LL;
  WdLogEvent5_WdWarning(v8);
  return v9;
}
