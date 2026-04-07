/*
 * XREFs of ?SetStopResult@ActivityData@?$ActivityBase@$00$0A@$04@wil@@QEAA_NJPEAJ@Z @ 0x180010384
 * Callers:
 *     ?Stop@?$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z @ 0x18000FEC0 (-Stop@-$ActivityBase@$00$0A@$04@wil@@QEAAXJ@Z.c)
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180010080 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::ActivityBase<1,0,5>::ActivityData::SetStopResult(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // r10d

  v3 = *(_DWORD *)(a1 + 80);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(a1 + 84) >= 0 )
    *(_DWORD *)(a1 + 84) = a2;
  if ( a3 )
    *a3 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 80) = v3 - 1;
  return v3 == 1;
}
