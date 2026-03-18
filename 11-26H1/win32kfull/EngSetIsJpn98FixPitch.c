/*
 * XREFs of EngSetIsJpn98FixPitch @ 0x14030A790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EngSetIsJpn98FixPitch(int a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetSessionState(a1, a2);
  *(_DWORD *)(*(_QWORD *)(result + 96) + 19600LL) = a1;
  return result;
}
