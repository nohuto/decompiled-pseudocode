/*
 * XREFs of ?RescaleIconMetrics@@YAXPEAUtagICONMETRICSW@@@Z @ 0x1C01CD4E0
 * Callers:
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1C01CD718 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleIconMetrics(struct tagICONMETRICSW *a1)
{
  INT v2; // eax
  INT v3; // ecx

  v2 = EngMulDiv(*((_DWORD *)a1 + 1), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  v3 = *((_DWORD *)a1 + 2);
  *((_DWORD *)a1 + 1) = v2;
  *((_DWORD *)a1 + 2) = EngMulDiv(v3, *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 4) = EngMulDiv(*((_DWORD *)a1 + 4), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 5) = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 8678LL), 96);
}
