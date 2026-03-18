/*
 * XREFs of AcpiPortarbAddAllocation @ 0x1C007C800
 * Callers:
 *     <none>
 * Callees:
 *     AcpiArblibGetNextAlias @ 0x1C0079200 (AcpiArblibGetNextAlias.c)
 */

char __fastcall AcpiPortarbAddAllocation(__int64 a1, __int64 a2)
{
  ULONG Flags; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  char v7; // bp
  UCHAR v8; // bp
  __int16 v9; // r15
  char result; // al
  ULONGLONG Start; // [rsp+60h] [rbp+8h] BYREF

  Flags = 1;
  if ( (*(_BYTE *)(*(_QWORD *)(a2 + 40) + 36LL) & 1) != 0 )
    Flags = 3;
  RtlAddRange(
    *(PRTL_RANGE_LIST *)(a1 + 48),
    *(_QWORD *)a2,
    *(_QWORD *)(a2 + 8),
    *(_BYTE *)(a2 + 66),
    Flags,
    0LL,
    *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)a2;
  v7 = *(_BYTE *)(a2 + 66);
  Start = *(_QWORD *)a2;
  v8 = v7 | 0x10;
  v9 = *(_WORD *)(*(_QWORD *)(v5 + 40) + 4LL);
  while ( 1 )
  {
    result = AcpiArblibGetNextAlias(v9, v6, &Start);
    if ( !result )
      break;
    v6 = Start;
    RtlAddRange(
      *(PRTL_RANGE_LIST *)(a1 + 48),
      Start,
      *(_QWORD *)(*(_QWORD *)(a2 + 40) + 16LL) + Start - 1,
      v8,
      Flags,
      0LL,
      *(PVOID *)(*(_QWORD *)(a2 + 32) + 32LL));
  }
  return result;
}
