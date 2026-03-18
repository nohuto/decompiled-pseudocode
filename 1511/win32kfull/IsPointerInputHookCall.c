/*
 * XREFs of IsPointerInputHookCall @ 0x1C0084468
 * Callers:
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C00652DC (IsPointerInputMessageWithState.c)
 */

__int64 __fastcall IsPointerInputHookCall(int a1, unsigned int *a2)
{
  __int64 v2; // rcx
  int v3; // ecx
  unsigned int v4; // r8d
  __int16 v5; // r9

  switch ( a1 )
  {
    case 0:
      v2 = *a2;
      break;
    case -1:
      goto LABEL_13;
    case 4:
      v2 = a2[4];
      break;
    case 3:
    case 6:
LABEL_13:
      v2 = a2[2];
      break;
    case 12:
      v2 = a2[6];
      break;
    default:
      v2 = 0LL;
      break;
  }
  if ( (unsigned int)IsPointerInputMessageWithState(v2) || v3 == 528 && v5 == 582 )
    return 1;
  return v4;
}
