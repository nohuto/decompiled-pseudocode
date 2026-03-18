/*
 * XREFs of IopAddBugcheckTriageThread @ 0x1401CC88C
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401C7AD0 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401CC284 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401CC388 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401CCA14 (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B3B4 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14014B4B0 (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x1401C74E4 (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x1401CC70C (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // r15d
  __int64 v4; // rcx
  __int64 v5; // rsi
  unsigned int v6; // ecx
  unsigned __int64 v7; // rsi
  int MaxValidMemorySize; // eax
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // r14

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(a1, 2016LL) )
  {
    IoAddTriageDumpDataBlock(a1, 2016);
    if ( (*(_BYTE *)(a1 + 122) & 1) != 0 )
    {
      v4 = *(_QWORD *)(a1 + 56);
      v5 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v4 - v5) >= 0x3FFF )
        v6 = 0x3FFF;
      else
        v6 = v4 - v5;
      v7 = (v5 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v7, v6);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v7, MaxValidMemorySize);
    }
    v9 = (_QWORD *)(a1 + 1640);
    v10 = *(_QWORD **)(a1 + 1640);
    v11 = v9;
    while ( v10 && v10 != v9 && v3 < 10 )
    {
      ++v3;
      if ( !IopIsAddressRangeValid((__int64)(v10 - 4), 208LL) || (_QWORD *)v10[1] != v11 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(v10 - 4), 1);
      v11 = v10;
      v10 = (_QWORD *)*v10;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
