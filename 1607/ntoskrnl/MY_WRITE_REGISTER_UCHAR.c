/*
 * XREFs of MY_WRITE_REGISTER_UCHAR @ 0x140171F88
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MY_WRITE_REGISTER_UCHAR(_BYTE *a1, char a2)
{
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  *a1 = a2;
  _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
}
