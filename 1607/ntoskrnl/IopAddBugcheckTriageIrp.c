/*
 * XREFs of IopAddBugcheckTriageIrp @ 0x1401CC5F0
 * Callers:
 *     IopAddBugcheckPowerTriageData @ 0x1401CC26C (IopAddBugcheckPowerTriageData.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC508 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC770 (IopAddBugcheckTriageThread.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14014BA20 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC508 (IopAddBugcheckTriageDeviceNode.c)
 */

__int64 __fastcall IopAddBugcheckTriageIrp(__int64 a1, char a2)
{
  int v4; // r13d
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  char v7; // si
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  int v10; // ebp
  int v11; // r12d
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r14
  char v15; // r15
  __int64 v16; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+18h]

  v4 = 0;
  v5 = 0;
  if ( !IopIsAddressRangeValid(a1, 208LL) )
    return (unsigned int)-1073741823;
  v6 = *(_WORD *)(a1 + 2);
  v7 = *(_BYTE *)(a1 + 66);
  if ( v6 > 0x800u || v7 > 64 || (v8 = v6, v9 = ((unsigned __int64)v6 + 7) >> 3, !IopIsAddressRangeValid(a1, 8 * v9)) )
  {
    IoAddTriageDumpDataBlock(a1, 208);
    return (unsigned int)-1073741823;
  }
  IoAddTriageDumpDataBlock(a1, 8 * v9);
  if ( a2 == 1 )
  {
    v10 = 0;
    v11 = v7;
    if ( v7 > 0 )
    {
      v12 = v8 + a1;
      v18 = v8 + a1;
      while ( a1 + 280 + 72LL * (char)v10 <= v12 )
      {
        v13 = *(_QWORD *)(a1 + 72LL * (char)v10 + 248);
        v14 = 0LL;
        v15 = 0;
        if ( v13 )
        {
          while ( 1 )
          {
            ++v4;
            if ( !IopIsAddressRangeValid(v13, 336LL) )
              break;
            v14 = *(_QWORD *)(v13 + 312);
            if ( !IopIsAddressRangeValid(v14, 104LL) )
              break;
            v16 = *(_QWORD *)(v14 + 48);
            if ( v16 )
              v13 = *(_QWORD *)(v14 + 48);
            else
              v15 = 1;
            if ( !v16 || v4 >= 10 )
              goto LABEL_19;
          }
          v5 = -1073741823;
LABEL_19:
          if ( v15 )
            v5 = IopAddBugcheckTriageDeviceNode(*(_QWORD *)(v14 + 40));
          v12 = v18;
        }
        if ( ++v10 >= v11 )
          return v5;
      }
      return (unsigned int)-1073741823;
    }
  }
  return v5;
}
