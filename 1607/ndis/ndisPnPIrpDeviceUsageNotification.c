/*
 * XREFs of ndisPnPIrpDeviceUsageNotification @ 0x1C00D42B4
 * Callers:
 *     ndisPnPDispatch @ 0x1C009DAC0 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPnPHandlePagingIrp @ 0x1C00D4060 (ndisPnPHandlePagingIrp.c)
 */

__int64 __fastcall ndisPnPIrpDeviceUsageNotification(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  char v10; // bl
  int v11; // eax

  v5 = *(_QWORD *)(a3 + 184);
  v6 = 0;
  if ( *(_DWORD *)(v5 + 16) == 1 )
  {
    v10 = *(_BYTE *)(v5 + 8);
    *(_OWORD *)(v5 - 72) = *(_OWORD *)v5;
    *(_OWORD *)(v5 - 56) = *(_OWORD *)(v5 + 16);
    *(_OWORD *)(v5 - 40) = *(_OWORD *)(v5 + 32);
    *(_QWORD *)(v5 - 24) = *(_QWORD *)(v5 + 48);
    *(_BYTE *)(v5 - 69) = 0;
    v11 = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3896), a3);
    v6 = v11;
    if ( !v10 || v11 >= 0 )
      ndisPnPHandlePagingIrp(a1, a2, *(_BYTE *)(v5 + 8));
    *(_DWORD *)(a3 + 48) = v6;
    *a5 = 0;
  }
  else
  {
    *a5 = 1;
  }
  return v6;
}
