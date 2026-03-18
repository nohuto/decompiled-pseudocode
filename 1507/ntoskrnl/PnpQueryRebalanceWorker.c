/*
 * XREFs of PnpQueryRebalanceWorker @ 0x140680CF0
 * Callers:
 *     PnpQueryRebalance @ 0x140680C44 (PnpQueryRebalance.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140047E40 (RtlCopyUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpCancelStopDeviceNode @ 0x140680AE4 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x140680E54 (PnpQueryStopDeviceNode.c)
 */

__int64 __fastcall PnpQueryRebalanceWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned int *a3,
        _DWORD *a4,
        PUNICODE_STRING DestinationString,
        char a6)
{
  unsigned int v7; // r14d
  int v8; // ecx
  __int64 v11; // r12
  int StopDeviceNode; // eax
  int v13; // edi
  __int64 v14; // rbx
  _QWORD *v15; // rsi
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0;
  v8 = *(_DWORD *)(BugCheckParameter2 + 300);
  v11 = a2;
  if ( v8 != 776 || (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) != 0 )
  {
    v18 = v8 - 769;
    if ( (unsigned int)(v8 - 769) <= 0x11 )
    {
      v19 = 196871;
      if ( _bittest(&v19, v18) )
        return v7;
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) != 0 )
      return v7;
    v7 = -1073741823;
  }
  else
  {
    LOBYTE(a2) = a6;
    StopDeviceNode = PnpQueryStopDeviceNode(BugCheckParameter2, a2);
    v7 = StopDeviceNode;
    if ( StopDeviceNode >= 0 )
    {
      if ( StopDeviceNode == 281 )
        PipSetDevNodeFlags(BugCheckParameter2, 1024);
      v13 = *a3;
      v14 = *(_QWORD *)(BugCheckParameter2 + 32);
      v15 = (_QWORD *)(v11 + ((unsigned __int64)*a3 << 6));
      memset(v15, 0, 0x40uLL);
      v15[3] = 0LL;
      *v15 = v14;
      *((_DWORD *)v15 + 3) = 4;
      PnpGetResourceRequirementsForAssignTable(
        (unsigned __int64)v15,
        v11 + ((unsigned __int64)(unsigned int)(v13 + 1) << 6),
        &v21,
        v16);
      v17 = (unsigned __int64)*a3 << 6;
      if ( *(int *)(v17 + v11 + 56) >= 0 )
      {
        if ( (*(_DWORD *)(v17 + v11 + 8) & 0x20) == 0 )
          ++*a3;
        goto LABEL_15;
      }
      v7 = *(_DWORD *)(v17 + v11 + 56);
    }
    PnpCancelStopDeviceNode(BugCheckParameter2);
  }
LABEL_15:
  if ( (v7 & 0x80000000) != 0 )
  {
    if ( a4 )
      *a4 = 6;
    if ( DestinationString && DestinationString->MaximumLength >= *(_WORD *)(BugCheckParameter2 + 40) )
      RtlCopyUnicodeString(DestinationString, (PCUNICODE_STRING)(BugCheckParameter2 + 40));
  }
  return v7;
}
