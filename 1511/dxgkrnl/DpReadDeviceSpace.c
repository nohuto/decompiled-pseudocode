/*
 * XREFs of DpReadDeviceSpace @ 0x1C0010240
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpReadDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // edi
  __int64 v8; // r8
  __int64 (__fastcall *v9)(_QWORD, __int64, void *, _QWORD, ULONG); // r11
  ULONG BusDataByOffset; // eax
  __int64 v11; // rax
  _QWORD *v13; // rax
  __int64 (__fastcall *v14)(_QWORD, void *, _QWORD, _QWORD); // rax
  __int64 v15; // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_16;
  if ( !a3 )
    goto LABEL_16;
  if ( !a6 )
    goto LABEL_16;
  *a6 = 0;
  a1 = *(_QWORD *)(a1 + 64);
  if ( !a1 )
    goto LABEL_16;
  if ( *(_DWORD *)(a1 + 16) != 1953656900 )
    goto LABEL_16;
  v8 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)(v8 - 2) > 1 || (_DWORD)a2 && (_DWORD)a2 != 1382638416 && (unsigned int)a2 + 0x80000000 > 1 )
    goto LABEL_16;
  if ( (_DWORD)a2 == -2147483647 )
  {
    if ( (_DWORD)v8 != 2 )
    {
LABEL_16:
      v6 = -1073741811;
      v13 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v13[5] = -1073741811LL;
LABEL_17:
      v13[3] = &DpReadDeviceSpace;
      v13[4] = 0LL;
      WdLogEvent5_WdError(v13);
      return v6;
    }
    if ( (*(_DWORD *)(a1 + 2628) & 4) == 0 )
    {
      v6 = -1071774661;
      v13 = (_QWORD *)WdLogNewEntry5_WdError(a1);
      v13[5] = -1071774661LL;
      goto LABEL_17;
    }
    v14 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(a1 + 1624);
    if ( v14 )
    {
      BusDataByOffset = v14(*(_QWORD *)(a1 + 1600), a3, Offset, Length);
      goto LABEL_12;
    }
LABEL_24:
    v6 = -1073741823;
    v15 = WdLogNewEntry5_WdWarning(a1, a2, v8, 0x80000000LL);
    *(_QWORD *)(v15 + 24) = &DpReadDeviceSpace;
    *(_QWORD *)(v15 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v15);
    return v6;
  }
  if ( (_DWORD)a2 == 0x80000000 )
  {
    BusDataByOffset = HalGetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
    goto LABEL_12;
  }
  v9 = *(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD, ULONG))(a1 + 616);
  if ( !v9 )
    goto LABEL_24;
  BusDataByOffset = v9(*(_QWORD *)(a1 + 568), a2, a3, Offset, Length);
LABEL_12:
  *a6 = BusDataByOffset;
  v11 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v11 + 24) = &DpReadDeviceSpace;
  *(_QWORD *)(v11 + 32) = *a6;
  WdLogEvent5_WdEvent(v11);
  return v6;
}
