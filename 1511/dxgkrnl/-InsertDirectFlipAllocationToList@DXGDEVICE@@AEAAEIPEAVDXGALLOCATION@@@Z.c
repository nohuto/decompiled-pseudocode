/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C013A848
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013AD0C (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ebp
  char v9; // si
  __int64 v10; // r14
  SIZE_T v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  void *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v24[32]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 32);
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 7654LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + v3 + 292);
  v9 = 0;
  if ( v8 == *((_DWORD *)this + v3 + 308) )
  {
    v10 = v8;
    if ( v8 )
    {
      v8 *= 2;
      if ( v8 > 0x300 )
      {
        v19 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v19 + 24) = 7670LL;
        WdLogEvent5_WdError(v19);
        goto LABEL_25;
      }
    }
    else
    {
      v8 = 4;
    }
    v11 = 8LL * v8;
    if ( !is_mul_ok(v8, 8uLL) )
      v11 = -1LL;
    v12 = (char *)operator new[](v11, 0x4B677844u, PagedPool);
    v17 = v12;
    if ( !v12 )
    {
      v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
      *(_QWORD *)(v18 + 24) = v8;
      WdLogEvent5_WdLowResource(v18);
      goto LABEL_25;
    }
    memset(&v12[8 * v10], 0, 8LL * (v8 - (unsigned int)v10));
    if ( (_DWORD)v10 )
    {
      memmove(v17, this[v3 + 130], 8 * v10);
      operator delete(this[v3 + 130]);
    }
    this[v3 + 130] = (struct _KTHREAD *)v17;
    *((_DWORD *)this + v3 + 292) = v8;
  }
  v20 = 0;
  if ( v8 )
  {
    v6 = this[v3 + 130];
    do
    {
      if ( !*((_QWORD *)v6 + v20) )
        break;
      ++v20;
    }
    while ( v20 < *((_DWORD *)this + v3 + 292) );
  }
  if ( v20 != v8 )
  {
    if ( *((_QWORD *)this[v3 + 130] + v20) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v21 + 24) = 7715LL;
      WdLogEvent5_WdAssertion(v21);
    }
    if ( *((_DWORD *)this + v3 + 292) < *((_DWORD *)this + v3 + 308) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v22 + 24) = 7716LL;
      WdLogEvent5_WdAssertion(v22);
    }
    v9 = 1;
    *((_QWORD *)this[v3 + 130] + v20) = a3;
    ++*((_DWORD *)this + v3 + 308);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v20)) & 0x7FE;
  }
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v9;
}
