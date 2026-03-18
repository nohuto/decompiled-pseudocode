/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00959B4
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0071D40 (DxgkSetDisplayMode.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 716) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 3373LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v13 + 24) = 3374LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 357)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v14 + 24) = 3375LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v8 = 1;
  if ( *((_DWORD *)this + 76) != 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v15 + 24) = 3376LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( *((_QWORD *)this + 357) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 29);
    v9 = *((_DWORD *)this + v4 + 186);
    v10 = 0LL;
    if ( v9 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v4 + 77) + 8 * v10) != a3 )
      {
        v10 = (unsigned int)(v10 + 1);
        if ( (unsigned int)v10 >= v9 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v8 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  }
  return v8;
}
