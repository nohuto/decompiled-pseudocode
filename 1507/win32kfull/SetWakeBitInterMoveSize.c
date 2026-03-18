/*
 * XREFs of SetWakeBitInterMoveSize @ 0x1C01D1720
 * Callers:
 *     InternalInvalidate3 @ 0x1C008F748 (InternalInvalidate3.c)
 * Callees:
 *     <none>
 */

int __fastcall SetWakeBitInterMoveSize(__int64 a1)
{
  __int64 v1; // rax

  *(_WORD *)(*(_QWORD *)(a1 + 408) + 6LL) |= 0x20u;
  *(_WORD *)(*(_QWORD *)(a1 + 408) + 4LL) |= 0x20u;
  v1 = *(_QWORD *)(a1 + 408);
  if ( (*(_BYTE *)(v1 + 10) & 0x20) != 0 )
    LODWORD(v1) = KeSetEvent(*(PRKEVENT *)(a1 + 656), 6, 0);
  return v1;
}
