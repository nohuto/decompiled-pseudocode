/*
 * XREFs of ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C006E9E8
 * Callers:
 *     DxgkQueryResourceInfoFromNtHandle @ 0x1C00BB5D0 (DxgkQueryResourceInfoFromNtHandle.c)
 *     ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C01369B0 (-DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     sub_1C0061864 @ 0x1C0061864 (sub_1C0061864.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C0069D6C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 */

__int64 __fastcall DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rbx
  ADAPTER_RENDER *v8; // r14
  _QWORD *v9; // r8
  _QWORD *i; // rdx
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // ebx
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r8
  int StandardAllocationDriverData; // eax
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  __int64 v25; // rax
  DXGSHAREDRESOURCE *v26; // [rsp+20h] [rbp-60h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v27; // [rsp+28h] [rbp-58h] BYREF
  int v28; // [rsp+58h] [rbp-28h] BYREF
  __int64 v29; // [rsp+5Ch] [rbp-24h]
  __int64 v30; // [rsp+64h] [rbp-1Ch]
  int v31; // [rsp+6Ch] [rbp-14h]

  if ( !a4 )
  {
    v25 = WdLogNewEntry5_WdError(a1);
    v13 = -1073741811;
    *(_QWORD *)(v25 + 24) = a1;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    return v13;
  }
  v7 = *(_QWORD *)(a4 + 16);
  if ( !v7 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    v13 = -1073741811;
    v15[3] = a1;
    v15[4] = a4;
    v15[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    return v13;
  }
  v26 = 0LL;
  v8 = *(ADAPTER_RENDER **)(a1 + 16);
  if ( *(ADAPTER_RENDER **)(v7 + 72) == v8 && *(_QWORD *)(v7 + 80) == *(_QWORD *)(a1 + 2832) )
  {
    a2[7] = 0;
    v9 = (_QWORD *)(v7 + 120);
    for ( i = *(_QWORD **)(v7 + 120); ; i = (_QWORD *)*i )
    {
      if ( i == v9 )
      {
        a2[8] = *(_DWORD *)(v7 + 112);
        a2[9] = *(_DWORD *)(v7 + 116);
        v12 = *(_DWORD *)(v7 + 96);
        goto LABEL_10;
      }
      v11 = (unsigned int)(a2[7] + *((_DWORD *)i - 2));
      if ( (unsigned int)v11 < a2[7] )
        break;
      a2[7] = v11;
    }
    a2[7] = -1;
    v16 = WdLogNewEntry5_WdWarning(a1, i, v9, v11);
    v13 = -1073741675;
    *(_QWORD *)(v16 + 24) = a1;
    *(_QWORD *)(v16 + 32) = -1073741675LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(v7 + 12) & 0x20) == 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v17[5] = 1LL;
LABEL_22:
    v17[3] = a1;
    v13 = -1073741811;
    v17[4] = -1073741811LL;
    WdLogEvent5_WdError(v17);
    goto LABEL_11;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  HIDWORD(v29) = *(_DWORD *)(v7 + 176);
  v28 = *(_DWORD *)(v7 + 168);
  LODWORD(v29) = *(_DWORD *)(v7 + 172);
  LODWORD(v30) = 7;
  memset(&v27, 0, sizeof(v27));
  v27.StandardAllocationType = D3DKMDT_STANDARDALLOCATION_GDISURFACE;
  v27.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)&v28;
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v8, &v27, v18);
  v21 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData >= 0 )
  {
    AllocationPrivateDriverDataSize = v27.AllocationPrivateDriverDataSize;
    ResourcePrivateDriverDataSize = v27.ResourcePrivateDriverDataSize;
    if ( v27.AllocationPrivateDriverDataSize || v27.ResourcePrivateDriverDataSize )
    {
      a2[9] = *(_DWORD *)(v7 + 116);
      a2[8] = ResourcePrivateDriverDataSize;
      v12 = *(_DWORD *)(v7 + 96);
      a2[7] = AllocationPrivateDriverDataSize;
LABEL_10:
      a2[6] = v12;
      v13 = 0;
      goto LABEL_11;
    }
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v27.ResourcePrivateDriverDataSize);
    goto LABEL_22;
  }
  v22 = WdLogNewEntry5_WdError(v20);
  *(_QWORD *)(v22 + 24) = a1;
  *(_QWORD *)(v22 + 32) = v21;
  WdLogEvent5_WdError(v22);
  v13 = v21;
LABEL_11:
  sub_1C0061864(&v26);
  return v13;
}
