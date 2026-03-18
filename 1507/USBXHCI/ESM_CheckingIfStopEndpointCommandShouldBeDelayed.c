/*
 * XREFs of ESM_CheckingIfStopEndpointCommandShouldBeDelayed @ 0x1C0039290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfStopEndpointCommandShouldBeDelayed(__int64 a1)
{
  _DWORD *v1; // rax

  v1 = *(_DWORD **)(a1 + 960);
  v1[39] = 0;
  return (*(_QWORD *)(*(_QWORD *)v1 + 232LL) & 0x4000LL) != 0 ? 33 : 21;
}
