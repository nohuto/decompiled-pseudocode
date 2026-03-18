/*
 * XREFs of IsPointerInputHookCall @ 0x1C004A2B8
 * Callers:
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C008C6AC (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  int v5; // r10d
  __int16 v6; // r11

  if ( a1 )
  {
    switch ( a1 )
    {
      case 4:
        v3 = a2[4];
        break;
      case -1:
      case 3:
      case 6:
        v3 = a2[2];
        break;
      case 12:
        v3 = a2[6];
        break;
      default:
        v3 = 0;
        break;
    }
  }
  else
  {
    v3 = *a2;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v3, a2, a3, 0LL) || v5 == 528 && v6 == 582 )
    return 1;
  return v4;
}
