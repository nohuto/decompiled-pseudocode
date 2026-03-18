/*
 * XREFs of IsPointerInputHookCall @ 0x1C00A3D40
 * Callers:
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C005810C (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  unsigned int v4; // r8d
  __int16 v5; // r9

  if ( a1 )
  {
    switch ( a1 )
    {
      case 4:
        v2 = a2[4];
        break;
      case -1:
      case 3:
      case 6:
        v2 = a2[2];
        break;
      case 12:
        v2 = a2[6];
        break;
      default:
        v2 = 0LL;
        break;
    }
  }
  else
  {
    v2 = *a2;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v2, (__int64)a2) || v3 == 528 && v5 == 582 )
    return 1;
  return v4;
}
