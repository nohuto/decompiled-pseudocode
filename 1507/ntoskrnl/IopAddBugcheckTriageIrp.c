/*
 * XREFs of IopAddBugcheckTriageIrp @ 0x1401F9A04
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x1401F9680 (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F991C (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1401F9B7C (IopAddBugcheckTriageThread.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14016F790 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14016F880 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401F991C (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageIrp(__int64 a1, char a2)
{
  int v4; // r12d
  unsigned int v5; // ebx
  int v6; // r11d
  unsigned __int16 v7; // ax
  char v8; // si
  __int64 v9; // r14
  int v10; // r10d
  int v11; // ebp
  int v12; // r15d
  unsigned __int64 v13; // r14
  __int64 v14; // r10
  char v15; // si
  __int64 v16; // r10
  __int64 v17; // r11
  __int64 v18; // rax

  v4 = 0;
  v5 = 0;
  if ( !IopIsAddressRangeValid(a1, 208LL) )
    return (unsigned int)-1073741823;
  v7 = *(_WORD *)(a1 + 2);
  v8 = *(_BYTE *)(a1 + 66);
  if ( v7 > 0x800u || v8 > 64 || (v9 = v7, !IopIsAddressRangeValid(a1, 8 * (((unsigned __int64)v7 + 7) >> 3))) )
  {
    IoAddTriageDumpDataBlock(a1, v6);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(a1, 8 * v10);
  if ( a2 == 1 )
  {
    v11 = 0;
    v12 = v8;
    if ( v8 > 0 )
    {
      v13 = a1 + v9;
      while ( a1 + 280 + 72LL * (char)v11 <= v13 )
      {
        v14 = *(_QWORD *)(a1 + 72LL * (char)v11 + 248);
        v15 = 0;
        if ( v14 )
        {
          while ( 1 )
          {
            ++v4;
            if ( !IopIsAddressRangeValid(v14, 336LL) || !IopIsAddressRangeValid(*(_QWORD *)(v16 + 312), 104LL) )
              break;
            v18 = *(_QWORD *)(v17 + 48);
            if ( v18 )
              v14 = *(_QWORD *)(v17 + 48);
            else
              v15 = 1;
            if ( !v18 || v4 >= 10 )
              goto LABEL_19;
          }
          v5 = -1073741823;
LABEL_19:
          if ( v15 )
            v5 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v17 + 40));
        }
        if ( ++v11 >= v12 )
          return v5;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v5;
}
