/*
 * XREFs of USBType1ClearLeftovers @ 0x1C00045B0
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004840 (USBType1StateChangePin.c)
 *     USBType1HandleUrbError @ 0x1C0021638 (USBType1HandleUrbError.c)
 * Callees:
 *     <none>
 */

LONG __fastcall USBType1ClearLeftovers(_QWORD *a1)
{
  __int64 v1; // r8
  LONG result; // eax

  v1 = a1[17];
  *(_DWORD *)(v1 + 96) = 0;
  if ( *(_DWORD *)(v1 + 108) )
  {
    a1[8] += *(unsigned int *)(*(_QWORD *)(v1 + 120) + 36LL);
    a1[9] += *(unsigned int *)(*(_QWORD *)(v1 + 120) + 36LL);
    *(_DWORD *)(v1 + 108) = 0;
    return KeReleaseSemaphore((PRKSEMAPHORE)(v1 + 136), 0, 1, 0);
  }
  return result;
}
