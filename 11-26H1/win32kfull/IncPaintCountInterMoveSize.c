/*
 * XREFs of IncPaintCountInterMoveSize @ 0x1402E70CC
 * Callers:
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 * Callees:
 *     <none>
 */

int __fastcall IncPaintCountInterMoveSize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 632);
  LODWORD(v3) = v2 + 1;
  *(_DWORD *)(v1 + 632) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 480) + 8LL), 0x20u);
    _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 480) + 4LL), 0x20u);
    v3 = *(_QWORD *)(v1 + 480);
    if ( (*(_DWORD *)(v3 + 16) & 0x20) != 0 )
      LODWORD(v3) = KeSetEvent(*(PRKEVENT *)(v1 + 760), 6, 0);
  }
  return v3;
}
