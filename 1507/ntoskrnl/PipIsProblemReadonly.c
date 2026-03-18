/*
 * XREFs of PipIsProblemReadonly @ 0x14058C4FC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessClearDeviceProblem @ 0x14058C2C8 (PiProcessClearDeviceProblem.c)
 *     PiProcessSetDeviceProblem @ 0x140693E04 (PiProcessSetDeviceProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsProblemReadonly(__int64 a1, int a2)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case 1:
    case 10:
    case 14:
    case 18:
    case 19:
    case 21:
    case 22:
    case 28:
    case 31:
    case 32:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 43:
    case 44:
    case 48:
    case 51:
    case 52:
    case 53:
      result = 0LL;
      break;
    case 3:
      result = (*(_DWORD *)(a1 + 396) >> 17) & 1;
      break;
    default:
      result = 1LL;
      break;
  }
  return result;
}
