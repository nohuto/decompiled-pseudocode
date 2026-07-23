/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x1401CC168
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401C7970 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x14014BA20 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401CC508 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1401CC770 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401CC8F8 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned int v4; // ebx
  _QWORD **v5; // r14
  _QWORD *v6; // rdi
  _QWORD *v7; // rbp

  v3 = 0;
  v4 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( IopIsAddressRangeValid(a2, 24LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, 24);
    v5 = *(_QWORD ***)(a2 + 8);
    if ( IopIsAddressRangeValid((__int64)v5, 16LL) )
    {
      IoAddTriageDumpDataBlock((int)v5, 16);
      v6 = *v5;
      if ( *v5 && v6 != *(_QWORD **)(a2 + 8) )
      {
        v7 = v5;
        while ( v6 != v5 && v3 < 10 )
        {
          ++v3;
          if ( !IopIsAddressRangeValid((__int64)v6, 24LL) )
            goto LABEL_14;
          IoAddTriageDumpDataBlock((int)v6, 24);
          if ( (_QWORD *)v6[1] != v7 )
            goto LABEL_14;
          v7 = v6;
          v4 = IopAddBugcheckTriageDeviceNode(v6[2]);
          v6 = (_QWORD *)*v6;
          if ( !v6 )
            break;
        }
      }
    }
    else
    {
LABEL_14:
      v4 = -1073741823;
    }
    IopAddBugcheckTriageWorkQueue(*(_QWORD *)(a2 + 16));
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
