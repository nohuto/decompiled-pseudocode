/*
 * XREFs of PnpQueryRebalanceWorker @ 0x14063024C
 * Callers:
 *     PnpQueryRebalance @ 0x1406301A0 (PnpQueryRebalance.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceNode @ 0x14062FFD4 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1406303E8 (PnpQueryStopDeviceNode.c)
 */

__int64 __fastcall PnpQueryRebalanceWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        char a6)
{
  _DWORD *v6; // r14
  int v8; // ecx
  int v9; // r15d
  __int64 v12; // r13
  int StopDeviceNode; // eax
  unsigned int v14; // edi
  __int64 v15; // rbx
  _QWORD *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v6 = a5;
  v8 = *(_DWORD *)(BugCheckParameter2 + 300);
  v9 = 0;
  v12 = a2;
  if ( v8 == 776 && (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) == 0 )
  {
    LOBYTE(a2) = a6;
    StopDeviceNode = PnpQueryStopDeviceNode(BugCheckParameter2, a2);
    v9 = StopDeviceNode;
    if ( StopDeviceNode < 0 )
    {
      PnpCancelStopDeviceNode(BugCheckParameter2);
      if ( v6 )
        *v6 = 1;
    }
    else
    {
      if ( StopDeviceNode == 281 )
        PipSetDevNodeFlags(BugCheckParameter2, 1024);
      v14 = *a3;
      v15 = *(_QWORD *)(BugCheckParameter2 + 32);
      v16 = (_QWORD *)(v12 + ((unsigned __int64)v14 << 6));
      memset(v16, 0, 0x40uLL);
      v16[3] = 0LL;
      *v16 = v15;
      *((_DWORD *)v16 + 3) = 4;
      PnpGetResourceRequirementsForAssignTable((unsigned __int64)v16, v12 + ((unsigned __int64)(v14 + 1) << 6), &v21);
      v17 = (unsigned __int64)(unsigned int)*v22 << 6;
      if ( *(int *)(v17 + v12 + 56) < 0 )
      {
        v9 = *(_DWORD *)(v17 + v12 + 56);
        PnpCancelStopDeviceNode(BugCheckParameter2);
        if ( v6 )
          *v6 = 2;
      }
      else if ( (*(_DWORD *)(v17 + v12 + 8) & 0x20) == 0 )
      {
        ++*v22;
      }
    }
LABEL_20:
    if ( v9 < 0 )
    {
LABEL_21:
      if ( a4 )
        *a4 = BugCheckParameter2;
      return (unsigned int)v9;
    }
    goto LABEL_23;
  }
  v18 = v8 - 769;
  if ( (unsigned int)(v8 - 769) > 0x11 || (v19 = 196871, !_bittest(&v19, v18)) )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) == 0 )
    {
      v9 = -1073741823;
      if ( a5 )
        *a5 = 3;
      goto LABEL_21;
    }
  }
  if ( a5 )
  {
    *a5 = 4;
    goto LABEL_20;
  }
LABEL_23:
  if ( a4 )
    *a4 = 0LL;
  if ( v6 )
    *v6 = 0;
  return (unsigned int)v9;
}
