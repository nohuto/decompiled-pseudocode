/*
 * XREFs of USBType1SetCopyProtect @ 0x1C0021790
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetByte @ 0x1C001C700 (USBHwGetSetByte.c)
 */

__int64 __fastcall USBType1SetCopyProtect(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+48h] [rbp+10h] BYREF

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
  v4 = 0;
  if ( a2 )
    v4 = 2;
  v6 = v4;
  return USBHwGetSetByte(v3, a3, 0, 1, &v6, 0);
}
