/*
 * XREFs of ?TryInvalidatePrimaryAllocation@DXGDEVICE@@QEAA_NIIAEAPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001D2E0
 * Callers:
 *     ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C0136238 (-InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

char __fastcall DXGDEVICE::TryInvalidatePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        unsigned int a3,
        struct _VIDMM_MULTI_GLOBAL_ALLOC **a4)
{
  __int64 v4; // rdi
  __int64 v6; // r14
  char v8; // si
  __int64 v9; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v14; // rax
  _BYTE v16[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  v6 = a3;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, this + 29);
  v8 = 0;
  if ( !(_DWORD)v6 )
    *((_DWORD *)this + v4 + 1188) &= ~0x40u;
  v9 = v4;
  v10 = v6 + 31 * v4;
  if ( this[v10 + 74] )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace();
    v11[3] = this[v10 + 74];
    v11[4] = v6;
    v11[5] = v9;
    if ( (*(_DWORD *)(*((_QWORD *)this[v10 + 74] + 6) + 4LL) & 0x10) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion();
      *(_QWORD *)(v12 + 24) = 752LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v13 = *((_QWORD *)this[v10 + 74] + 6);
    v14 = *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(v13 + 8);
    *(_DWORD *)(v13 + 4) |= 0x10u;
    this[v10 + 74] = 0LL;
    v8 = 1;
    *a4 = v14;
    *((_DWORD *)this + v9 + 1188) ^= ((unsigned __int8)*((_DWORD *)this + v9 + 1188) ^ (unsigned __int8)(*((_DWORD *)this + v9 + 1188) - 1)) & 0x1F;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v8;
}
