/*
 * XREFs of MiApplyBytestreamFixup @ 0x140130FF4
 * Callers:
 *     MiSwitchBaseAddress @ 0x14046BCC4 (MiSwitchBaseAddress.c)
 * Callees:
 *     <none>
 */

void __fastcall MiApplyBytestreamFixup(__int64 a1, _QWORD *a2, __int64 a3)
{
  *a2 += a3;
}
