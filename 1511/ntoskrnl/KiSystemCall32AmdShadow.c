/*
 * XREFs of KiSystemCall32AmdShadow @ 0x140225F40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KiSystemCall32AmdShadow()
{
  unsigned __int64 v0; // rax
  unsigned __int64 v2; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  __asm { swapgs }
  __writegsqword(0x7010u, v0);
  if ( !_bittest(MK_FP(__GS__, 28696LL), 1u) )
    __writecr3(v2);
  __writegsqword(0x7010u, (unsigned __int64)&retaddr);
  JUMPOUT(0x140225B61LL);
}
