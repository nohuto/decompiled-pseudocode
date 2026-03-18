/*
 * XREFs of IopAddBugcheckTriageThread @ 0x1401BE314
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401B9CA4 (IopUpdateMinidumpContext.c)
 *     IopAddBugcheckPnpTriageData @ 0x1401BDD10 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401BDE18 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401BE488 (IopAddBugcheckTriageWorkQueue.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     IopGetMaxValidMemorySize @ 0x1401B96FC (IopGetMaxValidMemorySize.c)
 *     IopAddBugcheckTriageIrp @ 0x1401BE19C (IopAddBugcheckTriageIrp.c)
 */

__int64 __fastcall IopAddBugcheckTriageThread(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  int v4; // r10d
  __int64 v5; // rcx
  __int64 v6; // rsi
  unsigned int v7; // ecx
  unsigned __int64 v8; // rsi
  int MaxValidMemorySize; // eax
  _QWORD *v10; // rsi
  _QWORD *i; // rdi
  __int64 v12; // r11

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(a1, 1984LL) )
  {
    IoAddTriageDumpDataBlock(a1, v4);
    if ( (*(_BYTE *)(a1 + 122) & 1) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 56);
      v6 = *(_QWORD *)(a1 + 88);
      if ( (unsigned __int64)(v5 - v6) >= 0x3FFF )
        v7 = 0x3FFF;
      else
        v7 = v5 - v6;
      v8 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
      MaxValidMemorySize = IopGetMaxValidMemorySize(v8, v7);
      if ( MaxValidMemorySize )
        IoAddTriageDumpDataBlock(v8, MaxValidMemorySize);
    }
    v10 = (_QWORD *)(a1 + 1632);
    for ( i = *(_QWORD **)(a1 + 1632); i && i != v10 && v3 < 10; i = (_QWORD *)*i )
    {
      ++v3;
      if ( !IopIsAddressRangeValid((__int64)(i - 4), 208LL) || i[1] != v12 )
        return (unsigned int)-1073741823;
      IopAddBugcheckTriageIrp((__int64)(i - 4), 1);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
