/*
 * XREFs of UserIsWindowOnDesktopAndComposed @ 0x1C00EF2C0
 * Callers:
 *     GreTransferDwmStateToSpriteState @ 0x1C00EF478 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C01324D8 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowOnDesktopAndComposed(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax

  v4 = a2;
  v5 = 0;
  LOBYTE(a2) = 1;
  v6 = HMValidateHandleNoSecure(a1, a2, a3, a4);
  if ( v6 && v4 == *(_QWORD *)(*(_QWORD *)(v6 + 24) + 40LL) )
    return (unsigned int)IsWindowDesktopComposed(v6) != 0;
  return v5;
}
