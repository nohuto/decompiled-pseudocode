/*
 * XREFs of IopAddBugcheckPnpTriageData @ 0x1401BDD10
 * Callers:
 *     IopUpdateMinidumpContext @ 0x1401B9CA4 (IopUpdateMinidumpContext.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 *     IopAddBugcheckTriageDeviceNode @ 0x1401BE0B4 (IopAddBugcheckTriageDeviceNode.c)
 *     IopAddBugcheckTriageThread @ 0x1401BE314 (IopAddBugcheckTriageThread.c)
 *     IopAddBugcheckTriageWorkQueue @ 0x1401BE488 (IopAddBugcheckTriageWorkQueue.c)
 */

__int64 __fastcall IopAddBugcheckPnpTriageData(__int64 a1, __int64 a2)
{
  int v3; // r15d
  unsigned int v4; // ebx
  _QWORD **v5; // r14
  int v6; // r10d
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp

  v3 = 0;
  v4 = 0;
  IopAddBugcheckTriageThread(a1);
  if ( IopIsAddressRangeValid(a2, 24LL) && *(_WORD *)a2 == 0x8001 )
  {
    IoAddTriageDumpDataBlock(a2, 24);
    v5 = *(_QWORD ***)(a2 + 8);
    if ( IopIsAddressRangeValid((__int64)v5, 16LL) )
    {
      IoAddTriageDumpDataBlock((int)v5, v6);
      v7 = *v5;
      if ( *v5 && v7 != *(_QWORD **)(a2 + 8) )
      {
        v8 = v5;
        while ( v7 != v5 && v3 < 10 )
        {
          ++v3;
          if ( !IopIsAddressRangeValid((__int64)v7, 24LL) )
            goto LABEL_14;
          IoAddTriageDumpDataBlock((int)v7, 24);
          if ( (_QWORD *)v7[1] != v8 )
            goto LABEL_14;
          v8 = v7;
          v4 = IopAddBugcheckTriageDeviceNode(v7[2]);
          v7 = (_QWORD *)*v7;
          if ( !v7 )
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
