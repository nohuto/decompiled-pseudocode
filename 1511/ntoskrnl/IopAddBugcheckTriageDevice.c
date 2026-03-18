/*
 * XREFs of IopAddBugcheckTriageDevice @ 0x1401BDFAC
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x1401BDE18 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401BE0B4 (IopAddBugcheckTriageDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageUnicodeString @ 0x1401BE400 (IopAddBugcheckTriageUnicodeString.c)
 */

__int64 __fastcall IopAddBugcheckTriageDevice(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // ebp
  unsigned __int16 v4; // ax
  int v5; // r10d
  int v6; // edx
  int v7; // r10d
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v3 = 0;
  while ( 1 )
  {
    ++v3;
    if ( !IopIsAddressRangeValid(a1, 336LL) )
      break;
    v4 = *(_WORD *)(a1 + 2);
    if ( v4 <= 0x3000u && IopIsAddressRangeValid(a1, 8 * (((unsigned __int64)v4 + 7) >> 3)) )
      v6 = 8 * v5;
    else
      v6 = 336;
    IoAddTriageDumpDataBlock(a1, v6);
    if ( IopIsAddressRangeValid(*(_QWORD *)(a1 + 312), 104LL) )
      IoAddTriageDumpDataBlock(v7, 104);
    v8 = *(_QWORD *)(a1 + 8);
    if ( IopIsAddressRangeValid(v8, 336LL) )
    {
      IoAddTriageDumpDataBlock(v8, 336);
      v10 = *(_OWORD *)(v8 + 56);
      IopAddBugcheckTriageUnicodeString(&v10);
    }
    a1 = *(_QWORD *)(a1 + 24);
    if ( !a1 || v3 >= 10 )
      return v1;
  }
  return (unsigned int)-1073741823;
}
