/*
 * XREFs of ?FreeDdeXactIfSupported@@YAXPEAUtagXSTATE@@@Z @ 0x1C00B95E0
 * Callers:
 *     <none>
 * Callees:
 *     IsFreeDdeXactSupported_0 @ 0x1C0002860 (IsFreeDdeXactSupported_0.c)
 *     FreeDdeXact_0 @ 0x1C0002868 (FreeDdeXact_0.c)
 */

void __fastcall FreeDdeXactIfSupported(struct tagXSTATE *a1)
{
  if ( (int)IsFreeDdeXactSupported_0() >= 0 )
    FreeDdeXact_0();
}
