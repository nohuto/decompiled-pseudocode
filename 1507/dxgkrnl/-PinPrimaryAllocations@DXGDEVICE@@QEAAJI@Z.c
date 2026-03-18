/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00B79C8
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00B5424 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDisplayMode @ 0x1C00B96F0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?CheckForPrimaryInfo@DXGDEVICE@@QEAA_NIIAEAIAEAPEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B3D0 (-CheckForPrimaryInfo@DXGDEVICE@@QEAA_NIIAEAIAEAPEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000B670 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000B6CC (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int *v18; // r9
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned int i; // esi
  _BYTE v27[32]; // [rsp+30h] [rbp-38h] BYREF
  union _LARGE_INTEGER v28; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v29; // [rsp+78h] [rbp+10h] BYREF

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 4678) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = 3027LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v22 + 24) = 3028LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 2338)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v23 + 24) = 3029LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( *((_DWORD *)this + 70) != 1 )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v24 + 24) = 3030LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( (*((_DWORD *)this + v5 + 1188) & 0x20) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 2338) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_14:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)this + 29);
    *((_DWORD *)this + v5 + 1188) |= 0x20u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
    return 0LL;
  }
  v14 = 0;
  while ( 1 )
  {
    v29 = 0;
    v28.QuadPart = 0LL;
    if ( DXGDEVICE::CheckForPrimaryInfo(this, v5, v14, &v29, (struct _VIDMM_MULTI_ALLOC **)&v28) )
    {
      if ( !v29 )
      {
        v25 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
        *(_QWORD *)(v25 + 24) = 3043LL;
        WdLogEvent5_WdAssertion(v25);
      }
      v20 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
              (struct _VIDMM_MULTI_ALLOC *)v28.QuadPart,
              v18);
      if ( v20 < 0 )
        break;
    }
    if ( ++v14 >= 0x1F )
      goto LABEL_14;
  }
  for ( i = 0; i < v14; ++i )
  {
    if ( DXGDEVICE::CheckForPrimaryInfo(this, v5, i, &v29, (struct _VIDMM_MULTI_ALLOC **)&v28) )
      VIDMM_EXPORT::VidMmUnpinAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
        (struct _VIDMM_MULTI_ALLOC *)v28.QuadPart);
  }
  return (unsigned int)v20;
}
