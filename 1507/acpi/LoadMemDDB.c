/*
 * XREFs of LoadMemDDB @ 0x1C0005EEC
 * Callers:
 *     Load @ 0x1C0005E10 (Load.c)
 * Callees:
 *     LoadDDB @ 0x1C000623C (LoadDDB.c)
 *     _guard_dispatch_icall_nop @ 0x1C00237F0 (_guard_dispatch_icall_nop.c)
 *     LogError @ 0x1C00442B8 (LogError.c)
 *     PrintDebugMessage @ 0x1C00459AC (PrintDebugMessage.c)
 */

__int64 __fastcall LoadMemDDB(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v8; // esi

  if ( ghValidateTable && (v8 = ghValidateTable(a2, qword_1C005ABD0)) != 0 )
  {
    v6 = -1072431079;
    LogError(3222536217LL);
    PrintDebugMessage(81, v8, 0, 0, 0LL);
  }
  else
  {
    return (unsigned int)LoadDDB(a1, a2, *(_QWORD *)(a1 + 80), a3);
  }
  return v6;
}
