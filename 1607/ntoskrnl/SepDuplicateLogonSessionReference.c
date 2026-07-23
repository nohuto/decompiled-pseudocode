/*
 * XREFs of SepDuplicateLogonSessionReference @ 0x140080A84
 * Callers:
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLogonSession @ 0x140478574 (SepReferenceLogonSession.c)
 */

__int64 __fastcall SepDuplicateLogonSessionReference(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // rdi

  if ( (*(_DWORD *)(a2 + 200) & 0x20) != 0 )
  {
    v5 = (_QWORD *)(a1 + 216);
    result = SepReferenceLogonSession(a2 + 24, a1 + 216);
    if ( (int)result < 0 )
    {
      *(_DWORD *)(a1 + 200) |= 0x20u;
      *v5 = 0LL;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 216);
    *(_QWORD *)(a1 + 216) = v3;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 24)) <= 1 )
      __fastfail(0xEu);
    return 0LL;
  }
  return result;
}
