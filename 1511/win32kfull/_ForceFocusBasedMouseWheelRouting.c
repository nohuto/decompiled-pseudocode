/*
 * XREFs of _ForceFocusBasedMouseWheelRouting @ 0x1C02236D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ForceFocusBasedMouseWheelRouting(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  int v3; // edx

  v1 = a1;
  result = PsGetCurrentProcessWin32Process(a1);
  v3 = 0;
  if ( result )
  {
    LOBYTE(v3) = v1 != 0;
    *(_DWORD *)(result + 776) ^= (*(_DWORD *)(result + 776) ^ (v3 << 17)) & 0x20000;
    return 1LL;
  }
  return result;
}
