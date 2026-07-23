/*
 * XREFs of PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140571174
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

__int64 __fastcall PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent(ULONG_PTR BugCheckParameter2, int a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  _WORD *v6; // rcx
  __int64 v7; // rcx
  unsigned __int16 *v8; // rdi
  _WORD *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  if ( !BugCheckParameter2 )
    goto LABEL_18;
  result = *(_QWORD *)(BugCheckParameter2 + 312);
  v4 = *(_QWORD *)(result + 40);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(BugCheckParameter2, *(unsigned __int16 *)(BugCheckParameter2 + 2));
    v5 = *(_QWORD *)(BugCheckParameter2 + 8);
    if ( v5 )
    {
      IoAddTriageDumpDataBlock(v5, *(__int16 *)(v5 + 2));
      v6 = (_WORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL);
      if ( *v6 )
      {
        IoAddTriageDumpDataBlock((int)v6, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 8) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 8) + 56LL));
      }
    }
    v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL);
    if ( v7 )
    {
      v8 = (unsigned __int16 *)(v7 + 40);
      IoAddTriageDumpDataBlock(v7, 720);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((int)v8, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v8 + 1), *v8);
      }
      v9 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((int)v9, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 56LL));
      }
      v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
      if ( v10 && *(_WORD *)(v10 + 56) )
      {
        IoAddTriageDumpDataBlock(v10 + 56, 2);
        v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 64), *(unsigned __int16 *)(v11 + 56));
      }
    }
LABEL_18:
    KeBugCheckEx(0xCAu, 2uLL, BugCheckParameter2, 0LL, 0LL);
  }
  if ( v4 != -40 )
    return PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, *(_QWORD *)(v4 + 48), a2);
  return result;
}
