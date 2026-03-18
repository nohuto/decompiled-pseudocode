/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C015DF14
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C015E3D8 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
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
  __int64 v13; // rcx
  void *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v21[32]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v21, this + 32);
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 8010LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_DWORD *)this + v3 + 298);
  v9 = 0;
  if ( v8 == *((_DWORD *)this + v3 + 314) )
  {
    v10 = v8;
    if ( v8 )
    {
      v8 *= 2;
      if ( v8 > 0x300 )
      {
        v16 = WdLogNewEntry5_WdError(v6);
        *(_QWORD *)(v16 + 24) = 8026LL;
        WdLogEvent5_WdError(v16);
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
    v12 = (char *)operator new(v11, 0x4B677844u, PagedPool);
    v14 = v12;
    if ( !v12 )
    {
      v15 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v15 + 24) = v8;
      WdLogEvent5_WdLowResource(v15);
      goto LABEL_25;
    }
    memset(&v12[8 * v10], 0, 8LL * (v8 - (unsigned int)v10));
    if ( (_DWORD)v10 )
    {
      memmove(v14, this[v3 + 133], 8 * v10);
      operator delete(this[v3 + 133]);
    }
    this[v3 + 133] = (struct _KTHREAD *)v14;
    *((_DWORD *)this + v3 + 298) = v8;
  }
  v17 = 0;
  if ( v8 )
  {
    v6 = this[v3 + 133];
    do
    {
      if ( !*((_QWORD *)v6 + v17) )
        break;
      ++v17;
    }
    while ( v17 < *((_DWORD *)this + v3 + 298) );
  }
  if ( v17 != v8 )
  {
    if ( *((_QWORD *)this[v3 + 133] + v17) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v18 + 24) = 8071LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( *((_DWORD *)this + v3 + 298) < *((_DWORD *)this + v3 + 314) )
    {
      v19 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v19 + 24) = 8072LL;
      WdLogEvent5_WdAssertion(v19);
    }
    v9 = 1;
    *((_QWORD *)this[v3 + 133] + v17) = a3;
    ++*((_DWORD *)this + v3 + 314);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v17)) & 0x7FE;
  }
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v9;
}
