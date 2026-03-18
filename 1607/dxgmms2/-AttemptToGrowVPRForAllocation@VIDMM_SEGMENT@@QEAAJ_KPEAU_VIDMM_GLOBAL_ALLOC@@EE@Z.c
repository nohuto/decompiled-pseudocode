/*
 * XREFs of ?AttemptToGrowVPRForAllocation@VIDMM_SEGMENT@@QEAAJ_KPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C00982BC
 * Callers:
 *     ?ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z @ 0x1C0099EEC (-ReserveVPRResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@EE@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@P8VIDMM_SEGMENT@@EAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@ZPEAV3@4PEAPEAU4@3@Z @ 0x1C009F0B8 (-DirectedIterateAllocatedBlocksInRange@VIDMM_LINEAR_POOL@@QEAAJ_K0W4VIDMM_DEFRAGMENT_DIRECTION@@.c)
 */

__int64 __fastcall VIDMM_SEGMENT::AttemptToGrowVPRForAllocation(
        VIDMM_SEGMENT *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        char a4,
        char a5)
{
  __int64 v5; // r13
  char v6; // r15
  unsigned __int64 v7; // rbp
  unsigned __int64 v10; // rdi
  char v11; // r12
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r15
  __int64 result; // rax
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD v19[9]; // [rsp+60h] [rbp-48h] BYREF
  union _LARGE_INTEGER v20; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+18h] BYREF
  char v22; // [rsp+C8h] [rbp+20h]

  v22 = a4;
  v5 = *((unsigned int *)a3 + 8);
  v6 = a4;
  v7 = *((_QWORD *)a3 + 2);
  v10 = a2 & ~(v5 - 1);
  if ( v10 < v7 || v10 - v7 <= *((_QWORD *)this + 47) )
    return 3221225495LL;
  KeWaitForSingleObject((PVOID)(*((_QWORD *)this + 1) + 41064LL), Executive, 0, 0, 0LL);
  v11 = a5;
  if ( !*((_QWORD *)this + 53) )
  {
    v12 = *((_QWORD *)this + 57);
    if ( v12 )
    {
      v13 = *((_QWORD *)this + 51);
      v14 = v13 - v12;
      result = VIDMM_LINEAR_POOL::Allocate(
                 *((VIDMM_LINEAR_POOL **)this + 18),
                 v12,
                 1LL,
                 0LL,
                 v13 - v12,
                 v13,
                 v22,
                 a5,
                 0LL,
                 &v20,
                 (void **)this + 56);
      if ( (int)result < 0 )
        return result;
      v10 = v14 & ~(v5 - 1);
      v6 = v22;
    }
  }
  v16 = (v10 - v7) & *((unsigned int *)this + 100);
  result = VIDMM_LINEAR_POOL::Allocate(
             *((VIDMM_LINEAR_POOL **)this + 18),
             v7,
             (unsigned int)v5,
             0LL,
             v16,
             v10,
             v6,
             v11,
             a3,
             (union _LARGE_INTEGER *)a3 + 27,
             (void **)a3 + 26);
  if ( (int)result < 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 2040LL)
                  + 48LL * *((unsigned int *)this + 93)
                  + 16) & 4) != 0 )
  {
    v17 = *((_QWORD *)this + 52);
    v18 = *((_QWORD *)this + 18);
    v21 = 0LL;
    v19[1] = v17;
    LOBYTE(v20.LowPart) = 0;
    v19[0] = v16;
    result = VIDMM_LINEAR_POOL::DirectedIterateAllocatedBlocksInRange(
               v18,
               v16,
               v10,
               0,
               (__int64)VIDMM_SEGMENT::ReserveOutsideRangeIfDisplayableCB,
               (__int64)this,
               (__int64)v19,
               (__int64)&v21,
               (__int64)&v20);
    if ( (int)result >= 0 )
      return VIDMM_LINEAR_POOL::Allocate(
               *((VIDMM_LINEAR_POOL **)this + 18),
               v7,
               (unsigned int)v5,
               0LL,
               v16,
               v10,
               v6,
               v11,
               a3,
               (union _LARGE_INTEGER *)a3 + 27,
               (void **)a3 + 26);
  }
  return result;
}
