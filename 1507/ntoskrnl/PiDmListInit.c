/*
 * XREFs of PiDmListInit @ 0x1405ABF60
 * Callers:
 *     PiDmInit @ 0x1407DB654 (PiDmInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P[2]; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)P = 0LL;
  HIDWORD(P[1]) = a1;
  v1 = PiDmEnumObjectsWithCallback(
         *((_DWORD *)&unk_14029A1A0 + 10 * a1),
         (__int64 (__fastcall *)(unsigned int *, __int64, _BYTE *))PiDmListInitEnumCallback,
         (__int64)P);
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x5A706E50u);
  return v1;
}
