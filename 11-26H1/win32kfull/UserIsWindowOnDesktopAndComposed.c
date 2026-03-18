/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x140251E2C
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = 0;
  v4 = HMValidateHandleNoSecure(a1, 1);
  if ( v4 && a2 == ***(_QWORD ***)(*(_QWORD *)(v4 + 24) + 8LL) )
    return (unsigned int)IsWindowDesktopComposed(v4) != 0;
  return v3;
}
