/*
 * XREFs of SmpGetTime @ 0x140012684
 * Callers:
 *     SmpProcessFileRenames @ 0x140007624 (SmpProcessFileRenames.c)
 *     SmpLogPFROError @ 0x140012918 (SmpLogPFROError.c)
 * Callees:
 *     <none>
 */

void __fastcall SmpGetTime(PTIME_FIELDS TimeFields)
{
  union _LARGE_INTEGER Time; // [rsp+48h] [rbp+20h] BYREF

  while ( MEMORY[0x7FFE0018] != MEMORY[0x7FFE001C] )
    ;
  while ( MEMORY[0x7FFE0024] != MEMORY[0x7FFE0028] )
    ;
  Time.QuadPart = MEMORY[0x7FFE0014] - MEMORY[0x7FFE0020];
  RtlTimeToTimeFields(&Time, TimeFields);
}
