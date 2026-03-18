/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0007B30
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00969A0 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  struct _KTHREAD *v8; // rcx
  char v9; // si
  unsigned int v10; // ebp
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  char *v18; // rax
  __int64 v19; // rcx
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 29);
  v9 = 0;
  v10 = *((_DWORD *)this + v4 + 186);
  if ( v10 == (unsigned __int8)*((_DWORD *)this + v4 + 250) )
  {
    v14 = 2 * v10;
    v15 = 255;
    v16 = *((unsigned int *)this + v4 + 186);
    v10 = 4;
    if ( (unsigned int)v14 < 0xFF )
      v15 = v14;
    if ( v15 >= 4 )
    {
      v10 = 255;
      if ( (unsigned int)v14 < 0xFF )
        v10 = v14;
    }
    if ( v10 == (_DWORD)v16 )
    {
      v21 = WdLogNewEntry5_WdError(v14);
      *(_QWORD *)(v21 + 24) = 716LL;
      WdLogEvent5_WdError(v21);
      goto LABEL_8;
    }
    v17 = 8LL * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v17 = -1LL;
    v18 = (char *)operator new(v17, 0x4B677844u, PagedPool);
    v20 = v18;
    if ( !v18 )
    {
      v22 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdLowResource(v22);
      goto LABEL_8;
    }
    memset(&v18[8 * v16], 0, 8LL * (v10 - (unsigned int)v16));
    if ( (_DWORD)v16 )
    {
      memmove(v20, this[v4 + 77], 8 * v16);
      operator delete(this[v4 + 77]);
    }
    this[v4 + 77] = (struct _KTHREAD *)v20;
    v6 = a4;
    *((_DWORD *)this + v4 + 186) = v10;
  }
  v11 = 0;
  if ( v10 )
  {
    v8 = this[v4 + 77];
    while ( *((_QWORD *)v8 + v11) )
    {
      if ( ++v11 >= *((_DWORD *)this + v4 + 186) )
        goto LABEL_24;
    }
    v12 = WdLogNewEntry5_WdTrace();
    v9 = 1;
    *(_QWORD *)(v12 + 24) = a3;
    *(_QWORD *)(v12 + 32) = v4;
    *((_QWORD *)this[v4 + 77] + v11) = a3;
    ++*((_BYTE *)this + 4 * v4 + 1000);
    *v6 = (*((_DWORD *)this + v4 + 250) >> 8) & 1;
  }
  else
  {
LABEL_24:
    v23 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v23 + 24) = 773LL;
    WdLogEvent5_WdAssertion(v23);
  }
LABEL_8:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v9;
}
