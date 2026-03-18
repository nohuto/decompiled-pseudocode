/*
 * XREFs of IopAddBugcheckTriageWorkQueue @ 0x1401BE488
 * Callers:
 *     IopAddBugcheckPnpTriageData @ 0x1401BDD10 (IopAddBugcheckPnpTriageData.c)
 *     IopAddBugcheckPowerTriageData @ 0x1401BDE18 (IopAddBugcheckPowerTriageData.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageThread @ 0x1401BE314 (IopAddBugcheckTriageThread.c)
 */

__int64 __fastcall IopAddBugcheckTriageWorkQueue(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  int v4; // r10d
  _QWORD **v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // r10

  v1 = 0;
  v3 = 0;
  if ( IopIsAddressRangeValid(a1, 688LL) )
  {
    IoAddTriageDumpDataBlock(a1, v4);
    v5 = (_QWORD **)(a1 + 672);
    v6 = *v5;
    if ( *v5 )
    {
      while ( v6 != v5 && v3 < 10 )
      {
        ++v3;
        if ( !IopIsAddressRangeValid((__int64)v6, 16LL) || v6[1] != v7 )
          return (unsigned int)-1073741823;
        IopAddBugcheckTriageThread((__int64)(v6 - 65));
        v6 = (_QWORD *)*v6;
        if ( !v6 )
          return v1;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v1;
}
