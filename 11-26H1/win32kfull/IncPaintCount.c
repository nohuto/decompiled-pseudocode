/*
 * XREFs of IncPaintCount @ 0x14002FB54
 * Callers:
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 * Callees:
 *     <none>
 */

int __fastcall IncPaintCount(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD *)(v1 + 632);
  LODWORD(v3) = v2 + 1;
  *(_DWORD *)(v1 + 632) = v2 + 1;
  if ( !v2 )
  {
    EtwTraceWakePump(v1, a1, 15LL);
    LODWORD(v3) = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 520), 0, 0);
    if ( (v3 & 1) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 480) + 8LL), 0x20u);
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(v1 + 480) + 4LL), 0x20u);
      W32GetUserSessionState(v5, v4);
      v3 = *(_QWORD *)(v1 + 480);
      if ( (*(_DWORD *)(v3 + 16) & 0x20) != 0 )
        LODWORD(v3) = KeSetEvent(*(PRKEVENT *)(v1 + 760), 2, 0);
    }
  }
  return v3;
}
