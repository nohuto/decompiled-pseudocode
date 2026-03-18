/*
 * XREFs of EngGetIsJpn98FixPitch @ 0x14030A760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngGetIsJpn98FixPitch(int a1, __int64 a2)
{
  return *(unsigned int *)(*(_QWORD *)(W32GetSessionState(a1, a2) + 96) + 19600LL);
}
