/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C0097348
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00D2760 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C0155E10 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00112B4 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0093B78 (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     _DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE @ 0x1C00D8C40 (_DXGDEVICE--QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__--_2_--ENSURE_SHARED_RESOUR.c)
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
  __int64 v17; // r8
  int StandardAllocationDriverData; // eax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v24; // rax
  __int64 v26; // [rsp+20h] [rbp-60h] BYREF
  _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+28h] [rbp-58h] BYREF
  int v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+5Ch] [rbp-24h]
  __int64 v30; // [rsp+64h] [rbp-1Ch]
  int v31; // [rsp+6Ch] [rbp-14h]

  if ( !a4 )
  {
    v24 = WdLogNewEntry5_WdError(a1);
    v9 = -1073741811;
    *(_QWORD *)(v24 + 24) = a1;
    *(_QWORD *)(v24 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    return v9;
  }
  v7 = *(_QWORD *)(a4 + 16);
  if ( v7 )
  {
    v26 = 0LL;
    v10 = *(ADAPTER_RENDER **)(a1 + 16);
    if ( *(ADAPTER_RENDER **)(v7 + 72) == v10 && *(_QWORD *)(v7 + 88) == *(_QWORD *)(a1 + 2856) )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28, (struct _KTHREAD **)(v7 + 32));
      DXGAUTOPUSHLOCK::AcquireExclusive((DXGPUSHLOCK **)&v28);
      a2[7] = 0;
      v12 = (_QWORD *)(v7 + 128);
      for ( i = *(_QWORD **)(v7 + 128); i != v12; i = (_QWORD *)*i )
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
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
          goto LABEL_22;
        }
        a2[7] = v14;
      }
      a2[8] = *(_DWORD *)(v7 + 120);
      a2[9] = *(_DWORD *)(v7 + 124);
      a2[6] = *(_DWORD *)(v7 + 104);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)&v28);
      goto LABEL_21;
    }
    if ( (*(_DWORD *)(v7 + 12) & 0x20) != 0 )
    {
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0;
      HIDWORD(v29) = *(_DWORD *)(v7 + 184);
      v28 = *(_DWORD *)(v7 + 176);
      LODWORD(v29) = *(_DWORD *)(v7 + 180);
      LODWORD(v30) = 7;
      memset(&v27, 0, sizeof(v27));
      v27.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
      v27.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v28;
      StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v10, &v27, v17);
      v20 = StandardAllocationDriverData;
      if ( StandardAllocationDriverData < 0 )
      {
        v21 = WdLogNewEntry5_WdError(v19);
        *(_QWORD *)(v21 + 24) = a1;
        *(_QWORD *)(v21 + 32) = v20;
        WdLogEvent5_WdError(v21);
        v9 = v20;
LABEL_22:
        DXGDEVICE::QueryResourceInfo__D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE__::_2_::ENSURE_SHARED_RESOURCE_DEREFERENCE::_ENSURE_SHARED_RESOURCE_DEREFERENCE(&v26);
        return v9;
      }
      AllocationPrivateDriverDataSize = v27.AllocationPrivateDriverDataSize;
      ResourcePrivateDriverDataSize = v27.ResourcePrivateDriverDataSize;
      if ( v27.AllocationPrivateDriverDataSize || v27.ResourcePrivateDriverDataSize )
      {
        a2[9] = *(_DWORD *)(v7 + 124);
        a2[8] = ResourcePrivateDriverDataSize;
        a2[6] = *(_DWORD *)(v7 + 104);
        a2[7] = AllocationPrivateDriverDataSize;
LABEL_21:
        v9 = 0;
        goto LABEL_22;
      }
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v27.ResourcePrivateDriverDataSize);
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
