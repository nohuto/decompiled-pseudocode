/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x1404C4ACC
 * Callers:
 *     PnpRequestDeviceRemoval @ 0x1404C3E90 (PnpRequestDeviceRemoval.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1400097B8 (PipIsDevNodeDNStarted.c)
 *     PipRestoreDevNodeState @ 0x14009E68C (PipRestoreDevNodeState.c)
 *     PnpRequestDeviceRemovalWorker @ 0x1404C4ACC (PnpRequestDeviceRemovalWorker.c)
 *     PiGetDependentList @ 0x1404C4D38 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x14062AD1C (PiEnumerateDependentListEntry.c)
 */

char __fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  char v9; // r8
  _QWORD **DependentList; // rax
  int v11; // r8d
  _QWORD *i; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 != 2 && !a5 )
  {
    LOBYTE(DependentList) = PipIsDevNodeDNStarted(a2);
    goto LABEL_5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 300) == 782 )
    goto LABEL_10;
  if ( *(_DWORD *)(a2 + 300) == 783 )
  {
    if ( a3 )
    {
      PipRestoreDevNodeState(a2);
      PipSetDevNodeState(a2, 782);
    }
LABEL_10:
    v9 = 0;
  }
  LOBYTE(DependentList) = v9;
LABEL_5:
  if ( (_BYTE)DependentList )
  {
    PipSetDevNodeState(a2, 783 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v11) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v11, a4, 1);
    }
    DependentList = (_QWORD **)PiGetDependentList(*(_QWORD *)(a2 + 32));
    v13 = DependentList;
    v14 = *DependentList;
    while ( v14 != v13 )
    {
      PiEnumerateDependentListEntry(v14, v16, &v17);
      LOBYTE(DependentList) = v16[0];
      v14 = (_QWORD *)*v14;
      if ( v16[0] )
        LOBYTE(DependentList) = PnpRequestDeviceRemovalWorker(
                                  a1,
                                  *(_QWORD *)(*(_QWORD *)(v16[0] + 312LL) + 40LL),
                                  0,
                                  1,
                                  0);
    }
  }
  return (char)DependentList;
}
