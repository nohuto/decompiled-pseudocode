/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00969A0
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0099060 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0007B30 (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGADAPTER **this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGADAPTER **v11; // rcx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int v18; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 3190LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v14 + 24) = 3191LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v5 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[357]) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v15 + 24) = 3195LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( v5 >= *((_DWORD *)this + 716) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v16 + 24) = 3196LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v18 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation(this, v5, a2, &v18) )
  {
    v11 = (DXGADAPTER **)this[2];
    if ( !v18 )
      return 0LL;
    if ( this[357] != v11[2] )
      return 0LL;
    if ( *((_DWORD *)this + 76) != 1 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = VIDMM_EXPORT::VidMmPinAllocation(v11[50], v11[51], *((struct _VIDMM_MULTI_ALLOC **)a2 + 3), 0LL, 0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    v17[3] = this;
    v17[5] = -1073741801LL;
    v17[4] = a2;
    WdLogEvent5_WdWarning(v17);
    return 3221225495LL;
  }
  return result;
}
