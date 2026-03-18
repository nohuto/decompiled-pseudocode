/*
 * XREFs of DpWriteDeviceSpace @ 0x1C0022DD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpWriteDeviceSpace(__int64 a1, __int64 a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // edi
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 (__fastcall *v10)(_QWORD, void *, _QWORD, _QWORD); // rax
  __int64 v11; // rax
  ULONG v12; // eax
  __int64 (__fastcall *v13)(_QWORD, __int64, void *, _QWORD, ULONG); // r11
  __int64 v14; // rbx
  __int64 v15; // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_23;
  if ( !a3 )
    goto LABEL_23;
  if ( !a6 )
    goto LABEL_23;
  *a6 = 0;
  a1 = *(_QWORD *)(a1 + 64);
  if ( !a1 )
    goto LABEL_23;
  if ( *(_DWORD *)(a1 + 16) != 1953656900 )
    goto LABEL_23;
  v8 = *(unsigned int *)(a1 + 20);
  if ( (unsigned int)(v8 - 2) > 1 || (_DWORD)a2 != 1382638416 && (_DWORD)a2 && (unsigned int)a2 + 0x80000000 > 1 )
    goto LABEL_23;
  if ( (_DWORD)a2 != -2147483647 )
  {
    if ( (_DWORD)a2 == 0x80000000 )
    {
      v12 = HalSetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
      goto LABEL_22;
    }
    v13 = *(__int64 (__fastcall **)(_QWORD, __int64, void *, _QWORD, ULONG))(a1 + 608);
    if ( v13 )
    {
      v12 = v13(*(_QWORD *)(a1 + 568), a2, a3, Offset, Length);
      goto LABEL_22;
    }
    v14 = -1073741823LL;
LABEL_24:
    v6 = v14;
    v9 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v9[5] = v14;
    goto LABEL_25;
  }
  if ( (_DWORD)v8 != 2 )
  {
LABEL_23:
    v14 = -1073741811LL;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(a1 + 2628) & 4) == 0 )
  {
    v6 = -1071774661;
    v9 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v9[5] = -1071774661LL;
LABEL_25:
    v9[3] = &DpWriteDeviceSpace;
    v9[4] = 0LL;
    WdLogEvent5_WdError(v9);
    return v6;
  }
  v10 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(a1 + 1632);
  if ( v10 )
  {
    v12 = v10(*(_QWORD *)(a1 + 1600), a3, Offset, Length);
LABEL_22:
    *a6 = v12;
    v15 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v15 + 24) = &DpWriteDeviceSpace;
    *(_QWORD *)(v15 + 32) = *a6;
    WdLogEvent5_WdEvent(v15);
    return v6;
  }
  v6 = -1073741823;
  v11 = WdLogNewEntry5_WdWarning(a1, a2, v8, 0x80000000LL);
  *(_QWORD *)(v11 + 24) = &DpWriteDeviceSpace;
  *(_QWORD *)(v11 + 32) = -1073741823LL;
  WdLogEvent5_WdWarning(v11);
  return v6;
}
