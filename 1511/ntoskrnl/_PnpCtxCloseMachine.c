/*
 * XREFs of _PnpCtxCloseMachine @ 0x140692704
 * Callers:
 *     PipMigratePnpState @ 0x1407711B4 (PipMigratePnpState.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxCloseMachine @ 0x140699978 (_SysCtxCloseMachine.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PVOID *P)
{
  PVOID v2; // rcx
  PVOID v3; // rcx
  PVOID v4; // rcx
  PVOID v5; // rcx
  PVOID v6; // rcx
  PVOID v7; // rcx
  PVOID v8; // rcx
  PVOID v9; // rcx

  v2 = P[2];
  if ( v2 )
    ZwClose(v2);
  v3 = P[3];
  if ( v3 )
    ZwClose(v3);
  v4 = P[4];
  if ( v4 )
    ZwClose(v4);
  v5 = P[5];
  if ( v5 )
    ZwClose(v5);
  v6 = P[6];
  if ( v6 )
    ZwClose(v6);
  v7 = P[7];
  if ( v7 )
    ZwClose(v7);
  v8 = P[8];
  if ( v8 )
    ZwClose(v8);
  v9 = P[9];
  if ( v9 )
    ZwClose(v9);
  if ( *P )
    SysCtxCloseMachine(*P);
  ExFreePoolWithTag(P, 0);
  return 0LL;
}
