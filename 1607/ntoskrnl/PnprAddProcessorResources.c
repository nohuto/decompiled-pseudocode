/*
 * XREFs of PnprAddProcessorResources @ 0x140643F24
 * Callers:
 *     PnprAddDeviceResources @ 0x140643CCC (PnprAddDeviceResources.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140071E68 (KeGetProcessorNumberFromIndex.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnprAddProcessorResources(__int64 a1, ULONG a2, int a3, _DWORD **a4)
{
  _DWORD *v4; // rbx
  int v8; // eax
  int v9; // r15d
  unsigned int v10; // r12d
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rsi
  SIZE_T v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 result; // rax
  __int64 ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = a1;
  v4 = *a4;
  LODWORD(ProcNumber) = 0;
  v8 = v4[4];
  if ( v8 == v4[3] )
  {
    v9 = v8 + 4;
    v10 = 4 * v8 + 20;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(4 * (v8 + 4) + 20), 0x51706E50u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = PnprContext;
      v14 = *(_DWORD *)(PnprContext + 10744);
      if ( !v14 )
        v14 = 820;
      *(_DWORD *)(PnprContext + 10744) = v14;
      v15 = *(_DWORD *)(v13 + 10748);
      if ( !v15 )
        v15 = 10;
      *(_DWORD *)(v13 + 10748) = v15;
      return 3221225626LL;
    }
    memmove(PoolWithTag, v4, v10);
    ExFreePoolWithTag(v4, 0x51706E50u);
    v4 = v12;
    v12[3] = v9;
  }
  if ( a2 != -1 )
  {
    KeGetProcessorNumberFromIndex(a2, (PPROCESSOR_NUMBER)&ProcNumber);
    *(_QWORD *)(*(_QWORD *)v4 + 8LL * (unsigned __int16)ProcNumber) |= 1LL << SBYTE2(ProcNumber);
  }
  v4[v4[4]++ + 5] = a3;
  result = 0LL;
  *a4 = v4;
  return result;
}
