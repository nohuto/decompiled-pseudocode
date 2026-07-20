/*
 * XREFs of sub_140011F14 @ 0x140011F14
 * Callers:
 *     sub_140006D94 @ 0x140006D94 (sub_140006D94.c)
 *     sub_1400121A8 @ 0x1400121A8 (sub_1400121A8.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140011F14(PTIME_FIELDS TimeFields)
{
  union _LARGE_INTEGER Time; // [rsp+48h] [rbp+20h] BYREF

  while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
    ;
  while ( MEMORY[0x7FFE0024] != MEMORY[0x7FFE0028] )
    ;
  Time.QuadPart = MEMORY[0x7FFE0014] - MEMORY[0x7FFE0020];
  RtlTimeToTimeFields(&Time, TimeFields);
}
