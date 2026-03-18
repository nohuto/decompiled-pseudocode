/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00B7B74
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TryInsertPrimaryAllocation@DXGDEVICE@@QEAA_NIIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C000B25C (-TryInsertPrimaryAllocation@DXGDEVICE@@QEAA_NIIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000B6CC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(
        DXGADAPTER **this,
        const struct DXGALLOCATION *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int *v20; // r9
  DXGADAPTER **v21; // rcx
  __int64 result; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD *v27; // rax
  union _LARGE_INTEGER v28; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(unsigned int *)(*((_QWORD *)a2 + 6) + 4LL);
  if ( (v6 & 1) == 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(this, a2, v6, a4);
    *(_QWORD *)(v23 + 24) = 2904LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v24 + 24) = 2905LL;
    WdLogEvent5_WdAssertion(v24);
  }
  v11 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2338]) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v25 + 24) = 2909LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( v11 >= *((_DWORD *)this + 4678) )
  {
    v26 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v26 + 24) = 2910LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v16 = 0;
  while ( 1 )
  {
    v28.LowPart = 0;
    if ( DXGDEVICE::TryInsertPrimaryAllocation((DXGDEVICE *)this, v11, v16, a2, (int *)&v28) )
      break;
    if ( ++v16 >= 0x1F )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      v27[3] = this;
      v27[5] = -1073741801LL;
      v27[4] = a2;
      WdLogEvent5_WdWarning(v27);
      return 3221225495LL;
    }
  }
  v21 = (DXGADAPTER **)this[2];
  if ( !v28.LowPart )
    return 0LL;
  if ( this[2338] != v21[2] )
    return 0LL;
  if ( *((_DWORD *)this + 70) != 1 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 18) & 0x100) != 0 )
    return 0LL;
  result = VIDMM_EXPORT::VidMmPinAllocation(v21[50], v21[51], *((struct _VIDMM_MULTI_ALLOC **)a2 + 3), v20);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
