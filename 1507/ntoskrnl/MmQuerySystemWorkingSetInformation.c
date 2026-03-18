/*
 * XREFs of MmQuerySystemWorkingSetInformation @ 0x140113204
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiGetStandbyRepurposed @ 0x14011374C (MiGetStandbyRepurposed.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MmQuerySystemWorkingSetInformation(int a1, __int64 *a2)
{
  __int64 result; // rax
  signed __int32 *v4; // rbx
  __int64 v5; // rsi
  unsigned __int8 CurrentIrql; // bp
  signed __int32 v7; // ett
  __int16 *VmPartition; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)a2 + 15) = 0;
  result = 2LL;
  switch ( a1 )
  {
    case 2:
      v4 = dword_14034FD40;
      break;
    case 3:
      v4 = dword_14034FE40;
      break;
    case 4:
      v4 = dword_14034FF40;
      break;
    default:
      return result;
  }
  v5 = (unsigned int)(a1 - 2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v4);
  }
  else
  {
    _m_prefetchw(v4);
    v7 = *v4 & 0x7FFFFFFF;
    if ( v7 != _InterlockedCompareExchange(v4, v7 + 1, v7) )
      ExpWaitForSpinLockSharedAndAcquire(v4);
  }
  *a2 = *((_QWORD *)v4 + 13);
  a2[1] = *((_QWORD *)v4 + 21);
  *((_DWORD *)a2 + 4) = v4[49];
  a2[3] = *((_QWORD *)v4 + 12);
  a2[4] = *((_QWORD *)v4 + 17);
  if ( *((char *)v4 + 216) < 0 )
    *((_DWORD *)a2 + 15) |= 4u;
  if ( (v4[54] & 0x40) != 0 )
    *((_DWORD *)a2 + 15) |= 1u;
  a2[6] = qword_14034F408[v5];
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v4, retaddr);
  }
  else
  {
    _InterlockedAnd(v4, 0xBFFFFFFF);
    _InterlockedDecrement(v4);
  }
  __writecr8(CurrentIrql);
  VmPartition = MiGetVmPartition((__int64)v4);
  result = MiGetStandbyRepurposed(VmPartition, 1LL);
  v9 = *a2;
  *((_DWORD *)a2 + 14) = result;
  v10 = v9 + qword_14034F400;
  if ( v9 + qword_14034F400 > (unsigned __int64)a2[6] )
    v10 = a2[6];
  a2[1] <<= 12;
  *a2 = v9 << 12;
  a2[5] = v10;
  return result;
}
