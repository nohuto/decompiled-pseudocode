/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0095A80
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00740D0 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00072BC (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0007484 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r8
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 716) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 3320LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 3321LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 357)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v13 + 24) = 3322LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 76) != 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v14 + 24) = 3323LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (*((_DWORD *)this + v3 + 250) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 357) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_15:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 29);
    *((_DWORD *)this + v3 + 250) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 29);
  v6 = 0LL;
  if ( !*((_DWORD *)this + v3 + 186) )
  {
LABEL_14:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    goto LABEL_15;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + v3 + 77) + 8 * v6);
    if ( v7 )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(v7 + 48) + 4LL);
      if ( (v9 & 1) == 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v15 + 24) = 3336LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v10 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)this + v3 + 77) + 8 * v6) + 24LL),
              0LL,
              0LL);
      if ( v10 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)this + v3 + 186) )
      goto LABEL_14;
  }
  if ( (_DWORD)v6 )
  {
    v16 = 0LL;
    do
    {
      v17 = *(_QWORD *)(v16 + *((_QWORD *)this + v3 + 77));
      if ( v17 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 400LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 408LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v17 + 24));
      v16 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return (unsigned int)v10;
}
