/*
 * XREFs of _RegisterClassEx @ 0x1C0059EFC
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C005AF90 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     InternalRegisterClassEx @ 0x1C005CF60 (InternalRegisterClassEx.c)
 *     HMValidateHandleNoRip @ 0x1C007E714 (HMValidateHandleNoRip.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, __int64 a4)
{
  unsigned int v5; // esi
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax

  v5 = a4;
  v7 = a2;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    LOBYTE(a2) = 7;
    v11 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), a2);
    if ( v11 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(v11 + 48);
  }
  v8 = InternalRegisterClassEx(a1, a3, v5, a4);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  *(_QWORD *)(v8 + 48) = v7[1];
  *(_QWORD *)(v8 + 40) = *v7;
  result = *(unsigned __int16 *)(v8 + 10);
  *(_WORD *)(v9 + 32) = 0;
  return result;
}
