/*
 * XREFs of PoCpuIdledSinceLastCallImprecise @ 0x1400D93B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PoCpuIdledSinceLastCallImprecise(int a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r8
  bool result; // al

  v2 = KiProcessorBlock[a1];
  result = 1;
  if ( v2 )
  {
    v3 = *a2;
    *a2 = *(_QWORD *)(v2 + 23832);
    if ( !*(_QWORD *)(v2 + 23840) && *a2 <= v3 )
      return 0;
  }
  return result;
}
