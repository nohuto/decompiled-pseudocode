/*
 * XREFs of ?RescaleNonClientMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01CD57C
 * Callers:
 *     ?xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z @ 0x1C01CE1B4 (-xxxSPISetNCMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagNONCLIENTMETRICSW@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RescaleNonClientMetrics(struct tagNONCLIENTMETRICSW *a1)
{
  INT v2; // eax
  INT v3; // ecx

  v2 = EngMulDiv(*((_DWORD *)a1 + 5), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  v3 = *((_DWORD *)a1 + 30);
  *((_DWORD *)a1 + 5) = v2;
  *((_DWORD *)a1 + 30) = EngMulDiv(v3, *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 31) = EngMulDiv(*((_DWORD *)a1 + 31), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 55) = EngMulDiv(*((_DWORD *)a1 + 55), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 56) = EngMulDiv(*((_DWORD *)a1 + 56), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 79) = EngMulDiv(*((_DWORD *)a1 + 79), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 102) = EngMulDiv(*((_DWORD *)a1 + 102), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 2) = EngMulDiv(*((_DWORD *)a1 + 2), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 3) = EngMulDiv(*((_DWORD *)a1 + 3), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 1) = EngMulDiv(*((_DWORD *)a1 + 1), *(unsigned __int16 *)(gpsi + 8678LL), 96);
  *((_DWORD *)a1 + 125) = EngMulDiv(*((_DWORD *)a1 + 125), *(unsigned __int16 *)(gpsi + 8678LL), 96);
}
