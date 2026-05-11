/*
 * XREFs of USBType1NeedLockDelay @ 0x1C0020028
 * Callers:
 *     USBType1StateChangePin @ 0x1C0004600 (USBType1StateChangePin.c)
 * Callees:
 *     <none>
 */

bool __fastcall USBType1NeedLockDelay(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // zf
  int v3; // ecx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 160LL);
  if ( !*(_BYTE *)(v1 + 4) || (v2 = *(_WORD *)(v1 + 5) == 0, v3 = 1, v2) )
    v3 = 0;
  return v3 != 0;
}
