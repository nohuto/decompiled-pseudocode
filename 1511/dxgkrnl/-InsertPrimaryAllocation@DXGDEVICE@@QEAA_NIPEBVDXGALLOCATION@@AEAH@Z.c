/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0001FD8
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C006E1B4 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  char v8; // si
  unsigned int v9; // ebp
  unsigned int v10; // r14d
  __int64 v11; // rax
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  char *v17; // rax
  void *v18; // r15
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v22, (DXGDEVICE *)((char *)this + 232));
  v8 = 0;
  v9 = *((_DWORD *)this + v4 + 180);
  if ( v9 == (unsigned __int8)*((_DWORD *)this + v4 + 244) )
  {
    v13 = 2 * v9;
    v14 = 255;
    v15 = *((unsigned int *)this + v4 + 180);
    v9 = 4;
    if ( v13 < 0xFF )
      v14 = v13;
    if ( v14 >= 4 )
    {
      v9 = 255;
      if ( v13 < 0xFF )
        v9 = v13;
    }
    if ( v9 == (_DWORD)v15 )
    {
      v19 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v19 + 24) = 730LL;
      WdLogEvent5_WdError(v19);
      goto LABEL_5;
    }
    v16 = 8LL * v9;
    if ( !is_mul_ok(v9, 8uLL) )
      v16 = -1LL;
    v17 = (char *)operator new[](v16, 0x4B677844u, PagedPool);
    v18 = v17;
    if ( !v17 )
    {
      v20 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v20 + 24) = v9;
      WdLogEvent5_WdLowResource(v20);
      goto LABEL_5;
    }
    memset(&v17[8 * v15], 0, 8LL * (v9 - (unsigned int)v15));
    if ( (_DWORD)v15 )
    {
      memmove(v18, *((const void **)this + v4 + 74), 8 * v15);
      operator delete(*((void **)this + v4 + 74));
    }
    *((_QWORD *)this + v4 + 74) = v18;
    v6 = a4;
    *((_DWORD *)this + v4 + 180) = v9;
  }
  v10 = 0;
  if ( v9 )
  {
    while ( *(_QWORD *)(*((_QWORD *)this + v4 + 74) + 8LL * v10) )
    {
      if ( ++v10 >= *((_DWORD *)this + v4 + 180) )
        goto LABEL_23;
    }
    v11 = WdLogNewEntry5_WdTrace();
    v8 = 1;
    *(_QWORD *)(v11 + 24) = a3;
    *(_QWORD *)(v11 + 32) = v4;
    *(_QWORD *)(*((_QWORD *)this + v4 + 74) + 8LL * v10) = a3;
    ++*((_BYTE *)this + 4 * v4 + 976);
    *v6 = (*((_DWORD *)this + v4 + 244) >> 8) & 1;
  }
  else
  {
LABEL_23:
    v21 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v21 + 24) = 787LL;
    WdLogEvent5_WdAssertion(v21);
  }
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v8;
}
