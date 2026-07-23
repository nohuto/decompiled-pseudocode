/*
 * XREFs of PnprMmAddRange @ 0x140610DC4
 * Callers:
 *     PnprMmConstruct @ 0x140610EF4 (PnprMmConstruct.c)
 * Callees:
 *     RtlSetAllBits @ 0x1400F9D20 (RtlSetAllBits.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprMmAddRange(unsigned int *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  unsigned int v4; // r15d
  unsigned __int64 v5; // rdi
  __int64 v7; // rbp
  _RTL_BITMAP *PoolWithTag; // rax
  _RTL_BITMAP *v9; // rbx
  unsigned int *i; // rax
  __int64 v11; // rcx
  SIZE_T v12; // rdx
  int v13; // ecx
  int v14; // ecx

  v3 = a2 >> 12;
  v4 = 0;
  v5 = a3 >> 12;
  if ( a3 >> 12 )
  {
    while ( 1 )
    {
      v7 = v5;
      if ( v5 > 0x80000000 )
        v7 = 0x80000000LL;
      PoolWithTag = (_RTL_BITMAP *)ExAllocatePoolWithTag(
                                     NonPagedPoolNx,
                                     ((((_DWORD)v7 + 32) & 0xFFFFFFE0) >> 3) + 48,
                                     0x52706E50u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      *(_QWORD *)&PoolWithTag[1].SizeOfBitMap = v3;
      PoolWithTag[1].Buffer = (unsigned int *)v7;
      PoolWithTag[2].Buffer = &PoolWithTag[3].SizeOfBitMap;
      PoolWithTag[2].SizeOfBitMap = (v7 + 32) & 0xFFFFFFE0;
      RtlSetAllBits(PoolWithTag + 2);
      for ( i = (unsigned int *)*((_QWORD *)a1 + 1); i != a1; i = (unsigned int *)*((_QWORD *)i + 1) )
      {
        if ( *((_QWORD *)i + 2) < *(_QWORD *)&v9[1].SizeOfBitMap )
          break;
      }
      v11 = *(_QWORD *)i;
      *(_QWORD *)&v9->SizeOfBitMap = *(_QWORD *)i;
      v9->Buffer = i;
      if ( *(unsigned int **)(v11 + 8) != i )
        __fastfail(3u);
      v3 += v7;
      *(_QWORD *)(v11 + 8) = v9;
      *(_QWORD *)i = v9;
      v5 -= v7;
      if ( !v5 )
        return v4;
    }
    v12 = PnprContext;
    v4 = -1073741670;
    v13 = *(_DWORD *)(PnprContext + 10744);
    if ( !v13 )
      v13 = 4349;
    *(_DWORD *)(PnprContext + 10744) = v13;
    v14 = *(_DWORD *)(v12 + 10748);
    if ( !v14 )
      v14 = 10;
    *(_DWORD *)(v12 + 10748) = v14;
  }
  return v4;
}
