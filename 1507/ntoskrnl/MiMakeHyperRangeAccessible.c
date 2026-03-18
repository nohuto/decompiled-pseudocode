/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1404680B8
 * Callers:
 *     MiExpandVadBitMap @ 0x140467ED4 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x1406A55E4 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiWriteDemandZeroPte @ 0x14002B3E8 (MiWriteDemandZeroPte.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14008F8A0 (MiGetProcessPartition.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r13
  int v5; // ebp
  unsigned __int64 *v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rdi
  __int64 *v9; // r14
  __int64 PteShadow; // rbx
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int16 *ProcessPartition; // rax
  unsigned __int64 v17; // [rsp+78h] [rbp+20h]

  *a3 = 0LL;
  v3 = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = 0;
  v17 = v4;
  v6 = a3;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v8 = v4;
    if ( v4 <= v7 )
    {
      while ( 1 )
      {
        v9 = (__int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v9;
        if ( MiPteInShadowRange((__int64)v9) )
          PteShadow = MiReadPteShadow((__int64)v9, PteShadow);
        if ( PteShadow )
          goto LABEL_11;
        if ( v5 )
          break;
        v11 = v3 + 1;
        v12 = (unsigned __int64)(4096 - (unsigned int)(v8 & 0xFFF)) >> 3;
        if ( v12 > ((__int64)(v7 - v8) >> 3) + 1 )
          v12 = ((__int64)(v7 - v8) >> 3) + 1;
        v3 = v12 + v11;
        v8 += 8 * v12;
LABEL_18:
        if ( v8 > v7 )
        {
          v6 = a3;
          v4 = v17;
          goto LABEL_20;
        }
      }
      MiWriteDemandZeroPte(v9);
LABEL_11:
      v13 = *(_QWORD *)v8;
      if ( MiPteInShadowRange(v8) )
        v13 = MiReadPteShadow(v8, v13);
      if ( !v13 )
      {
        if ( v5 )
          MiWriteDemandZeroPte((__int64 *)v8);
        else
          ++v3;
      }
      v8 += 8LL;
      goto LABEL_18;
    }
LABEL_20:
    if ( !v5 )
    {
      if ( v3 )
      {
        ProcessPartition = MiGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        if ( !(unsigned int)MiChargeCommit((__int64)ProcessPartition, v3, 0) )
          return 3221225773LL;
      }
    }
    if ( (unsigned int)++v5 >= 2 )
    {
      *v6 = v3;
      return 0LL;
    }
  }
}
