/*
 * XREFs of ?PopDirectFlipAllocationFromList@DXGDEVICE@@AEAAPEAVDXGALLOCATION@@IPEAIPEAE@Z @ 0x1C00B78BC
 * Callers:
 *     ?UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z @ 0x1C00B7DBC (-UnpinAllDirectFlipAllocations@DXGDEVICE@@QEAAJIHPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

struct DXGALLOCATION *__fastcall DXGDEVICE::PopDirectFlipAllocationFromList(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbp
  __int64 v13; // r15
  unsigned int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE v24[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 32);
  if ( *a3 >= 0x60 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v18 + 24) = 7708LL;
    WdLogEvent5_WdAssertion(v18);
  }
  if ( *a4 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v19 + 24) = 7709LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v12 = 96 * v4;
  v13 = v4;
  if ( !*(&this[96 * v4 + 602] + *a3) )
  {
    do
    {
      if ( *a3 >= 0x60 )
        break;
      v14 = *a3 + 1;
      v9 = v12 + v14;
      *a3 = v14;
    }
    while ( !this[v9 + 602] );
  }
  v15 = *a3;
  if ( (_DWORD)v15 == 96 )
  {
    v16 = 0LL;
LABEL_10:
    *a4 = 1;
    goto LABEL_11;
  }
  v16 = (__int64)*(&this[v15 + 602] + v12);
  if ( !v16 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v20 + 24) = 7723LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( *a3 != ((*(_DWORD *)(v16 + 72) >> 1) & 0x7F) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v21 + 24) = 7724LL;
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*((_DWORD *)this + v13 + 4276) )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    *(_QWORD *)(v22 + 24) = 7725LL;
    WdLogEvent5_WdAssertion(v22);
  }
  v23 = *a3;
  *(&this[v12 + 602] + v23) = 0LL;
  --*((_DWORD *)this + v13 + 4276);
  *(_DWORD *)(v16 + 72) &= 0xFFFFFF01;
  *a3 = v23 + 1;
  if ( (_DWORD)v23 == 95 )
    goto LABEL_10;
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return (struct DXGALLOCATION *)v16;
}
